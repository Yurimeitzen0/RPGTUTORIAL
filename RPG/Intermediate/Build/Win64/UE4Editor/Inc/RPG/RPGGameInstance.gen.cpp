// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/RPGGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGGameInstance() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_URPGGameInstance_NoRegister();
	RPG_API UClass* Z_Construct_UClass_URPGGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void URPGGameInstance::StaticRegisterNativesURPGGameInstance()
	{
	}
	UClass* Z_Construct_UClass_URPGGameInstance_NoRegister()
	{
		return URPGGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_URPGGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RPGGameInstance.h" },
		{ "ModuleRelativePath", "RPGGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGGameInstance_Statics::ClassParams = {
		&URPGGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URPGGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGGameInstance, 3098996333);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGGameInstance(Z_Construct_UClass_URPGGameInstance, &URPGGameInstance::StaticClass, TEXT("/Script/RPG"), TEXT("URPGGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
