// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameControlledCamer/Game.Generated/CameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMECONTROLLEDCAMER_API UClass* Z_Construct_UClass_ACameraDirector();
	GAMECONTROLLEDCAMER_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameControlledCamer();
// End Cross Module References
	DEFINE_FUNCTION(ACameraDirector::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
		UClass* Class = ACameraDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &ACameraDirector::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraDirector_Tick_Statics
	{
		struct CameraDirector_eventTick_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraDirector_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraDirector_eventTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraDirector_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraDirector_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraDirector_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CameraDirector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraDirector_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraDirector, nullptr, "Tick", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACameraDirector_Tick_Statics::CameraDirector_eventTick_Parms), Z_Construct_UFunction_ACameraDirector_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraDirector_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraDirector_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraDirector_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraDirector_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraDirector_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraDirector);
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToNextCameraChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToNextCameraChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameControlledCamer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraDirector_Tick, "Tick" }, // 3036395691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Game.Generated/CameraDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CameraDirector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "Game.Generated/CameraDirector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne = { "CameraOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraDirector, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "Game.Generated/CameraDirector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo = { "CameraTwo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraDirector, CameraTwo), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "Game.Generated/CameraDirector.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange = { "TimeToNextCameraChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraDirector, TimeToNextCameraChange), METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		if (!Z_Registration_Info_UClass_ACameraDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraDirector.OuterSingleton, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraDirector.OuterSingleton;
	}
	template<> GAMECONTROLLEDCAMER_API UClass* StaticClass<ACameraDirector>()
	{
		return ACameraDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
	ACameraDirector::~ACameraDirector() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_Game_Generated_CameraDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_Game_Generated_CameraDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraDirector, ACameraDirector::StaticClass, TEXT("ACameraDirector"), &Z_Registration_Info_UClass_ACameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraDirector), 118300469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_Game_Generated_CameraDirector_h_1189335219(TEXT("/Script/GameControlledCamer"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_Game_Generated_CameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_GameControlledCamer_Source_GameControlledCamer_Game_Generated_CameraDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
