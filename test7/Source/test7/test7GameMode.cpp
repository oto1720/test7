// Copyright Epic Games, Inc. All Rights Reserved.

#include "test7GameMode.h"
#include "test7Character.h"
#include "UObject/ConstructorHelpers.h"

Atest7GameMode::Atest7GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
