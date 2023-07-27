// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollision_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Collision;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Collision()
	{
		if (!Z_Registration_Info_UPackage__Script_Collision.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Collision",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x42E59139,
				0x5F0C3D02,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Collision.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Collision.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Collision(Z_Construct_UPackage__Script_Collision, TEXT("/Script/Collision"), Z_Registration_Info_UPackage__Script_Collision, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x42E59139, 0x5F0C3D02));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
