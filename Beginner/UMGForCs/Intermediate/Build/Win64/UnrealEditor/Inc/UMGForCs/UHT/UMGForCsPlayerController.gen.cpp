// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGForCs/Game.Generated/UMGForCsPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGForCsPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UMGFORCS_API UClass* Z_Construct_UClass_AUMGForCsPlayerController();
	UMGFORCS_API UClass* Z_Construct_UClass_AUMGForCsPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGForCs();
// End Cross Module References
	DEFINE_FUNCTION(AUMGForCsPlayerController::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	void AUMGForCsPlayerController::StaticRegisterNativesAUMGForCsPlayerController()
	{
		UClass* Class = AUMGForCsPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AUMGForCsPlayerController::execBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/UMGForCsPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUMGForCsPlayerController, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUMGForCsPlayerController);
	UClass* Z_Construct_UClass_AUMGForCsPlayerController_NoRegister()
	{
		return AUMGForCsPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUMGForCsPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUMGForCsPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGForCs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUMGForCsPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUMGForCsPlayerController_BeginPlay, "BeginPlay" }, // 2315706916
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGForCsPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game.Generated/UMGForCsPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/UMGForCsPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUMGForCsPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUMGForCsPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUMGForCsPlayerController_Statics::ClassParams = {
		&AUMGForCsPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUMGForCsPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGForCsPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUMGForCsPlayerController()
	{
		if (!Z_Registration_Info_UClass_AUMGForCsPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUMGForCsPlayerController.OuterSingleton, Z_Construct_UClass_AUMGForCsPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUMGForCsPlayerController.OuterSingleton;
	}
	template<> UMGFORCS_API UClass* StaticClass<AUMGForCsPlayerController>()
	{
		return AUMGForCsPlayerController::StaticClass();
	}
	AUMGForCsPlayerController::AUMGForCsPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGForCsPlayerController);
	AUMGForCsPlayerController::~AUMGForCsPlayerController() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUMGForCsPlayerController, AUMGForCsPlayerController::StaticClass, TEXT("AUMGForCsPlayerController"), &Z_Registration_Info_UClass_AUMGForCsPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUMGForCsPlayerController), 4133285651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsPlayerController_h_4001305(TEXT("/Script/UMGForCs"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
