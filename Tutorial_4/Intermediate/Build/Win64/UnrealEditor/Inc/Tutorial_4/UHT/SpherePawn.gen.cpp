// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_4/Public/SpherePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpherePawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TUTORIAL_4_API UClass* Z_Construct_UClass_ASpherePawn();
TUTORIAL_4_API UClass* Z_Construct_UClass_ASpherePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tutorial_4();
// End Cross Module References

// Begin Class ASpherePawn
void ASpherePawn::StaticRegisterNativesASpherePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpherePawn);
UClass* Z_Construct_UClass_ASpherePawn_NoRegister()
{
	return ASpherePawn::StaticClass();
}
struct Z_Construct_UClass_ASpherePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpherePawn.h" },
		{ "ModuleRelativePath", "Public/SpherePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "SpherePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpherePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "SpherePawn" },
		{ "ModuleRelativePath", "Public/SpherePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpherePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpherePawn_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpherePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpherePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpherePawn_Statics::ClassParams = {
	&ASpherePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpherePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpherePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpherePawn()
{
	if (!Z_Registration_Info_UClass_ASpherePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpherePawn.OuterSingleton, Z_Construct_UClass_ASpherePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpherePawn.OuterSingleton;
}
template<> TUTORIAL_4_API UClass* StaticClass<ASpherePawn>()
{
	return ASpherePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpherePawn);
ASpherePawn::~ASpherePawn() {}
// End Class ASpherePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_SpherePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpherePawn, ASpherePawn::StaticClass, TEXT("ASpherePawn"), &Z_Registration_Info_UClass_ASpherePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpherePawn), 3206910956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_SpherePawn_h_1900299562(TEXT("/Script/Tutorial_4"),
	Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_SpherePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_SpherePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
