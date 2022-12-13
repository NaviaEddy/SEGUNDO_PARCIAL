// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_Paddle_PlayerController_generated_h
#error "Paddle_PlayerController.generated.h already included, missing '#pragma once' in Paddle_PlayerController.h"
#endif
#define ARKANOID_Paddle_PlayerController_generated_h

#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_SPARSE_DATA
#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle_PlayerController(); \
	friend struct Z_Construct_UClass_APaddle_PlayerController_Statics; \
public: \
	DECLARE_CLASS(APaddle_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddle_PlayerController)


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle_PlayerController(); \
	friend struct Z_Construct_UClass_APaddle_PlayerController_Statics; \
public: \
	DECLARE_CLASS(APaddle_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddle_PlayerController)


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle_PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_PlayerController(APaddle_PlayerController&&); \
	NO_API APaddle_PlayerController(const APaddle_PlayerController&); \
public:


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_PlayerController(APaddle_PlayerController&&); \
	NO_API APaddle_PlayerController(const APaddle_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle_PlayerController)


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObj() { return STRUCT_OFFSET(APaddle_PlayerController, BallObj); }


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_15_PROLOG
#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_SPARSE_DATA \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_RPC_WRAPPERS \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_INCLASS \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_SPARSE_DATA \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
	Arkanoid_Source_Arkanoid_Paddle_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class APaddle_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkanoid_Source_Arkanoid_Paddle_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
