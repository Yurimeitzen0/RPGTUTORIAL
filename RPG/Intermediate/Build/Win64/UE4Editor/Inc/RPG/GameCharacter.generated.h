// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_GameCharacter_generated_h
#error "GameCharacter.generated.h already included, missing '#pragma once' in GameCharacter.h"
#endif
#define RPG_GameCharacter_generated_h

#define RPG_Source_RPG_GameCharacter_h_18_RPC_WRAPPERS
#define RPG_Source_RPG_GameCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_GameCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameCharacter(); \
	friend struct Z_Construct_UClass_UGameCharacter_Statics; \
public: \
	DECLARE_CLASS(UGameCharacter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(UGameCharacter)


#define RPG_Source_RPG_GameCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameCharacter(); \
	friend struct Z_Construct_UClass_UGameCharacter_Statics; \
public: \
	DECLARE_CLASS(UGameCharacter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(UGameCharacter)


#define RPG_Source_RPG_GameCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameCharacter(UGameCharacter&&); \
	NO_API UGameCharacter(const UGameCharacter&); \
public:


#define RPG_Source_RPG_GameCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameCharacter(UGameCharacter&&); \
	NO_API UGameCharacter(const UGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameCharacter)


#define RPG_Source_RPG_GameCharacter_h_18_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_GameCharacter_h_15_PROLOG
#define RPG_Source_RPG_GameCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_GameCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_GameCharacter_h_18_RPC_WRAPPERS \
	RPG_Source_RPG_GameCharacter_h_18_INCLASS \
	RPG_Source_RPG_GameCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_GameCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_GameCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_GameCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_GameCharacter_h_18_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_GameCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
