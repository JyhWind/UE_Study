// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_StudyGameMode.h"
#include "UE_StudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_StudyGameMode::AUE_StudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
