// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test7/test7GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest7GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TEST7_API UClass* Z_Construct_UClass_Atest7GameMode();
TEST7_API UClass* Z_Construct_UClass_Atest7GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_test7();
// End Cross Module References

// Begin Class Atest7GameMode
void Atest7GameMode::StaticRegisterNativesAtest7GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atest7GameMode);
UClass* Z_Construct_UClass_Atest7GameMode_NoRegister()
{
	return Atest7GameMode::StaticClass();
}
struct Z_Construct_UClass_Atest7GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "test7GameMode.h" },
		{ "ModuleRelativePath", "test7GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atest7GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Atest7GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_test7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Atest7GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Atest7GameMode_Statics::ClassParams = {
	&Atest7GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Atest7GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Atest7GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Atest7GameMode()
{
	if (!Z_Registration_Info_UClass_Atest7GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atest7GameMode.OuterSingleton, Z_Construct_UClass_Atest7GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Atest7GameMode.OuterSingleton;
}
template<> TEST7_API UClass* StaticClass<Atest7GameMode>()
{
	return Atest7GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Atest7GameMode);
Atest7GameMode::~Atest7GameMode() {}
// End Class Atest7GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Atest7GameMode, Atest7GameMode::StaticClass, TEXT("Atest7GameMode"), &Z_Registration_Info_UClass_Atest7GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atest7GameMode), 4148392560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7GameMode_h_1399589499(TEXT("/Script/test7"),
	Z_CompiledInDeferFile_FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
