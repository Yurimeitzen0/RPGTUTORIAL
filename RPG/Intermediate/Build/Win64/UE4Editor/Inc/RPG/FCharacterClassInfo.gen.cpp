// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/FCharacterClassInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCharacterClassInfo() {}
// Cross Module References
	RPG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterClassInfo();
	UPackage* Z_Construct_UPackage__Script_RPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FCharacterClassInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RPG_API uint32 Get_Z_Construct_UScriptStruct_FCharacterClassInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterClassInfo, Z_Construct_UPackage__Script_RPG(), TEXT("CharacterClassInfo"), sizeof(FCharacterClassInfo), Get_Z_Construct_UScriptStruct_FCharacterClassInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterClassInfo(FCharacterClassInfo::StaticStruct, TEXT("/Script/RPG"), TEXT("CharacterClassInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RPG_StaticRegisterNativesFCharacterClassInfo
{
	FScriptStruct_RPG_StaticRegisterNativesFCharacterClassInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterClassInfo")),new UScriptStruct::TCppStructOps<FCharacterClassInfo>);
	}
} ScriptStruct_RPG_StaticRegisterNativesFCharacterClassInfo;
	struct Z_Construct_UScriptStruct_FCharacterClassInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LearnedAbilitiesLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LearnedAbilitiesLevels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LearnedAbilitiesLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LearnedAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LearnedAbilities;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LearnedAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartingAbilities;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartingAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLCK_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndLCK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDEF_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndDEF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndATK_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndATK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndMMP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndMHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLCK_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartLCK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDEF_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDEF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartATK_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartATK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartMMP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartMHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Class_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterClassInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels = { UE4CodeGen_Private::EPropertyClass::Array, "LearnedAbilitiesLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, LearnedAbilitiesLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "LearnedAbilitiesLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities = { UE4CodeGen_Private::EPropertyClass::Array, "LearnedAbilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, LearnedAbilities), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LearnedAbilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities = { UE4CodeGen_Private::EPropertyClass::Array, "StartingAbilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, StartingAbilities), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "StartingAbilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndLCK_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndLCK = { UE4CodeGen_Private::EPropertyClass::Int, "EndLCK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, EndLCK), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndLCK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndLCK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndDEF_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndDEF = { UE4CodeGen_Private::EPropertyClass::Int, "EndDEF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, EndDEF), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndDEF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndDEF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndATK_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndATK = { UE4CodeGen_Private::EPropertyClass::Int, "EndATK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, EndATK), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndATK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndATK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMMP_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMMP = { UE4CodeGen_Private::EPropertyClass::Int, "EndMMP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, EndMMP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMMP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMMP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMHP_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMHP = { UE4CodeGen_Private::EPropertyClass::Int, "EndMHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, EndMHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMHP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartLCK_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartLCK = { UE4CodeGen_Private::EPropertyClass::Int, "StartLCK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, StartLCK), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartLCK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartLCK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartDEF_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartDEF = { UE4CodeGen_Private::EPropertyClass::Int, "StartDEF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, StartDEF), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartDEF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartDEF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartATK_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartATK = { UE4CodeGen_Private::EPropertyClass::Int, "StartATK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, StartATK), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartATK_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartATK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMMP_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMMP = { UE4CodeGen_Private::EPropertyClass::Int, "StartMMP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, StartMMP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMMP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMMP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMHP_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMHP = { UE4CodeGen_Private::EPropertyClass::Int, "StartMHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, StartMHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMHP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_Class_Name_MetaData[] = {
		{ "Category", "ClassInfo" },
		{ "ModuleRelativePath", "FCharacterClassInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_Class_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Class_Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterClassInfo, Class_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_Class_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_Class_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilitiesLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_LearnedAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartingAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndLCK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndDEF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndATK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_EndMHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartLCK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartDEF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartATK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_StartMHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::NewProp_Class_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CharacterClassInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCharacterClassInfo),
		alignof(FCharacterClassInfo),
		Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterClassInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterClassInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterClassInfo"), sizeof(FCharacterClassInfo), Get_Z_Construct_UScriptStruct_FCharacterClassInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterClassInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterClassInfo_CRC() { return 1256651212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
