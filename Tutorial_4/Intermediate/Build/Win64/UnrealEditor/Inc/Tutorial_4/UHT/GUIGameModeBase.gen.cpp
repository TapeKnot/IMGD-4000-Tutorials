// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_4/Public/GUIGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGUIGameModeBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TUTORIAL_4_API UClass* Z_Construct_UClass_AGUIGameModeBase();
TUTORIAL_4_API UClass* Z_Construct_UClass_AGUIGameModeBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tutorial_4();
// End Cross Module References

// Begin Class AGUIGameModeBase
void AGUIGameModeBase::StaticRegisterNativesAGUIGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGUIGameModeBase);
UClass* Z_Construct_UClass_AGUIGameModeBase_NoRegister()
{
	return AGUIGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AGUIGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GUIGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GUIGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GUIGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GUIGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGUIGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGUIGameModeBase_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGUIGameModeBase, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGUIGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGUIGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGUIGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGUIGameModeBase_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGUIGameModeBase_Statics::NewProp_CurrentWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGUIGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGUIGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGUIGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGUIGameModeBase_Statics::ClassParams = {
	&AGUIGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGUIGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGUIGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGUIGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGUIGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGUIGameModeBase()
{
	if (!Z_Registration_Info_UClass_AGUIGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGUIGameModeBase.OuterSingleton, Z_Construct_UClass_AGUIGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGUIGameModeBase.OuterSingleton;
}
template<> TUTORIAL_4_API UClass* StaticClass<AGUIGameModeBase>()
{
	return AGUIGameModeBase::StaticClass();
}
AGUIGameModeBase::AGUIGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGUIGameModeBase);
AGUIGameModeBase::~AGUIGameModeBase() {}
// End Class AGUIGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_GUIGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGUIGameModeBase, AGUIGameModeBase::StaticClass, TEXT("AGUIGameModeBase"), &Z_Registration_Info_UClass_AGUIGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGUIGameModeBase), 1100225716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_GUIGameModeBase_h_2173988651(TEXT("/Script/Tutorial_4"),
	Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_GUIGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_belevy_Documents_Unreal_Projects_Tutorial_4_Source_Tutorial_4_Public_GUIGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
