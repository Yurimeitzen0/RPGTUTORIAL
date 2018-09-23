// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_ControllableCharacter_generated_h
#error "ControllableCharacter.generated.h already included, missing '#pragma once' in ControllableCharacter.h"
#endif
#define RPG_ControllableCharacter_generated_h

#define RPG_Source_RPG_ControllableCharacter_h_11_RPC_WRAPPERS
#define RPG_Source_RPG_ControllableCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_ControllableCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControllableCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControllableCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControllableCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControllableCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControllableCharacter(UControllableCharacter&&); \
	NO_API UControllableCharacter(const UControllableCharacter&); \
public:


#define RPG_Source_RPG_ControllableCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControllableCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControllableCharacter(UControllableCharacter&&); \
	NO_API UControllableCharacter(const UControllableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControllableCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControllableCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControllableCharacter)


#define RPG_Source_RPG_ControllableCharacter_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUControllableCharacter(); \
	friend struct Z_Construct_UClass_UControllableCharacter_Statics; \
public: \
	DECLARE_CLASS(UControllableCharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(UControllableCharacter)


#define RPG_Source_RPG_ControllableCharacter_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RPG_Source_RPG_ControllableCharacter_h_11_GENERATED_UINTERFACE_BODY() \
	RPG_Source_RPG_ControllableCharacter_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_ControllableCharacter_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RPG_Source_RPG_ControllableCharacter_h_11_GENERATED_UINTERFACE_BODY() \
	RPG_Source_RPG_ControllableCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_ControllableCharacter_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IControllableCharacter() {} \
public: \
	typedef UControllableCharacter UClassType; \
	typedef IControllableCharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RPG_Source_RPG_ControllableCharacter_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IControllableCharacter() {} \
public: \
	typedef UControllableCharacter UClassType; \
	typedef IControllableCharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RPG_Source_RPG_ControllableCharacter_h_8_PROLOG
#define RPG_Source_RPG_ControllableCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_ControllableCharacter_h_11_RPC_WRAPPERS \
	RPG_Source_RPG_ControllableCharacter_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_ControllableCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_ControllableCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_ControllableCharacter_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_ControllableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
