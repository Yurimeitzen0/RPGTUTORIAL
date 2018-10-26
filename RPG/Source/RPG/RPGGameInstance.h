// Developed by FrigidCoffin

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameCharacter.h"

#include "RPGGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class RPG_API URPGGameInstance : public UGameInstance
{
	GENERATED_BODY()
	URPGGameInstance(const class FObjectInitializer& ObjectInitializer);
	
public:
	TArray<UGameCharacter*> PartyMembers;
	void Init();
protected:
	bool isInitialized;

	
};
