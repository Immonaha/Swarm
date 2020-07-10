// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwarmGameMode.h"
#include "SwarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwarmGameMode::ASwarmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
