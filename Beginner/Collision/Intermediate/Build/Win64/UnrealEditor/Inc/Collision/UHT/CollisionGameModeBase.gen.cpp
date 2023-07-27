// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Collision/CollisionGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionGameModeBase() {}
// Cross Module References
	COLLISION_API UClass* Z_Construct_UClass_ACollisionGameModeBase();
	COLLISION_API UClass* Z_Construct_UClass_ACollisionGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Collision();
// End Cross Module References
	void ACollisionGameModeBase::StaticRegisterNativesACollisionGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollisionGameModeBase);
	UClass* Z_Construct_UClass_ACollisionGameModeBase_NoRegister()
	{
		return ACollisionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACollisionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollisionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Collision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollisionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CollisionGameModeBase.h" },
		{ "ModuleRelativePath", "CollisionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollisionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollisionGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollisionGameModeBase_Statics::ClassParams = {
		&ACollisionGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACollisionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollisionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollisionGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACollisionGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollisionGameModeBase.OuterSingleton, Z_Construct_UClass_ACollisionGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollisionGameModeBase.OuterSingleton;
	}
	template<> COLLISION_API UClass* StaticClass<ACollisionGameModeBase>()
	{
		return ACollisionGameModeBase::StaticClass();
	}
	ACollisionGameModeBase::ACollisionGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollisionGameModeBase);
	ACollisionGameModeBase::~ACollisionGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_CollisionGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_CollisionGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollisionGameModeBase, ACollisionGameModeBase::StaticClass, TEXT("ACollisionGameModeBase"), &Z_Registration_Info_UClass_ACollisionGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollisionGameModeBase), 1047666628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_CollisionGameModeBase_h_3219311016(TEXT("/Script/Collision"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_CollisionGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_CollisionGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
