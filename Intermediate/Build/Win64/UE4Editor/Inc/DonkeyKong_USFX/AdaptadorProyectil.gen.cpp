// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/AdaptadorProyectil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptadorProyectil() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AAdaptadorProyectil_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AAdaptadorProyectil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UIProyectil_NoRegister();
// End Cross Module References
	void AAdaptadorProyectil::StaticRegisterNativesAAdaptadorProyectil()
	{
	}
	UClass* Z_Construct_UClass_AAdaptadorProyectil_NoRegister()
	{
		return AAdaptadorProyectil::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptadorProyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptadorProyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptadorProyectil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdaptadorProyectil.h" },
		{ "ModuleRelativePath", "AdaptadorProyectil.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdaptadorProyectil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIProyectil_NoRegister, (int32)VTABLE_OFFSET(AAdaptadorProyectil, IIProyectil), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptadorProyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptadorProyectil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptadorProyectil_Statics::ClassParams = {
		&AAdaptadorProyectil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptadorProyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorProyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptadorProyectil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptadorProyectil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptadorProyectil, 2239357324);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AAdaptadorProyectil>()
	{
		return AAdaptadorProyectil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptadorProyectil(Z_Construct_UClass_AAdaptadorProyectil, &AAdaptadorProyectil::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AAdaptadorProyectil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptadorProyectil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
