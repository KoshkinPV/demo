// Copyright Epic Games, Inc. All Rights Reserved.

#include "demoCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/BoxComponent.h"

//////////////////////////////////////////////////////////////////////////
// AdemoCharacter

AdemoCharacter::AdemoCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	bIsPunching = false;

	bIsSprinting = false;
	WalkSpeed = 150;
	RunSpeed = 600;

	RightFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Fist Box"));
	RightFistCollision->SetupAttachment(GetMesh(), FName("RightFistBone"));
}

//////////////////////////////////////////////////////////////////////////
// Input

void AdemoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Dying", IE_Pressed, this, &AdemoCharacter::DyingAnim);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AdemoCharacter::Attack);


	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AdemoCharacter::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AdemoCharacter::StopSprinting);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &AdemoCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AdemoCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AdemoCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AdemoCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AdemoCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AdemoCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AdemoCharacter::OnResetVR);
}


void AdemoCharacter::BeginPlay()
{
	Super::BeginPlay();

	RightFistCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightFistCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	RightFistCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	RightFistCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

void AdemoCharacter::OnResetVR()
{
	// If demo is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in demo.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AdemoCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AdemoCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AdemoCharacter::StartSprinting()
{
	if (!bIsSprinting)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		bIsSprinting = true;
	}
}

void AdemoCharacter::StopSprinting()
{
	if (bIsSprinting)
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		bIsSprinting = false;
	}
}

void AdemoCharacter::Attack()
{
	PlayAnimMontage(AttackAnimation, FName("Cross_Attack"));
}

void AdemoCharacter::EnableWalk()
{
	UE_LOG(LogTemp, Warning, TEXT("Enable walk"))
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}

void AdemoCharacter::DyingAnim()
{
	PlayAnimMontage(DyingAnimation, FName("Dying"));
}

void AdemoCharacter::PlayAnimMontage(UAnimMontage* MontageToPlay, FName SectionName)
{
	// Starts a dying animation when c button is pressed
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	// Check instance and animations
	if (AnimInstance && MontageToPlay)
	{
		// Animation shout play once and u cant start new while first is playing
		if (!AnimInstance->Montage_IsPlaying(MontageToPlay))
		{
			// Disable character movement
			GetCharacterMovement()->DisableMovement();

			// Get time it takes to play montage 
			const int32 SectionIndex = MontageToPlay->GetSectionIndex(SectionName);
			const int32 SectionLength = MontageToPlay->GetSectionLength(SectionIndex);
			
			// Play montage
			AnimInstance->Montage_Play(MontageToPlay);
			AnimInstance->Montage_JumpToSection(SectionName);

			// Set timer to enable walking after montage play
			GetWorldTimerManager().SetTimer(TimerMovement, this, &AdemoCharacter::EnableWalk, SectionLength);
		}
	}
}

void AdemoCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AdemoCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AdemoCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AdemoCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
