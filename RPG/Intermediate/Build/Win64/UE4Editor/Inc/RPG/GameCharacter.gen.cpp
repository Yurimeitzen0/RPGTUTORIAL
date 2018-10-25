// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/GameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCharacter() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_UGameCharacter_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UGameCharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void UGameCharacter::StaticRegisterNativesUGameCharacter()
	{
	}
	UClass* Z_Construct_UClass_UGameCharacter_NoRegister()
	{
		return UGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_UGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MMP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameCharacter.h" },
		{ "ModuleRelativePath", "GameCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_LCK_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_LCK = { UE4CodeGen_Private::EPropertyClass::Int, "LCK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, LCK), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_LCK_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_LCK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_DEF_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_DEF = { UE4CodeGen_Private::EPropertyClass::Int, "DEF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, DEF), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_DEF_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_DEF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_ATK_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_ATK = { UE4CodeGen_Private::EPropertyClass::Int, "ATK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, ATK), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_ATK_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_ATK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_MP_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_MP = { UE4CodeGen_Private::EPropertyClass::Int, "MP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, MP), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_MP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_HP = { UE4CodeGen_Private::EPropertyClass::Int, "HP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, HP), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_MMP_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_MMP = { UE4CodeGen_Private::EPropertyClass::Int, "MMP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, MMP), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_MMP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_MMP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_MHP_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_MHP = { UE4CodeGen_Private::EPropertyClass::Int, "MHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, MHP), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_MHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_MHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCharacter_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "GameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameCharacter_Statics::NewProp_CharacterName = { UE4CodeGen_Private::EPropertyClass::Str, "CharacterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameCharacter, CharacterName), METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::NewProp_CharacterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_LCK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_DEF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_ATK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_MP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_MMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_MHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCharacter_Statics::NewProp_CharacterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameCharacter_Statics::ClassParams = {
		&UGameCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UGameCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameCharacter, 3965613802);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameCharacter(Z_Construct_UClass_UGameCharacter, &UGameCharacter::StaticClass, TEXT("/Script/RPG"), TEXT("UGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
