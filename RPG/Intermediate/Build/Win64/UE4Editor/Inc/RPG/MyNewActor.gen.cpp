// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/MyNewActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNewActor() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_AMyNewActor_NoRegister();
	RPG_API UClass* Z_Construct_UClass_AMyNewActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void AMyNewActor::StaticRegisterNativesAMyNewActor()
	{
	}
	UClass* Z_Construct_UClass_AMyNewActor_NoRegister()
	{
		return AMyNewActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyNewActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNewActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNewActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyNewActor.h" },
		{ "ModuleRelativePath", "MyNewActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNewActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNewActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNewActor_Statics::ClassParams = {
		&AMyNewActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyNewActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyNewActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNewActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNewActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNewActor, 41399906);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNewActor(Z_Construct_UClass_AMyNewActor, &AMyNewActor::StaticClass, TEXT("/Script/RPG"), TEXT("AMyNewActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNewActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
