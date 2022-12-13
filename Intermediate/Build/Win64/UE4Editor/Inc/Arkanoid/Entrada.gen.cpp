// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/Entrada.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntrada() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AEntrada_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AEntrada();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void AEntrada::StaticRegisterNativesAEntrada()
	{
	}
	UClass* Z_Construct_UClass_AEntrada_NoRegister()
	{
		return AEntrada::StaticClass();
	}
	struct Z_Construct_UClass_AEntrada_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEntrada_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntrada_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Entrada.h" },
		{ "ModuleRelativePath", "Entrada.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEntrada_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntrada>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEntrada_Statics::ClassParams = {
		&AEntrada::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEntrada_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEntrada_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEntrada()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEntrada_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEntrada, 2348603353);
	template<> ARKANOID_API UClass* StaticClass<AEntrada>()
	{
		return AEntrada::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEntrada(Z_Construct_UClass_AEntrada, &AEntrada::StaticClass, TEXT("/Script/Arkanoid"), TEXT("AEntrada"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEntrada);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
