// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWARM_SwarmController_generated_h
#error "SwarmController.generated.h already included, missing '#pragma once' in SwarmController.h"
#endif
#define SWARM_SwarmController_generated_h

#define Swarm_Source_Swarm_SwarmController_h_20_SPARSE_DATA
#define Swarm_Source_Swarm_SwarmController_h_20_RPC_WRAPPERS
#define Swarm_Source_Swarm_SwarmController_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Swarm_Source_Swarm_SwarmController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwarmController(); \
	friend struct Z_Construct_UClass_ASwarmController_Statics; \
public: \
	DECLARE_CLASS(ASwarmController, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swarm"), NO_API) \
	DECLARE_SERIALIZER(ASwarmController)


#define Swarm_Source_Swarm_SwarmController_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASwarmController(); \
	friend struct Z_Construct_UClass_ASwarmController_Statics; \
public: \
	DECLARE_CLASS(ASwarmController, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swarm"), NO_API) \
	DECLARE_SERIALIZER(ASwarmController)


#define Swarm_Source_Swarm_SwarmController_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwarmController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwarmController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwarmController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwarmController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwarmController(ASwarmController&&); \
	NO_API ASwarmController(const ASwarmController&); \
public:


#define Swarm_Source_Swarm_SwarmController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwarmController(ASwarmController&&); \
	NO_API ASwarmController(const ASwarmController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwarmController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwarmController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwarmController)


#define Swarm_Source_Swarm_SwarmController_h_20_PRIVATE_PROPERTY_OFFSET
#define Swarm_Source_Swarm_SwarmController_h_16_PROLOG
#define Swarm_Source_Swarm_SwarmController_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swarm_Source_Swarm_SwarmController_h_20_PRIVATE_PROPERTY_OFFSET \
	Swarm_Source_Swarm_SwarmController_h_20_SPARSE_DATA \
	Swarm_Source_Swarm_SwarmController_h_20_RPC_WRAPPERS \
	Swarm_Source_Swarm_SwarmController_h_20_INCLASS \
	Swarm_Source_Swarm_SwarmController_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Swarm_Source_Swarm_SwarmController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swarm_Source_Swarm_SwarmController_h_20_PRIVATE_PROPERTY_OFFSET \
	Swarm_Source_Swarm_SwarmController_h_20_SPARSE_DATA \
	Swarm_Source_Swarm_SwarmController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Swarm_Source_Swarm_SwarmController_h_20_INCLASS_NO_PURE_DECLS \
	Swarm_Source_Swarm_SwarmController_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SwarmController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWARM_API UClass* StaticClass<class ASwarmController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Swarm_Source_Swarm_SwarmController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
