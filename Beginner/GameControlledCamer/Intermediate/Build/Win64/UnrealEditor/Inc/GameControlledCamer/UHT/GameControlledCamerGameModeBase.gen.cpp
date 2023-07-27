// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameControlledCamer/GameControlledCamerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameControlledCamerGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMECONTROLLEDCAMER_API UClass* Z_Construct_UClass_AGameControlledCamerGameModeBase();
	GAMECONTROLLEDCAMER_API UClass* Z_Construct_UClass_AGameControlledCamerGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameControlledCamer();
// End Cross Module References
	void AGameControlledCamerGameModeBase::StaticRegisterNativesAGameControlledCamerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameControlledCamerGameModeBase);
	UClass* Z_Construct_UClass_AGameControlledCamerGameModeBase_NoRegister()
	{
		return AGameControlledCamerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameControlledCamer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameControlledCamerGameModeBase.h" },
		{ "ModuleRelativePath", "GameControlledCamerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameControlledCamerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::ClassParams = {
		&AGameControlledCamerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameControlledCamerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGameControlledCamerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameControlledCamerGameModeBase.OuterSingleton, Z_Construct_UClass_AGameControlledCamerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameControlledCamerGameModeBase.OuterSingleton;
	}
	template<> GAMECONTROLLEDCAMER_API UClass* StaticClass<AGameControlledCamerGameModeBase>()
	{
		return AGameControlledCamerGameModeBase::StaticClass();
	}
	AGameControlledCamerGameModeBase::AGameControlledCamerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameControlledCamerGameModeBase);
	AGameControlledCamerGameModeBase::~AGameControlledCamerGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_GameControlledCamerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_GameControlledCamerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameControlledCamerGameModeBase, AGameControlledCamerGameModeBase::StaticClass, TEXT("AGameControlledCamerGameModeBase"), &Z_Registration_Info_UClass_AGameControlledCamerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameControlledCamerGameModeBase), 2414437368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_GameControlledCamerGameModeBase_h_620752623(TEXT("/Script/GameControlledCamer"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_GameControlledCamerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_GameControlledCamerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
