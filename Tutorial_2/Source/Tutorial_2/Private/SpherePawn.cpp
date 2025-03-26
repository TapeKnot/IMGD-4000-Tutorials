// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePawn.h"

// Sets default values
ASpherePawn::ASpherePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

}

// Called when the game starts or when spawned
void ASpherePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpherePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpherePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASpherePawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASpherePawn::MoveRight);

}

void ASpherePawn::MoveForward(float Amount)
{
	PawnMovement->AddInputVector(GetActorForwardVector() * Amount);
}

void ASpherePawn::MoveRight(float Amount)
{
	PawnMovement->AddInputVector(GetActorRightVector() * Amount);
}
