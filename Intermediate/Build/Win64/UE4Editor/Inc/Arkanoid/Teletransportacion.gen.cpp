// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/Teletransportacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeletransportacion() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ATeletransportacion_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ATeletransportacion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
	ARKANOID_API UClass* Z_Construct_UClass_UAgujeroDeGusano_NoRegister();
// End Cross Module References
	void ATeletransportacion::StaticRegisterNativesATeletransportacion()
	{
	}
	UClass* Z_Construct_UClass_ATeletransportacion_NoRegister()
	{
		return ATeletransportacion::StaticClass();
	}
	struct Z_Construct_UClass_ATeletransportacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeletransportacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeletransportacion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Teletransportacion.h" },
		{ "ModuleRelativePath", "Teletransportacion.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATeletransportacion_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAgujeroDeGusano_NoRegister, (int32)VTABLE_OFFSET(ATeletransportacion, IAgujeroDeGusano), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeletransportacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeletransportacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeletransportacion_Statics::ClassParams = {
		&ATeletransportacion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATeletransportacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeletransportacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeletransportacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeletransportacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeletransportacion, 3070823264);
	template<> ARKANOID_API UClass* StaticClass<ATeletransportacion>()
	{
		return ATeletransportacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeletransportacion(Z_Construct_UClass_ATeletransportacion, &ATeletransportacion::StaticClass, TEXT("/Script/Arkanoid"), TEXT("ATeletransportacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeletransportacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
