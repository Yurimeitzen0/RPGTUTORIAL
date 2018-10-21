// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/FEnemyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEnemyInfo() {}
// Cross Module References
	RPG_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyInfo();
	UPackage* Z_Construct_UPackage__Script_RPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FEnemyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RPG_API uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyInfo, Z_Construct_UPackage__Script_RPG(), TEXT("EnemyInfo"), sizeof(FEnemyInfo), Get_Z_Construct_UScriptStruct_FEnemyInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyInfo(FEnemyInfo::StaticStruct, TEXT("/Script/RPG"), TEXT("EnemyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RPG_StaticRegisterNativesFEnemyInfo
{
	FScriptStruct_RPG_StaticRegisterNativesFEnemyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyInfo")),new UScriptStruct::TCppStructOps<FEnemyInfo>);
	}
} ScriptStruct_RPG_StaticRegisterNativesFEnemyInfo;
	struct Z_Construct_UScriptStruct_FEnemyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LCK_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LCK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DEF_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DEF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ATK_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ATK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnemyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities = { UE4CodeGen_Private::EPropertyClass::Array, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnemyInfo, Abilities), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_LCK_MetaData[] = {
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_LCK = { UE4CodeGen_Private::EPropertyClass::Int, "LCK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnemyInfo, LCK), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_LCK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_LCK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_DEF_MetaData[] = {
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_DEF = { UE4CodeGen_Private::EPropertyClass::Int, "DEF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnemyInfo, DEF), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_DEF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_DEF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_ATK_MetaData[] = {
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_ATK = { UE4CodeGen_Private::EPropertyClass::Int, "ATK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnemyInfo, ATK), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_ATK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_ATK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MHP_MetaData[] = {
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MHP = { UE4CodeGen_Private::EPropertyClass::Int, "MHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnemyInfo, MHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MHP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_EnemyName_MetaData[] = {
		{ "Category", "EnemyInfo" },
		{ "ModuleRelativePath", "FEnemyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_EnemyName = { UE4CodeGen_Private::EPropertyClass::Str, "EnemyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEnemyInfo, EnemyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_EnemyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_EnemyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_LCK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_DEF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_ATK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_MHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_EnemyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EnemyInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEnemyInfo),
		alignof(FEnemyInfo),
		Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyInfo"), sizeof(FEnemyInfo), Get_Z_Construct_UScriptStruct_FEnemyInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_CRC() { return 2420726667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
