// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef LIGHTSHOW_LightshowBlock_generated_h
#error "LightshowBlock.generated.h already included, missing '#pragma once' in LightshowBlock.h"
#endif
#define LIGHTSHOW_LightshowBlock_generated_h

#define Lightshow_Source_Lightshow_LightshowBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightshowBlock(); \
	friend struct Z_Construct_UClass_ALightshowBlock_Statics; \
public: \
	DECLARE_CLASS(ALightshowBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lightshow"), LIGHTSHOW_API) \
	DECLARE_SERIALIZER(ALightshowBlock)


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALightshowBlock(); \
	friend struct Z_Construct_UClass_ALightshowBlock_Statics; \
public: \
	DECLARE_CLASS(ALightshowBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lightshow"), LIGHTSHOW_API) \
	DECLARE_SERIALIZER(ALightshowBlock)


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTSHOW_API ALightshowBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightshowBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTSHOW_API, ALightshowBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightshowBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTSHOW_API ALightshowBlock(ALightshowBlock&&); \
	LIGHTSHOW_API ALightshowBlock(const ALightshowBlock&); \
public:


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTSHOW_API ALightshowBlock(ALightshowBlock&&); \
	LIGHTSHOW_API ALightshowBlock(const ALightshowBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTSHOW_API, ALightshowBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightshowBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightshowBlock)


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ALightshowBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ALightshowBlock, BlockMesh); }


#define Lightshow_Source_Lightshow_LightshowBlock_h_10_PROLOG
#define Lightshow_Source_Lightshow_LightshowBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_RPC_WRAPPERS \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_INCLASS \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lightshow_Source_Lightshow_LightshowBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_INCLASS_NO_PURE_DECLS \
	Lightshow_Source_Lightshow_LightshowBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTSHOW_API UClass* StaticClass<class ALightshowBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lightshow_Source_Lightshow_LightshowBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
