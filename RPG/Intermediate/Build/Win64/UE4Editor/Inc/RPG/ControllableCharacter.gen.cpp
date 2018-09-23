// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/ControllableCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllableCharacter() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_AControllableCharacter_NoRegister();
	RPG_API UClass* Z_Construct_UClass_AControllableCharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void AControllableCharacter::StaticRegisterNativesAControllableCharacter()
	{
	}
	UClass* Z_Construct_UClass_AControllableCharacter_NoRegister()
	{
		return AControllableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AControllableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControllableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllableCharacter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControllableCharacter.h" },
		{ "ModuleRelativePath", "ControllableCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControllableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllableCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControllableCharacter_Statics::ClassParams = {
		&AControllableCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AControllableCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AControllableCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControllableCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControllableCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControllableCharacter, 470106903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllableCharacter(Z_Construct_UClass_AControllableCharacter, &AControllableCharacter::StaticClass, TEXT("/Script/RPG"), TEXT("AControllableCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllableCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
