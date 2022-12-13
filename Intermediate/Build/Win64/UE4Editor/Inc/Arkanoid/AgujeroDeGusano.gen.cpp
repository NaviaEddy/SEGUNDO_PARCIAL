// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/AgujeroDeGusano.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgujeroDeGusano() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_UAgujeroDeGusano_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_UAgujeroDeGusano();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void UAgujeroDeGusano::StaticRegisterNativesUAgujeroDeGusano()
	{
	}
	UClass* Z_Construct_UClass_UAgujeroDeGusano_NoRegister()
	{
		return UAgujeroDeGusano::StaticClass();
	}
	struct Z_Construct_UClass_UAgujeroDeGusano_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgujeroDeGusano_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgujeroDeGusano_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "AgujeroDeGusano.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgujeroDeGusano_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAgujeroDeGusano>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgujeroDeGusano_Statics::ClassParams = {
		&UAgujeroDeGusano::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAgujeroDeGusano_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgujeroDeGusano_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgujeroDeGusano()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgujeroDeGusano_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgujeroDeGusano, 2146684636);
	template<> ARKANOID_API UClass* StaticClass<UAgujeroDeGusano>()
	{
		return UAgujeroDeGusano::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgujeroDeGusano(Z_Construct_UClass_UAgujeroDeGusano, &UAgujeroDeGusano::StaticClass, TEXT("/Script/Arkanoid"), TEXT("UAgujeroDeGusano"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgujeroDeGusano);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
