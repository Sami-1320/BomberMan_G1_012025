// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueGrava.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueGrava() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueGrava();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueGrava_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueGrava
void ABloqueGrava::StaticRegisterNativesABloqueGrava()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueGrava);
UClass* Z_Construct_UClass_ABloqueGrava_NoRegister()
{
	return ABloqueGrava::StaticClass();
}
struct Z_Construct_UClass_ABloqueGrava_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueGrava.h" },
		{ "ModuleRelativePath", "BloqueGrava.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueGrava>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueGrava_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGrava_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueGrava_Statics::ClassParams = {
	&ABloqueGrava::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGrava_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueGrava_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueGrava()
{
	if (!Z_Registration_Info_UClass_ABloqueGrava.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueGrava.OuterSingleton, Z_Construct_UClass_ABloqueGrava_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueGrava.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueGrava>()
{
	return ABloqueGrava::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueGrava);
ABloqueGrava::~ABloqueGrava() {}
// End Class ABloqueGrava

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueGrava_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueGrava, ABloqueGrava::StaticClass, TEXT("ABloqueGrava"), &Z_Registration_Info_UClass_ABloqueGrava, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueGrava), 446930776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueGrava_h_4081708807(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueGrava_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueGrava_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
