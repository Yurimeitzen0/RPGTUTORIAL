// Developed by FrigidCoffin

#include "RPGGameMode.h"
#include "RPGPlayerController.h"
#include "RPGGameInstance.h"
#include "RPGCharacter.h"

ARPGGameMode::ARPGGameMode(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	PlayerControllerClass = ARPGPlayerController::StaticClass();
	DefaultPawnClass = ARPGCharacter::StaticClass();
	
}

void ARPGGameMode::BeginPlay()
{
	Cast<URPGGameInstance>(GetGameInstance())->Init();
}
