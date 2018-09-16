// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/TestCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCustomData() {}
// Cross Module References
	RPG_API UScriptStruct* Z_Construct_UScriptStruct_FTestCustomData();
	UPackage* Z_Construct_UPackage__Script_RPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FTestCustomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RPG_API uint32 Get_Z_Construct_UScriptStruct_FTestCustomData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestCustomData, Z_Construct_UPackage__Script_RPG(), TEXT("TestCustomData"), sizeof(FTestCustomData), Get_Z_Construct_UScriptStruct_FTestCustomData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestCustomData(FTestCustomData::StaticStruct, TEXT("/Script/RPG"), TEXT("TestCustomData"), false, nullptr, nullptr);
static struct FScriptStruct_RPG_StaticRegisterNativesFTestCustomData
{
	FScriptStruct_RPG_StaticRegisterNativesFTestCustomData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestCustomData")),new UScriptStruct::TCppStructOps<FTestCustomData>);
	}
} ScriptStruct_RPG_StaticRegisterNativesFTestCustomData;
	struct Z_Construct_UScriptStruct_FTestCustomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SomeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SomeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SomeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SomeNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestCustomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TestCustomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestCustomData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeName_MetaData[] = {
		{ "Category", "TestCustomData" },
		{ "ModuleRelativePath", "TestCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeName = { UE4CodeGen_Private::EPropertyClass::Str, "SomeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTestCustomData, SomeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeNumber_MetaData[] = {
		{ "Category", "TestCustomData" },
		{ "ModuleRelativePath", "TestCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeNumber = { UE4CodeGen_Private::EPropertyClass::Int, "SomeNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FTestCustomData, SomeNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestCustomData_Statics::NewProp_SomeNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TestCustomData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTestCustomData),
		alignof(FTestCustomData),
		Z_Construct_UScriptStruct_FTestCustomData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestCustomData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestCustomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestCustomData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestCustomData"), sizeof(FTestCustomData), Get_Z_Construct_UScriptStruct_FTestCustomData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTestCustomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestCustomData_CRC() { return 4056716791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
