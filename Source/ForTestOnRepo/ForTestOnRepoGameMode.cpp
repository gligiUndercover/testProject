// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForTestOnRepoGameMode.h"
#include "ForTestOnRepoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForTestOnRepoGameMode::AForTestOnRepoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
