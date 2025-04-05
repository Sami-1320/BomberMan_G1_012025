// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueCobre.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCobre() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueCobre();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueCobre_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueCobre
void ABloqueCobre::StaticRegisterNativesABloqueCobre()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueCobre);
UClass* Z_Construct_UClass_ABloqueCobre_NoRegister()
{
	return ABloqueCobre::StaticClass();
}
struct Z_Construct_UClass_ABloqueCobre_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueCobre.h" },
		{ "ModuleRelativePath", "BloqueCobre.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCobre>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueCobre_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCobre_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCobre_Statics::ClassParams = {
	&ABloqueCobre::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCobre_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueCobre_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueCobre()
{
	if (!Z_Registration_Info_UClass_ABloqueCobre.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueCobre.OuterSingleton, Z_Construct_UClass_ABloqueCobre_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueCobre.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueCobre>()
{
	return ABloqueCobre::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCobre);
ABloqueCobre::~ABloqueCobre() {}
// End Class ABloqueCobre

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueCobre_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueCobre, ABloqueCobre::StaticClass, TEXT("ABloqueCobre"), &Z_Registration_Info_UClass_ABloqueCobre, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueCobre), 3369157246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueCobre_h_258567996(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueCobre_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueCobre_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
