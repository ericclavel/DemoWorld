// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoWorldGameMode.h"
#include "DemoWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemoWorldGameMode::ADemoWorldGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
