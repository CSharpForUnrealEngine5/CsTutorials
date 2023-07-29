// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGForCs/UMGForCsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGForCsGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMGFORCS_API UClass* Z_Construct_UClass_AUMGForCsGameModeBase();
	UMGFORCS_API UClass* Z_Construct_UClass_AUMGForCsGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGForCs();
// End Cross Module References
	void AUMGForCsGameModeBase::StaticRegisterNativesAUMGForCsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUMGForCsGameModeBase);
	UClass* Z_Construct_UClass_AUMGForCsGameModeBase_NoRegister()
	{
		return AUMGForCsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUMGForCsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUMGForCsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGForCs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGForCsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UMGForCsGameModeBase.h" },
		{ "ModuleRelativePath", "UMGForCsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUMGForCsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUMGForCsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUMGForCsGameModeBase_Statics::ClassParams = {
		&AUMGForCsGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUMGForCsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGForCsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUMGForCsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUMGForCsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUMGForCsGameModeBase.OuterSingleton, Z_Construct_UClass_AUMGForCsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUMGForCsGameModeBase.OuterSingleton;
	}
	template<> UMGFORCS_API UClass* StaticClass<AUMGForCsGameModeBase>()
	{
		return AUMGForCsGameModeBase::StaticClass();
	}
	AUMGForCsGameModeBase::AUMGForCsGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGForCsGameModeBase);
	AUMGForCsGameModeBase::~AUMGForCsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_UMGForCsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_UMGForCsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUMGForCsGameModeBase, AUMGForCsGameModeBase::StaticClass, TEXT("AUMGForCsGameModeBase"), &Z_Registration_Info_UClass_AUMGForCsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUMGForCsGameModeBase), 604414788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_UMGForCsGameModeBase_h_2154927928(TEXT("/Script/UMGForCs"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_UMGForCsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_UMGForCs_Source_UMGForCs_UMGForCsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
