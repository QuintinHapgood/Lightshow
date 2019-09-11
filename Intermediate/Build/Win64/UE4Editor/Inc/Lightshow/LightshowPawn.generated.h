// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTSHOW_LightshowPawn_generated_h
#error "LightshowPawn.generated.h already included, missing '#pragma once' in LightshowPawn.h"
#endif
#define LIGHTSHOW_LightshowPawn_generated_h

#define Lightshow_Source_Lightshow_LightshowPawn_h_12_RPC_WRAPPERS
#define Lightshow_Source_Lightshow_LightshowPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Lightshow_Source_Lightshow_LightshowPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightshowPawn(); \
	friend struct Z_Construct_UClass_ALightshowPawn_Statics; \
public: \
	DECLARE_CLASS(ALightshowPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lightshow"), NO_API) \
	DECLARE_SERIALIZER(ALightshowPawn)


#define Lightshow_Source_Lightshow_LightshowPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightshowPawn(); \
	friend struct Z_Construct_UClass_ALightshowPawn_Statics; \
public: \
	DECLARE_CLASS(ALightshowPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lightshow"), NO_API) \
	DECLARE_SERIALIZER(ALightshowPawn)


#define Lightshow_Source_Lightshow_LightshowPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightshowPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightshowPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightshowPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightshowPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightshowPawn(ALightshowPawn&&); \
	NO_API ALightshowPawn(const ALightshowPawn&); \
public:


#define Lightshow_Source_Lightshow_LightshowPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightshowPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightshowPawn(ALightshowPawn&&); \
	NO_API ALightshowPawn(const ALightshowPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightshowPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightshowPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightshowPawn)


#define Lightshow_Source_Lightshow_LightshowPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(ALightshowPawn, CurrentBlockFocus); }


#define Lightshow_Source_Lightshow_LightshowPawn_h_9_PROLOG
#define Lightshow_Source_Lightshow_LightshowPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_RPC_WRAPPERS \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_INCLASS \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lightshow_Source_Lightshow_LightshowPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_INCLASS_NO_PURE_DECLS \
	Lightshow_Source_Lightshow_LightshowPawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightshowPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTSHOW_API UClass* StaticClass<class ALightshowPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lightshow_Source_Lightshow_LightshowPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
