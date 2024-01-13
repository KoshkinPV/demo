// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DemoAnimInstance.generated.h"

// Declaration

class AdemoCharacter;

/**
 * 
 */
UCLASS()
class DEMO_API UDemoAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	// Used to animation blueprint
	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);

	// We can initialize our variables and be able to use them in blueprint
	virtual void NativeInitializeAnimation() override;

private:

	// Create variable to have reference to demoCharacter
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Movement", meta = (AllowPrivateAccess = "true"))
	AdemoCharacter* demoCharacter;

	// Speed of DemoCharacter
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Speed;

	// True or false if player in air
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsInAir;
};
