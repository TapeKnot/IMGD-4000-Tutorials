// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayerController.h"
#include <EnhancedInputSubsystems.h>
#include <EnhancedInputComponent.h>
#include "ProjectileActor.h"

void ATestPlayerController::BeginPlay() {
	Super::BeginPlay();

	// Checks to make sure actions IMC and MoveAction are there.
	checkf(InputMappingContext, TEXT("InputMappingContext is not set in %s"), *GetNameSafe(this));
	checkf(MoveAction, TEXT("MoveAction is not set in %s"), *GetNameSafe(this));

	// Get a pointer to the EnhancedInputSubsystem
	TObjectPtr<UEnhancedInputLocalPlayerSubsystem> EnhancedInputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

	// Add the IMC to the EnhancedInputSubsystem
	if (EnhancedInputSubsystem) {
		EnhancedInputSubsystem->AddMappingContext(InputMappingContext, 0);
	}

	ProjectileSpeed = 10.f;
}

// Set up player input.
void ATestPlayerController::SetupInputComponent() {
	// Access super class to connect input
	Super::SetupInputComponent();

	// Get a pointer to the EnchancedInputComponent our PlayerController now has
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	// Bind the MoveAction to the Move method
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATestPlayerController::Move);
	EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &ATestPlayerController::Fire);
}

void ATestPlayerController::Move(const FInputActionValue& InputActionValue) {
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();

	//Get controller rotation
	const FRotator ControllerRotation = GetControlRotation();
	//Focus on Yaw
	const FRotator YawRotation(0, ControllerRotation.Yaw, 0);
	//Get forward vector
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	//Get right vector
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	//Move the character
	if (APawn* ControlPawn = GetPawn<APawn>())
	{
		ControlPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}

void ATestPlayerController::Fire()
{
	FVector loc = GetActorLocation();
	loc.Z += 100.f;
	loc.y += 50.f;

	AProjectileActor* a = GetWorld()->SpawnActor<AProjectileActor>(loc, GetControlRotation());

	a->Speed = ProjectileSpeed;
}
