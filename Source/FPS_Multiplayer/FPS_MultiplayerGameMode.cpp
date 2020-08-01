// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_MultiplayerGameMode.h"
#include "FPS_MultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_MultiplayerGameMode::AFPS_MultiplayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
