// Developed by FrigidCoffin

#pragma once

#include "Engine/DataTable.h"
#include "TestCustomData.generated.h"


USTRUCT(BlueprintType) struct FTestCustomData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "TestCustomData") int32 SomeNumber = 0;

	UPROPERTY(BlueprintReadOnly, Category = "TestCustomData") FString SomeName = "";

};