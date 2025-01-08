// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/hello.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehello() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT2_API UClass* Z_Construct_UClass_Ahello();
MYPROJECT2_API UClass* Z_Construct_UClass_Ahello_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References

// Begin Class Ahello
void Ahello::StaticRegisterNativesAhello()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ahello);
UClass* Z_Construct_UClass_Ahello_NoRegister()
{
	return Ahello::StaticClass();
}
struct Z_Construct_UClass_Ahello_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "hello.h" },
		{ "ModuleRelativePath", "Public/hello.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ahello>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Ahello_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ahello_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Ahello_Statics::ClassParams = {
	&Ahello::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ahello_Statics::Class_MetaDataParams), Z_Construct_UClass_Ahello_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Ahello()
{
	if (!Z_Registration_Info_UClass_Ahello.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ahello.OuterSingleton, Z_Construct_UClass_Ahello_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Ahello.OuterSingleton;
}
template<> MYPROJECT2_API UClass* StaticClass<Ahello>()
{
	return Ahello::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Ahello);
Ahello::~Ahello() {}
// End Class Ahello

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_hello_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Ahello, Ahello::StaticClass, TEXT("Ahello"), &Z_Registration_Info_UClass_Ahello, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ahello), 3485304192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_hello_h_2844510501(TEXT("/Script/MyProject2"),
	Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_hello_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_hello_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
