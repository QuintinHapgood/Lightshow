// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTSHOW_LightshowBlockGrid_generated_h
#error "LightshowBlockGrid.generated.h already included, missing '#pragma once' in LightshowBlockGrid.h"
#endif
#define LIGHTSHOW_LightshowBlockGrid_generated_h

#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_RPC_WRAPPERS
#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightshowBlockGrid(); \
	friend struct Z_Construct_UClass_ALightshowBlockGrid_Statics; \
public: \
	DECLARE_CLASS(ALightshowBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lightshow"), LIGHTSHOW_API) \
	DECLARE_SERIALIZER(ALightshowBlockGrid)


#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALightshowBlockGrid(); \
	friend struct Z_Construct_UClass_ALightshowBlockGrid_Statics; \
public: \
	DECLARE_CLASS(ALightshowBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lightshow"), LIGHTSHOW_API) \
	DECLARE_SERIALIZER(ALightshowBlockGrid)


#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTSHOW_API ALightshowBlockGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightshowBlockGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTSHOW_API, ALightshowBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightshowBlockGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTSHOW_API ALightshowBlockGrid(ALightshowBlockGrid&&); \
	LIGHTSHOW_API ALightshowBlockGrid(const ALightshowBlockGrid&); \
public:


#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTSHOW_API ALightshowBlockGrid(ALightshowBlockGrid&&); \
	LIGHTSHOW_API ALightshowBlockGrid(const ALightshowBlockGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTSHOW_API, ALightshowBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightshowBlockGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightshowBlockGrid)


#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ALightshowBlockGrid, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(ALightshowBlockGrid, ScoreText); }


#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_10_PROLOG
#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_RPC_WRAPPERS \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_INCLASS \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
	Lightshow_Source_Lightshow_LightshowBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTSHOW_API UClass* StaticClass<class ALightshowBlockGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lightshow_Source_Lightshow_LightshowBlockGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
