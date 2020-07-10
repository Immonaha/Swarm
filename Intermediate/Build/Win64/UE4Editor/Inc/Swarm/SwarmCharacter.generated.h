// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWARM_SwarmCharacter_generated_h
#error "SwarmCharacter.generated.h already included, missing '#pragma once' in SwarmCharacter.h"
#endif
#define SWARM_SwarmCharacter_generated_h

#define Swarm_Source_Swarm_SwarmCharacter_h_12_SPARSE_DATA
#define Swarm_Source_Swarm_SwarmCharacter_h_12_RPC_WRAPPERS
#define Swarm_Source_Swarm_SwarmCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Swarm_Source_Swarm_SwarmCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwarmCharacter(); \
	friend struct Z_Construct_UClass_ASwarmCharacter_Statics; \
public: \
	DECLARE_CLASS(ASwarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swarm"), NO_API) \
	DECLARE_SERIALIZER(ASwarmCharacter)


#define Swarm_Source_Swarm_SwarmCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwarmCharacter(); \
	friend struct Z_Construct_UClass_ASwarmCharacter_Statics; \
public: \
	DECLARE_CLASS(ASwarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swarm"), NO_API) \
	DECLARE_SERIALIZER(ASwarmCharacter)


#define Swarm_Source_Swarm_SwarmCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwarmCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwarmCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwarmCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwarmCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwarmCharacter(ASwarmCharacter&&); \
	NO_API ASwarmCharacter(const ASwarmCharacter&); \
public:


#define Swarm_Source_Swarm_SwarmCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwarmCharacter(ASwarmCharacter&&); \
	NO_API ASwarmCharacter(const ASwarmCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwarmCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwarmCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwarmCharacter)


#define Swarm_Source_Swarm_SwarmCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASwarmCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASwarmCharacter, FollowCamera); }


#define Swarm_Source_Swarm_SwarmCharacter_h_9_PROLOG
#define Swarm_Source_Swarm_SwarmCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swarm_Source_Swarm_SwarmCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Swarm_Source_Swarm_SwarmCharacter_h_12_SPARSE_DATA \
	Swarm_Source_Swarm_SwarmCharacter_h_12_RPC_WRAPPERS \
	Swarm_Source_Swarm_SwarmCharacter_h_12_INCLASS \
	Swarm_Source_Swarm_SwarmCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Swarm_Source_Swarm_SwarmCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swarm_Source_Swarm_SwarmCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Swarm_Source_Swarm_SwarmCharacter_h_12_SPARSE_DATA \
	Swarm_Source_Swarm_SwarmCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Swarm_Source_Swarm_SwarmCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Swarm_Source_Swarm_SwarmCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWARM_API UClass* StaticClass<class ASwarmCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Swarm_Source_Swarm_SwarmCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
