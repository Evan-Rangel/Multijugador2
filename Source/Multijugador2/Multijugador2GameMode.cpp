// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multijugador2GameMode.h"
#include "Multijugador2Character.h"
#include "UObject/ConstructorHelpers.h"

AMultijugador2GameMode::AMultijugador2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
