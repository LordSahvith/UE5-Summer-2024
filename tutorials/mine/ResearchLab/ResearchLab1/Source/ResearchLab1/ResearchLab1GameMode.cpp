// Copyright Epic Games, Inc. All Rights Reserved.

#include "ResearchLab1GameMode.h"
#include "ResearchLab1Character.h"
#include "UObject/ConstructorHelpers.h"

AResearchLab1GameMode::AResearchLab1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
