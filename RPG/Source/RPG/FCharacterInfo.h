// Developed by FrigidCoffin

#pragma once

#include "Engine/DataTable.h"
#include "FCharacterInfo.generated.h"

/**
*
*/
USTRUCT(BlueprintType)
struct FCharacterInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CharacterInfo")
	FString CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CharacterInfo")
	FString ClassID;

};
