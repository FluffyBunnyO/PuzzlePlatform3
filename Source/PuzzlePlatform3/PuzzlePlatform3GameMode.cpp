// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatform3GameMode.h"
#include "PuzzlePlatform3Character.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatform3GameMode::APuzzlePlatform3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
