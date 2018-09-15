// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_TestCustomData_generated_h
#error "TestCustomData.generated.h already included, missing '#pragma once' in TestCustomData.h"
#endif
#define RPG_TestCustomData_generated_h

#define RPG_Source_RPG_TestCustomData_h_12_RPC_WRAPPERS
#define RPG_Source_RPG_TestCustomData_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_TestCustomData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCustomData(); \
	friend struct Z_Construct_UClass_ATestCustomData_Statics; \
public: \
	DECLARE_CLASS(ATestCustomData, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ATestCustomData)


#define RPG_Source_RPG_TestCustomData_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestCustomData(); \
	friend struct Z_Construct_UClass_ATestCustomData_Statics; \
public: \
	DECLARE_CLASS(ATestCustomData, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ATestCustomData)


#define RPG_Source_RPG_TestCustomData_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestCustomData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestCustomData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCustomData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCustomData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCustomData(ATestCustomData&&); \
	NO_API ATestCustomData(const ATestCustomData&); \
public:


#define RPG_Source_RPG_TestCustomData_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCustomData(ATestCustomData&&); \
	NO_API ATestCustomData(const ATestCustomData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCustomData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCustomData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCustomData)


#define RPG_Source_RPG_TestCustomData_h_12_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_TestCustomData_h_9_PROLOG
#define RPG_Source_RPG_TestCustomData_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_TestCustomData_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_TestCustomData_h_12_RPC_WRAPPERS \
	RPG_Source_RPG_TestCustomData_h_12_INCLASS \
	RPG_Source_RPG_TestCustomData_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_TestCustomData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_TestCustomData_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_TestCustomData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_TestCustomData_h_12_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_TestCustomData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_TestCustomData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS