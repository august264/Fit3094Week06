// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_Asteroid_generated_h
#error "Asteroid.generated.h already included, missing '#pragma once' in Asteroid.h"
#endif
#define FLOCKING_Asteroid_generated_h

#define Flocking_Source_Flocking_Asteroid_h_13_RPC_WRAPPERS
#define Flocking_Source_Flocking_Asteroid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Flocking_Source_Flocking_Asteroid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend FLOCKING_API class UClass* Z_Construct_UClass_AAsteroid(); \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Flocking_Source_Flocking_Asteroid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend FLOCKING_API class UClass* Z_Construct_UClass_AAsteroid(); \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Flocking_Source_Flocking_Asteroid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public:


#define Flocking_Source_Flocking_Asteroid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroid)


#define Flocking_Source_Flocking_Asteroid_h_13_PRIVATE_PROPERTY_OFFSET
#define Flocking_Source_Flocking_Asteroid_h_10_PROLOG
#define Flocking_Source_Flocking_Asteroid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Asteroid_h_13_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Asteroid_h_13_RPC_WRAPPERS \
	Flocking_Source_Flocking_Asteroid_h_13_INCLASS \
	Flocking_Source_Flocking_Asteroid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_Asteroid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Asteroid_h_13_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Asteroid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Asteroid_h_13_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Asteroid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_Asteroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
