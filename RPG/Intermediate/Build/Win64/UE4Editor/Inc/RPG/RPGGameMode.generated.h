// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_RPGGameMode_generated_h
#error "RPGGameMode.generated.h already included, missing '#pragma once' in RPGGameMode.h"
#endif
#define RPG_RPGGameMode_generated_h

#define RPG_Source_RPG_RPGGameMode_h_15_RPC_WRAPPERS
#define RPG_Source_RPG_RPGGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_RPGGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGGameMode(); \
	friend struct Z_Construct_UClass_ARPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ARPGGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGGameMode)


#define RPG_Source_RPG_RPGGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARPGGameMode(); \
	friend struct Z_Construct_UClass_ARPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ARPGGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGGameMode)


#define RPG_Source_RPG_RPGGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGGameMode(ARPGGameMode&&); \
	NO_API ARPGGameMode(const ARPGGameMode&); \
public:


#define RPG_Source_RPG_RPGGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGGameMode(ARPGGameMode&&); \
	NO_API ARPGGameMode(const ARPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGGameMode)


#define RPG_Source_RPG_RPGGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_RPGGameMode_h_12_PROLOG
#define RPG_Source_RPG_RPGGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGGameMode_h_15_RPC_WRAPPERS \
	RPG_Source_RPG_RPGGameMode_h_15_INCLASS \
	RPG_Source_RPG_RPGGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_RPGGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGGameMode_h_15_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_RPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
