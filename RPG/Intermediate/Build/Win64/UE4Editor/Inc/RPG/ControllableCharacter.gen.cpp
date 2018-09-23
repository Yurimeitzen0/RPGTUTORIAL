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
	RPG_API UClass* Z_Construct_UClass_UControllableCharacter_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UControllableCharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void UControllableCharacter::StaticRegisterNativesUControllableCharacter()
	{
	}
	UClass* Z_Construct_UClass_UControllableCharacter_NoRegister()
	{
		return UControllableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_UControllableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControllableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllableCharacter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ControllableCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControllableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IControllableCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UControllableCharacter_Statics::ClassParams = {
		&UControllableCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UControllableCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UControllableCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControllableCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UControllableCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UControllableCharacter, 2291937565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControllableCharacter(Z_Construct_UClass_UControllableCharacter, &UControllableCharacter::StaticClass, TEXT("/Script/RPG"), TEXT("UControllableCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControllableCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
