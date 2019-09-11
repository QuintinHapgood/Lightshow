// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lightshow/LightshowPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightshowPawn() {}
// Cross Module References
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowPawn_NoRegister();
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Lightshow();
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowBlock_NoRegister();
// End Cross Module References
	void ALightshowPawn::StaticRegisterNativesALightshowPawn()
	{
	}
	UClass* Z_Construct_UClass_ALightshowPawn_NoRegister()
	{
		return ALightshowPawn::StaticClass();
	}
	struct Z_Construct_UClass_ALightshowPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightshowPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Lightshow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightshowPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LightshowPawn.h" },
		{ "ModuleRelativePath", "LightshowPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightshowPawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "LightshowPawn" },
		{ "ModuleRelativePath", "LightshowPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightshowPawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightshowPawn, CurrentBlockFocus), Z_Construct_UClass_ALightshowBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightshowPawn_Statics::NewProp_CurrentBlockFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightshowPawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightshowPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightshowPawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightshowPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightshowPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightshowPawn_Statics::ClassParams = {
		&ALightshowPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALightshowPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALightshowPawn_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALightshowPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightshowPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightshowPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightshowPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightshowPawn, 4014325626);
	template<> LIGHTSHOW_API UClass* StaticClass<ALightshowPawn>()
	{
		return ALightshowPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightshowPawn(Z_Construct_UClass_ALightshowPawn, &ALightshowPawn::StaticClass, TEXT("/Script/Lightshow"), TEXT("ALightshowPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightshowPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
