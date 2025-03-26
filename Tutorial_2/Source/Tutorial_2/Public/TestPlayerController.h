// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputLibrary.h"
#include "TestPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIAL_2_API ATestPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float ProjectileSpeed;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	void Fire();

private:
	void Move(const FInputActionValue& InputActionValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input", Meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Move", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Fire", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> FireAction;
};
