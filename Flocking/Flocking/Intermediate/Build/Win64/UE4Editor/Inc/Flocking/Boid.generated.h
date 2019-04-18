// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_Boid_generated_h
#error "Boid.generated.h already included, missing '#pragma once' in Boid.h"
#endif
#define FLOCKING_Boid_generated_h

#define Flocking_Source_Flocking_Boid_h_12_RPC_WRAPPERS
#define Flocking_Source_Flocking_Boid_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Flocking_Source_Flocking_Boid_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend FLOCKING_API class UClass* Z_Construct_UClass_ABoid(); \
public: \
	DECLARE_CLASS(ABoid, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(ABoid) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Flocking_Source_Flocking_Boid_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend FLOCKING_API class UClass* Z_Construct_UClass_ABoid(); \
public: \
	DECLARE_CLASS(ABoid, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(ABoid) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Flocking_Source_Flocking_Boid_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public:


#define Flocking_Source_Flocking_Boid_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoid)


#define Flocking_Source_Flocking_Boid_h_12_PRIVATE_PROPERTY_OFFSET
#define Flocking_Source_Flocking_Boid_h_9_PROLOG
#define Flocking_Source_Flocking_Boid_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Boid_h_12_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Boid_h_12_RPC_WRAPPERS \
	Flocking_Source_Flocking_Boid_h_12_INCLASS \
	Flocking_Source_Flocking_Boid_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_Boid_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Boid_h_12_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Boid_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Boid_h_12_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Boid_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_Boid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
