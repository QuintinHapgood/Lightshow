// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lightshow/LightshowGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightshowGameMode() {}
// Cross Module References
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowGameMode_NoRegister();
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Lightshow();
// End Cross Module References
	void ALightshowGameMode::StaticRegisterNativesALightshowGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALightshowGameMode_NoRegister()
	{
		return ALightshowGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALightshowGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightshowGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Lightshow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightshowGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LightshowGameMode.h" },
		{ "ModuleRelativePath", "LightshowGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightshowGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightshowGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightshowGameMode_Statics::ClassParams = {
		&ALightshowGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ALightshowGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightshowGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightshowGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightshowGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightshowGameMode, 542243070);
	template<> LIGHTSHOW_API UClass* StaticClass<ALightshowGameMode>()
	{
		return ALightshowGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightshowGameMode(Z_Construct_UClass_ALightshowGameMode, &ALightshowGameMode::StaticClass, TEXT("/Script/Lightshow"), TEXT("ALightshowGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightshowGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
