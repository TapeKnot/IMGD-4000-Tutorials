// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial_5GameMode.h"
#include "Tutorial_5Character.h"
#include "UObject/ConstructorHelpers.h"

ATutorial_5GameMode::ATutorial_5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
