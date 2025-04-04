// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "SphereController.generated.h"

class UEnhancedInputComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class TUTORIAL_2_API ASphereController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	void Fire(const FInputActionValue& InputActionValue);
	void FireLaser(const FInputActionValue& InputActionValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inputs")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inputs")
	UInputAction* FireAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inputs")
	UInputAction* FireLaserAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inputs")
	UInputMappingContext* InputMappingContext;

private:
	void Move(const FInputActionValue& InputActionValue);
	void SetupInputComponent();
};
