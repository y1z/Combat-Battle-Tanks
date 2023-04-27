// Copyright Epic Games, Inc. All Rights Reserved.

#include "Combat_Battle_TanksGameMode.h"
#include "Combat_Battle_TanksCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombat_Battle_TanksGameMode::ACombat_Battle_TanksGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
