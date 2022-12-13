// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARKANOID_Lugar_generated_h
#error "Lugar.generated.h already included, missing '#pragma once' in Lugar.h"
#endif
#define ARKANOID_Lugar_generated_h

#define Arkanoid_Source_Arkanoid_Lugar_h_15_SPARSE_DATA
#define Arkanoid_Source_Arkanoid_Lugar_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapBegin);


#define Arkanoid_Source_Arkanoid_Lugar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapBegin);


#define Arkanoid_Source_Arkanoid_Lugar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALugar(); \
	friend struct Z_Construct_UClass_ALugar_Statics; \
public: \
	DECLARE_CLASS(ALugar, AEntrada, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(ALugar)


#define Arkanoid_Source_Arkanoid_Lugar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALugar(); \
	friend struct Z_Construct_UClass_ALugar_Statics; \
public: \
	DECLARE_CLASS(ALugar, AEntrada, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(ALugar)


#define Arkanoid_Source_Arkanoid_Lugar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALugar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALugar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALugar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALugar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALugar(ALugar&&); \
	NO_API ALugar(const ALugar&); \
public:


#define Arkanoid_Source_Arkanoid_Lugar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALugar(ALugar&&); \
	NO_API ALugar(const ALugar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALugar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALugar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALugar)


#define Arkanoid_Source_Arkanoid_Lugar_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(ALugar, Sphere); }


#define Arkanoid_Source_Arkanoid_Lugar_h_12_PROLOG
#define Arkanoid_Source_Arkanoid_Lugar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_Source_Arkanoid_Lugar_h_15_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_Source_Arkanoid_Lugar_h_15_SPARSE_DATA \
	Arkanoid_Source_Arkanoid_Lugar_h_15_RPC_WRAPPERS \
	Arkanoid_Source_Arkanoid_Lugar_h_15_INCLASS \
	Arkanoid_Source_Arkanoid_Lugar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkanoid_Source_Arkanoid_Lugar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_Source_Arkanoid_Lugar_h_15_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_Source_Arkanoid_Lugar_h_15_SPARSE_DATA \
	Arkanoid_Source_Arkanoid_Lugar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkanoid_Source_Arkanoid_Lugar_h_15_INCLASS_NO_PURE_DECLS \
	Arkanoid_Source_Arkanoid_Lugar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class ALugar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkanoid_Source_Arkanoid_Lugar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
