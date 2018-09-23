// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_RPGCharacter_generated_h
#error "RPGCharacter.generated.h already included, missing '#pragma once' in RPGCharacter.h"
#endif
#define RPG_RPGCharacter_generated_h

#define RPG_Source_RPG_RPGCharacter_h_13_RPC_WRAPPERS
#define RPG_Source_RPG_RPGCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_RPGCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCharacter(); \
	friend struct Z_Construct_UClass_ARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacter*>(this); }


#define RPG_Source_RPG_RPGCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARPGCharacter(); \
	friend struct Z_Construct_UClass_ARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacter*>(this); }


#define RPG_Source_RPG_RPGCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacter(ARPGCharacter&&); \
	NO_API ARPGCharacter(const ARPGCharacter&); \
public:


#define RPG_Source_RPG_RPGCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacter(ARPGCharacter&&); \
	NO_API ARPGCharacter(const ARPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacter)


#define RPG_Source_RPG_RPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_RPGCharacter_h_10_PROLOG
#define RPG_Source_RPG_RPGCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGCharacter_h_13_RPC_WRAPPERS \
	RPG_Source_RPG_RPGCharacter_h_13_INCLASS \
	RPG_Source_RPG_RPGCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_RPGCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGCharacter_h_13_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_RPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
