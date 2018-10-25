// Developed by FrigidCoffin

#pragma once

#include "CoreMinimal.h"
#include "FCharacterInfo.h"
#include "FCharacterClassInfo.h"

#include "GameCharacter.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class RPG_API UGameCharacter : public UObject
{
	GENERATED_BODY()
	UGameCharacter(const FObjectInitializer & objectInitializer);

public:
	FCharacterClassInfo * ClassInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	FString CharacterName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 MHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 MMP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 MP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 ATK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 DEF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterInfo")
	int32 LCK;

	

	static UGameCharacter* CreateGameCharacter(FCharacterInfo* characterInfo, UObject* outer);
	void BeginDestroy() override;
};
