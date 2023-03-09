// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealStudyGameModeBase.h"
#include "MyCharacter.h"

AUnrealStudyGameModeBase::AUnrealStudyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<ACharacter> BP_Character(TEXT("Blueprint'/Game/Blueprints/BP_MyCharacter.BP_MyCharacter'_C"));
	DefaultPawnClass = BP_Character.Class;
}
