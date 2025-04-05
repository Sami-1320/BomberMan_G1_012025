// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueRoble.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueRoble() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueRoble();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueRoble_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueRoble
void ABloqueRoble::StaticRegisterNativesABloqueRoble()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueRoble);
UClass* Z_Construct_UClass_ABloqueRoble_NoRegister()
{
	return ABloqueRoble::StaticClass();
}
struct Z_Construct_UClass_ABloqueRoble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueRoble.h" },
		{ "ModuleRelativePath", "BloqueRoble.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueRoble>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueRoble_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRoble_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueRoble_Statics::ClassParams = {
	&ABloqueRoble::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRoble_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueRoble_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueRoble()
{
	if (!Z_Registration_Info_UClass_ABloqueRoble.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueRoble.OuterSingleton, Z_Construct_UClass_ABloqueRoble_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueRoble.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueRoble>()
{
	return ABloqueRoble::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueRoble);
ABloqueRoble::~ABloqueRoble() {}
// End Class ABloqueRoble

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueRoble_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueRoble, ABloqueRoble::StaticClass, TEXT("ABloqueRoble"), &Z_Registration_Info_UClass_ABloqueRoble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueRoble), 3685280474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueRoble_h_1931374999(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueRoble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YAMIRA_Downloads_B_BomberMan_012025_main_Source_BomberMan_012025_BloqueRoble_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
