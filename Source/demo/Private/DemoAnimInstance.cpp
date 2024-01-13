// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoAnimInstance.h"
#include "demo/demoCharacter.h"
#include "GameFramework/PawnMovementComponent.h"

// Acts like tick for animations. Get Speed
void UDemoAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (demoCharacter == nullptr)
	{
		demoCharacter = Cast<AdemoCharacter>(TryGetPawnOwner());
	}

	if (demoCharacter)
	{
		// Get demoCharacter Speed
		FVector Velocity = demoCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		// is a demo character in the air?
		bIsInAir = demoCharacter->GetMovementComponent()->IsFalling();


	}
}

// Acts like begin play create reference to demo character
void UDemoAnimInstance::NativeInitializeAnimation()
{
	demoCharacter = Cast<AdemoCharacter>(TryGetPawnOwner());
}
