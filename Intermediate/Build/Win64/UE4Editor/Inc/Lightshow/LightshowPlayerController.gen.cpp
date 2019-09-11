// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lightshow/LightshowPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightshowPlayerController() {}
// Cross Module References
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowPlayerController_NoRegister();
	LIGHTSHOW_API UClass* Z_Construct_UClass_ALightshowPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Lightshow();
// End Cross Module References
	void ALightshowPlayerController::StaticRegisterNativesALightshowPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ALightshowPlayerController_NoRegister()
	{
		return ALightshowPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALightshowPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightshowPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Lightshow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightshowPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LightshowPlayerController.h" },
		{ "ModuleRelativePath", "LightshowPlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightshowPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightshowPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightshowPlayerController_Statics::ClassParams = {
		&ALightshowPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightshowPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightshowPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightshowPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightshowPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightshowPlayerController, 427095687);
	template<> LIGHTSHOW_API UClass* StaticClass<ALightshowPlayerController>()
	{
		return ALightshowPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightshowPlayerController(Z_Construct_UClass_ALightshowPlayerController, &ALightshowPlayerController::StaticClass, TEXT("/Script/Lightshow"), TEXT("ALightshowPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightshowPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
