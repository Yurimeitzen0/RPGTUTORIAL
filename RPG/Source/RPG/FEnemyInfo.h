// Developed by FrigidCoffin

#pragma once

#include "Engine/DataTable.h"
#include "FEnemyInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FEnemyInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EnemyInfo")
	FString EnemyName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EnemyInfo")
	int32 MHP;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EnemyInfo")
	int32 ATK;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EnemyInfo")
	int32 DEF;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EnemyInfo")
	int32 LCK;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EnemyInfo")
	TArray<FString> Abilities;
	
	
	
};
