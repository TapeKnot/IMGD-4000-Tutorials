// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <GameFramework/FloatingPawnMovement.h>
#include "ProjectileActor.h"
#include "DrawDebugHelpers.h"
#include "SpherePawn.generated.h"

struct FInputActionValue;

UCLASS()
class TUTORIAL_2_API ASpherePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpherePawn();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// U prefix denotes a class.
	UPROPERTY(EditAnywhere) 
	class UStaticMeshComponent* Mesh;
	virtual void Move(const FInputActionValue& InputActionValue);

	UPROPERTY(EditAnywhere)
	float ProjectileSpeed;

	void Fire(const FInputActionValue& InputActionValue);
	void FireLaser(const FInputActionValue& InputActionValue);

	FCollisionQueryParams cqp;
	FHitResult hr;

	UFUNCTION(BlueprintNativeEvent)
	void HitSomething(class UStaticMeshComponent* m);
	void HitSomething_Implementation(class UStaticMeshComponent* m);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFloatingPawnMovement* PawnMovement;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

};
