// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_5/Tutorial_5GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorial_5GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TUTORIAL_5_API UClass* Z_Construct_UClass_ATutorial_5GameMode();
TUTORIAL_5_API UClass* Z_Construct_UClass_ATutorial_5GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tutorial_5();
// End Cross Module References

// Begin Class ATutorial_5GameMode
void ATutorial_5GameMode::StaticRegisterNativesATutorial_5GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorial_5GameMode);
UClass* Z_Construct_UClass_ATutorial_5GameMode_NoRegister()
{
	return ATutorial_5GameMode::StaticClass();
}
struct Z_Construct_UClass_ATutorial_5GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Tutorial_5GameMode.h" },
		{ "ModuleRelativePath", "Tutorial_5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorial_5GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATutorial_5GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorial_5GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorial_5GameMode_Statics::ClassParams = {
	&ATutorial_5GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorial_5GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATutorial_5GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATutorial_5GameMode()
{
	if (!Z_Registration_Info_UClass_ATutorial_5GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorial_5GameMode.OuterSingleton, Z_Construct_UClass_ATutorial_5GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATutorial_5GameMode.OuterSingleton;
}
template<> TUTORIAL_5_API UClass* StaticClass<ATutorial_5GameMode>()
{
	return ATutorial_5GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorial_5GameMode);
ATutorial_5GameMode::~ATutorial_5GameMode() {}
// End Class ATutorial_5GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_5_Source_Tutorial_5_Tutorial_5GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATutorial_5GameMode, ATutorial_5GameMode::StaticClass, TEXT("ATutorial_5GameMode"), &Z_Registration_Info_UClass_ATutorial_5GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorial_5GameMode), 347953076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_5_Source_Tutorial_5_Tutorial_5GameMode_h_203370802(TEXT("/Script/Tutorial_5"),
	Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_5_Source_Tutorial_5_Tutorial_5GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_5_Source_Tutorial_5_Tutorial_5GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
