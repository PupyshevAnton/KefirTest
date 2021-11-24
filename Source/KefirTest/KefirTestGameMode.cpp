// Copyright Epic Games, Inc. All Rights Reserved.

#include "KefirTestGameMode.h"
#include "KefirTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKefirTestGameMode::AKefirTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
