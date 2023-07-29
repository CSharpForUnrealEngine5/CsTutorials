// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGForCs/Game.Generated/UMGForCsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGForCsGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMGFORCS_API UClass* Z_Construct_UClass_AUMGForCsGameMode();
	UMGFORCS_API UClass* Z_Construct_UClass_AUMGForCsGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGForCs();
// End Cross Module References
	void AUMGForCsGameMode::StaticRegisterNativesAUMGForCsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUMGForCsGameMode);
	UClass* Z_Construct_UClass_AUMGForCsGameMode_NoRegister()
	{
		return AUMGForCsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUMGForCsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUMGForCsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGForCs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGForCsGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game.Generated/UMGForCsGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/UMGForCsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUMGForCsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUMGForCsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUMGForCsGameMode_Statics::ClassParams = {
		&AUMGForCsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUMGForCsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGForCsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUMGForCsGameMode()
	{
		if (!Z_Registration_Info_UClass_AUMGForCsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUMGForCsGameMode.OuterSingleton, Z_Construct_UClass_AUMGForCsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUMGForCsGameMode.OuterSingleton;
	}
	template<> UMGFORCS_API UClass* StaticClass<AUMGForCsGameMode>()
	{
		return AUMGForCsGameMode::StaticClass();
	}
	AUMGForCsGameMode::AUMGForCsGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGForCsGameMode);
	AUMGForCsGameMode::~AUMGForCsGameMode() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUMGForCsGameMode, AUMGForCsGameMode::StaticClass, TEXT("AUMGForCsGameMode"), &Z_Registration_Info_UClass_AUMGForCsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUMGForCsGameMode), 3691302911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsGameMode_h_301948938(TEXT("/Script/UMGForCs"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_Game_Generated_UMGForCsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
