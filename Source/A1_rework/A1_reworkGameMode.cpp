// Copyright Epic Games, Inc. All Rights Reserved.

#include "A1_reworkGameMode.h"
#include "A1_reworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AA1_reworkGameMode::AA1_reworkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
