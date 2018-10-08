// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/RPGCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCameraComponent() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_URPGCameraComponent_NoRegister();
	RPG_API UClass* Z_Construct_UClass_URPGCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void URPGCameraComponent::StaticRegisterNativesURPGCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_URPGCameraComponent_NoRegister()
	{
		return URPGCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_URPGCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "RPGCameraComponent.h" },
		{ "ModuleRelativePath", "RPGCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraDistance_MetaData[] = {
		{ "Category", "Camera Properties" },
		{ "ModuleRelativePath", "RPGCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CameraDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URPGCameraComponent, CameraDistance), METADATA_PARAMS(Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraPitch_MetaData[] = {
		{ "Category", "Camera Properties" },
		{ "ModuleRelativePath", "RPGCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraPitch = { UE4CodeGen_Private::EPropertyClass::Float, "CameraPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URPGCameraComponent, CameraPitch), METADATA_PARAMS(Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGCameraComponent_Statics::NewProp_CameraPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGCameraComponent_Statics::ClassParams = {
		&URPGCameraComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_URPGCameraComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_URPGCameraComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URPGCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URPGCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGCameraComponent, 4154831764);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGCameraComponent(Z_Construct_UClass_URPGCameraComponent, &URPGCameraComponent::StaticClass, TEXT("/Script/RPG"), TEXT("URPGCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
