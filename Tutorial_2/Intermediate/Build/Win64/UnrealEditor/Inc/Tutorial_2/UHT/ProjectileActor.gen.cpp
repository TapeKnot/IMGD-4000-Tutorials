// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_2/Public/ProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TUTORIAL_2_API UClass* Z_Construct_UClass_AProjectileActor();
TUTORIAL_2_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tutorial_2();
// End Cross Module References

// Begin Class AProjectileActor
void AProjectileActor::StaticRegisterNativesAProjectileActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileActor);
UClass* Z_Construct_UClass_AProjectileActor_NoRegister()
{
	return AProjectileActor::StaticClass();
}
struct Z_Construct_UClass_AProjectileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileActor.h" },
		{ "ModuleRelativePath", "Public/ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileActor_Statics::ClassParams = {
	&AProjectileActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileActor()
{
	if (!Z_Registration_Info_UClass_AProjectileActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileActor.OuterSingleton, Z_Construct_UClass_AProjectileActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileActor.OuterSingleton;
}
template<> TUTORIAL_2_API UClass* StaticClass<AProjectileActor>()
{
	return AProjectileActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileActor);
AProjectileActor::~AProjectileActor() {}
// End Class AProjectileActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_ProjectileActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileActor, AProjectileActor::StaticClass, TEXT("AProjectileActor"), &Z_Registration_Info_UClass_AProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileActor), 2959678771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_ProjectileActor_h_2427968819(TEXT("/Script/Tutorial_2"),
	Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_ProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_ProjectileActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
