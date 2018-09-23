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
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNewActor_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "My New Actor" },
		{ "ModuleRelativePath", "MyNewActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyNewActor_Statics::NewProp_DataTable = { UE4CodeGen_Private::EPropertyClass::Object, "DataTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyNewActor, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyNewActor_Statics::NewProp_DataTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyNewActor_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyNewActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyNewActor_Statics::NewProp_DataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNewActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNewActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNewActor_Statics::ClassParams = {
		&AMyNewActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMyNewActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyNewActor_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyNewActor, 1444719372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNewActor(Z_Construct_UClass_AMyNewActor, &AMyNewActor::StaticClass, TEXT("/Script/RPG"), TEXT("AMyNewActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNewActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
