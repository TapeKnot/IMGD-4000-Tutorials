// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_2/Public/SphereController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TUTORIAL_2_API UClass* Z_Construct_UClass_ASphereController();
TUTORIAL_2_API UClass* Z_Construct_UClass_ASphereController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tutorial_2();
// End Cross Module References

// Begin Class ASphereController
void ASphereController::StaticRegisterNativesASphereController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASphereController);
UClass* Z_Construct_UClass_ASphereController_NoRegister()
{
	return ASphereController::StaticClass();
}
struct Z_Construct_UClass_ASphereController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SphereController.h" },
		{ "ModuleRelativePath", "Public/SphereController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/SphereController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/SphereController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireLaserAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/SphereController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/SphereController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireLaserAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphereController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereController_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereController, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereController_Statics::NewProp_FireLaserAction = { "FireLaserAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereController, FireLaserAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireLaserAction_MetaData), NewProp_FireLaserAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASphereController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereController_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereController_Statics::NewProp_FireLaserAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASphereController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASphereController_Statics::ClassParams = {
	&ASphereController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASphereController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASphereController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASphereController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASphereController()
{
	if (!Z_Registration_Info_UClass_ASphereController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASphereController.OuterSingleton, Z_Construct_UClass_ASphereController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASphereController.OuterSingleton;
}
template<> TUTORIAL_2_API UClass* StaticClass<ASphereController>()
{
	return ASphereController::StaticClass();
}
ASphereController::ASphereController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereController);
ASphereController::~ASphereController() {}
// End Class ASphereController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_SphereController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASphereController, ASphereController::StaticClass, TEXT("ASphereController"), &Z_Registration_Info_UClass_ASphereController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASphereController), 645638824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_SphereController_h_688844100(TEXT("/Script/Tutorial_2"),
	Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_SphereController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_belevy_Documents_GitHub_IMGD_4000_Tutorials_Tutorial_2_Source_Tutorial_2_Public_SphereController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
