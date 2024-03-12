// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "eternal_struggle/HealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ETERNAL_STRUGGLE_API UClass* Z_Construct_UClass_AHealthBar();
	ETERNAL_STRUGGLE_API UClass* Z_Construct_UClass_AHealthBar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_eternal_struggle();
// End Cross Module References
	void AHealthBar::StaticRegisterNativesAHealthBar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthBar);
	UClass* Z_Construct_UClass_AHealthBar_NoRegister()
	{
		return AHealthBar::StaticClass();
	}
	struct Z_Construct_UClass_AHealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_eternal_struggle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthBar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthBar.h" },
		{ "ModuleRelativePath", "HealthBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthBar_Statics::ClassParams = {
		&AHealthBar::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthBar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHealthBar()
	{
		if (!Z_Registration_Info_UClass_AHealthBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthBar.OuterSingleton, Z_Construct_UClass_AHealthBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthBar.OuterSingleton;
	}
	template<> ETERNAL_STRUGGLE_API UClass* StaticClass<AHealthBar>()
	{
		return AHealthBar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthBar);
	AHealthBar::~AHealthBar() {}
	struct Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthBar, AHealthBar::StaticClass, TEXT("AHealthBar"), &Z_Registration_Info_UClass_AHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthBar), 2183317210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBar_h_2874794253(TEXT("/Script/eternal_struggle"),
		Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_12345_OneDrive_Stalinis_kompiuteris_Eternal_struggle_Game_folder_eternal_struggle_Source_eternal_struggle_HealthBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
