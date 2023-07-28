// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Collision/Game.Generated/CollidingPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawn() {}
// Cross Module References
	COLLISION_API UClass* Z_Construct_UClass_ACollidingPawn();
	COLLISION_API UClass* Z_Construct_UClass_ACollidingPawn_NoRegister();
	COLLISION_API UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Collision();
// End Cross Module References
	DEFINE_FUNCTION(ACollidingPawn::execParticleToggle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParticleToggle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollidingPawn::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollidingPawn::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollidingPawn::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollidingPawn::execGetPawnMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPawnMovementComponent**)Z_Param__Result=P_THIS->GetPawnMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollidingPawn::execSetupPlayerInputComponent)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_InInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPlayerInputComponent(Z_Param_InInputComponent);
		P_NATIVE_END;
	}
	void ACollidingPawn::StaticRegisterNativesACollidingPawn()
	{
		UClass* Class = ACollidingPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPawnMovementComponent", &ACollidingPawn::execGetPawnMovementComponent },
			{ "MoveForward", &ACollidingPawn::execMoveForward },
			{ "MoveRight", &ACollidingPawn::execMoveRight },
			{ "ParticleToggle", &ACollidingPawn::execParticleToggle },
			{ "SetupPlayerInputComponent", &ACollidingPawn::execSetupPlayerInputComponent },
			{ "Turn", &ACollidingPawn::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics
	{
		struct CollidingPawn_eventGetPawnMovementComponent_Parms
		{
			UPawnMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CollidingPawn_eventGetPawnMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollidingPawn, nullptr, "GetPawnMovementComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::CollidingPawn_eventGetPawnMovementComponent_Parms), Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics
	{
		struct CollidingPawn_eventMoveForward_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CollidingPawn_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollidingPawn, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::CollidingPawn_eventMoveForward_Parms), Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollidingPawn_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollidingPawn_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics
	{
		struct CollidingPawn_eventMoveRight_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CollidingPawn_eventMoveRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollidingPawn, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::CollidingPawn_eventMoveRight_Parms), Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollidingPawn_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollidingPawn_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollidingPawn_ParticleToggle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_ParticleToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollidingPawn_ParticleToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollidingPawn, nullptr, "ParticleToggle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_ParticleToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_ParticleToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollidingPawn_ParticleToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollidingPawn_ParticleToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics
	{
		struct CollidingPawn_eventSetupPlayerInputComponent_Parms
		{
			UInputComponent* InInputComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::NewProp_InInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::NewProp_InInputComponent = { "InInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CollidingPawn_eventSetupPlayerInputComponent_Parms, InInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::NewProp_InInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::NewProp_InInputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::NewProp_InInputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollidingPawn, nullptr, "SetupPlayerInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::CollidingPawn_eventSetupPlayerInputComponent_Parms), Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollidingPawn_Turn_Statics
	{
		struct CollidingPawn_eventTurn_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollidingPawn_Turn_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CollidingPawn_eventTurn_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollidingPawn_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollidingPawn_Turn_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollidingPawn_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollidingPawn_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollidingPawn, nullptr, "Turn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACollidingPawn_Turn_Statics::CollidingPawn_eventTurn_Parms), Z_Construct_UFunction_ACollidingPawn_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollidingPawn_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollidingPawn_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollidingPawn_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollidingPawn_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollidingPawn);
	UClass* Z_Construct_UClass_ACollidingPawn_NoRegister()
	{
		return ACollidingPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACollidingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OurParticleSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OurParticleSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OurMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OurMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollidingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Collision,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollidingPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollidingPawn_GetPawnMovementComponent, "GetPawnMovementComponent" }, // 3249904121
		{ &Z_Construct_UFunction_ACollidingPawn_MoveForward, "MoveForward" }, // 2281240356
		{ &Z_Construct_UFunction_ACollidingPawn_MoveRight, "MoveRight" }, // 104979635
		{ &Z_Construct_UFunction_ACollidingPawn_ParticleToggle, "ParticleToggle" }, // 377565553
		{ &Z_Construct_UFunction_ACollidingPawn_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 1886231869
		{ &Z_Construct_UFunction_ACollidingPawn_Turn, "Turn" }, // 4040682850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game.Generated/CollidingPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem_MetaData[] = {
		{ "Category", "CollidingPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem = { "OurParticleSystem", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollidingPawn, OurParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent_MetaData[] = {
		{ "Category", "CollidingPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game.Generated/CollidingPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent = { "OurMovementComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollidingPawn, OurMovementComponent), Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollidingPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurParticleSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollidingPawn_Statics::NewProp_OurMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollidingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollidingPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollidingPawn_Statics::ClassParams = {
		&ACollidingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollidingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollidingPawn()
	{
		if (!Z_Registration_Info_UClass_ACollidingPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollidingPawn.OuterSingleton, Z_Construct_UClass_ACollidingPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollidingPawn.OuterSingleton;
	}
	template<> COLLISION_API UClass* StaticClass<ACollidingPawn>()
	{
		return ACollidingPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollidingPawn);
	ACollidingPawn::~ACollidingPawn() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_Game_Generated_CollidingPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_Game_Generated_CollidingPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollidingPawn, ACollidingPawn::StaticClass, TEXT("ACollidingPawn"), &Z_Registration_Info_UClass_ACollidingPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollidingPawn), 1429613491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_Game_Generated_CollidingPawn_h_483536299(TEXT("/Script/Collision"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_Game_Generated_CollidingPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsTutorials_Beginner_Collision_Source_Collision_Game_Generated_CollidingPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
