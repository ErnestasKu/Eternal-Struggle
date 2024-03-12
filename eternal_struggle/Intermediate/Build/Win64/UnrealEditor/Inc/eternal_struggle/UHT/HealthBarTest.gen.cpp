// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "eternal_struggle/HealthBarTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarTest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ETERNAL_STRUGGLE_API UClass* Z_Construct_UClass_AHealthBarTest();
	ETERNAL_STRUGGLE_API UClass* Z_Construct_UClass_AHealthBarTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_eternal_struggle();
// End Cross Module References
	void AHealthBarTest::StaticRegisterNativesAHealthBarTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthBarTest);
	UClass* Z_Construct_UClass_AHealthBarTest_NoRegister()
	{
		return AHealthBarTest::StaticClass();
	}
	struct Z_Construct_UClass_AHealthBarTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthBarTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_eternal_struggle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthBarTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthBarTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthBarTest.h" },
		{ "ModuleRelativePath", "HealthBarTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthBarTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthBarTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthBarTest_Statics::ClassParams = {
		&AHealthBarTest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthBarTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthBarTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHealthBarTest()
	{
		if (!Z_Registration_Info_UClass_AHealthBarTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthBarTest.OuterSingleton, Z_Construct_UClass_AHealthBarTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthBarTest.OuterSingleton;
	}
	template<> ETERNAL_STRUGGLE_API UClass* StaticClass<AHealthBarTest>()
	{
		return AHealthBarTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthBarTest);
	AHealthBarTest::~AHealthBarTest() {}
	struct Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBarTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBarTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthBarTest, AHealthBarTest::StaticClass, TEXT("AHealthBarTest"), &Z_Registration_Info_UClass_AHealthBarTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthBarTest), 1257872998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBarTest_h_1073469683(TEXT("/Script/eternal_struggle"),
		Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBarTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBarTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
