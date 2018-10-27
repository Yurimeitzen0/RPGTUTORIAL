// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/CombatEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEngine() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_UCombatEngine_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UCombatEngine();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void UCombatEngine::StaticRegisterNativesUCombatEngine()
	{
	}
	UClass* Z_Construct_UClass_UCombatEngine_NoRegister()
	{
		return UCombatEngine::StaticClass();
	}
	struct Z_Construct_UClass_UCombatEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEngine.h" },
		{ "ModuleRelativePath", "CombatEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatEngine_Statics::ClassParams = {
		&UCombatEngine::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000AEu,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCombatEngine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCombatEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatEngine, 3262643682);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatEngine(Z_Construct_UClass_UCombatEngine, &UCombatEngine::StaticClass, TEXT("/Script/RPG"), TEXT("UCombatEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
