// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/FCharacterInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCharacterInfo() {}
// Cross Module References
	RPG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfo();
	UPackage* Z_Construct_UPackage__Script_RPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FCharacterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RPG_API uint32 Get_Z_Construct_UScriptStruct_FCharacterInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterInfo, Z_Construct_UPackage__Script_RPG(), TEXT("CharacterInfo"), sizeof(FCharacterInfo), Get_Z_Construct_UScriptStruct_FCharacterInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterInfo(FCharacterInfo::StaticStruct, TEXT("/Script/RPG"), TEXT("CharacterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RPG_StaticRegisterNativesFCharacterInfo
{
	FScriptStruct_RPG_StaticRegisterNativesFCharacterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterInfo")),new UScriptStruct::TCppStructOps<FCharacterInfo>);
	}
} ScriptStruct_RPG_StaticRegisterNativesFCharacterInfo;
	struct Z_Construct_UScriptStruct_FCharacterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FCharacterInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_ClassID_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "FCharacterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_ClassID = { UE4CodeGen_Private::EPropertyClass::Str, "ClassID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterInfo, ClassID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_ClassID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_ClassID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "FCharacterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterName = { UE4CodeGen_Private::EPropertyClass::Str, "CharacterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCharacterInfo, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_ClassID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CharacterInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCharacterInfo),
		alignof(FCharacterInfo),
		Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterInfo"), sizeof(FCharacterInfo), Get_Z_Construct_UScriptStruct_FCharacterInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterInfo_CRC() { return 3526818939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
