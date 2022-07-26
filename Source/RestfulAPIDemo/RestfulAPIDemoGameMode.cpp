// Copyright (c) 2022, Hong Gu <guhong@88.com>. All Rights Reserved.

#include "RestfulAPIDemoGameMode.h"
#include "RestfulAPIDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARestfulAPIDemoGameMode::ARestfulAPIDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
