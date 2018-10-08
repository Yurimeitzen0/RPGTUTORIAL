// Developed by FrigidCoffin

#include "RPGGameMode.h"
#include "RPGPlayerController.h"
#include "RPGCharacter.h"

ARPGGameMode::ARPGGameMode(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	PlayerControllerClass = ARPGPlayerController::StaticClass();
	DefaultPawnClass = ARPGCharacter::StaticClass();
	
}
