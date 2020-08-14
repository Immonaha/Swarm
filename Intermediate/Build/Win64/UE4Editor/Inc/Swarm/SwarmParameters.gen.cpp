// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swarm/SwarmParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmParameters() {}
// Cross Module References
	SWARM_API UScriptStruct* Z_Construct_UScriptStruct_FUSwarmParameters();
	UPackage* Z_Construct_UPackage__Script_Swarm();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
class UScriptStruct* FUSwarmParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWARM_API uint32 Get_Z_Construct_UScriptStruct_FUSwarmParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUSwarmParameters, Z_Construct_UPackage__Script_Swarm(), TEXT("USwarmParameters"), sizeof(FUSwarmParameters), Get_Z_Construct_UScriptStruct_FUSwarmParameters_Hash());
	}
	return Singleton;
}
template<> SWARM_API UScriptStruct* StaticStruct<FUSwarmParameters>()
{
	return FUSwarmParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUSwarmParameters(FUSwarmParameters::StaticStruct, TEXT("/Script/Swarm"), TEXT("USwarmParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Swarm_StaticRegisterNativesFUSwarmParameters
{
	FScriptStruct_Swarm_StaticRegisterNativesFUSwarmParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("USwarmParameters")),new UScriptStruct::TCppStructOps<FUSwarmParameters>);
	}
} ScriptStruct_Swarm_StaticRegisterNativesFUSwarmParameters;
	struct Z_Construct_UScriptStruct_FUSwarmParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myAbsoluteScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_myAbsoluteScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myDebugBool_MetaData[];
#endif
		static void NewProp_myDebugBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_myDebugBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myVelocityMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myVelocityMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myAvoidBoundsWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myAvoidBoundsWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myAlignRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myAlignRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myAlignWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myAlignWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myCohesionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myCohesionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myCohesionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myCohesionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myAvoidWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myAvoidWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myAvoidRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myAvoidRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mySwarmSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mySwarmSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUSwarmParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAbsoluteScale_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAbsoluteScale = { "myAbsoluteScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myAbsoluteScale), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAbsoluteScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAbsoluteScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool_SetBit(void* Obj)
	{
		((FUSwarmParameters*)Obj)->myDebugBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool = { "myDebugBool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUSwarmParameters), &Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myVelocityMax_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myVelocityMax = { "myVelocityMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myVelocityMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myVelocityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myVelocityMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidBoundsWeight_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "Comment", "/** The SQRT of the boid bounding box*/" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
		{ "ToolTip", "The SQRT of the boid bounding box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidBoundsWeight = { "myAvoidBoundsWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myAvoidBoundsWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidBoundsWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidBoundsWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignRange_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignRange = { "myAlignRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myAlignRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignWeight_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "Comment", "/** The SQRT of the align range for boids*/" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
		{ "ToolTip", "The SQRT of the align range for boids" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignWeight = { "myAlignWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myAlignWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionRange_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionRange = { "myCohesionRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myCohesionRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionWeight_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "Comment", "/** The SQRT of the coherance range for boids*/" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
		{ "ToolTip", "The SQRT of the coherance range for boids" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionWeight = { "myCohesionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myCohesionWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidWeight_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidWeight = { "myAvoidWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myAvoidWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidRange_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "Comment", "/** The SQRT of the avoid range for boids*/" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
		{ "ToolTip", "The SQRT of the avoid range for boids" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidRange = { "myAvoidRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, myAvoidRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_mySwarmSize_MetaData[] = {
		{ "Category", "USwarmParameters" },
		{ "Comment", "/** The number of boids to spawn */" },
		{ "ModuleRelativePath", "SwarmParameters.h" },
		{ "ToolTip", "The number of boids to spawn" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_mySwarmSize = { "mySwarmSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUSwarmParameters, mySwarmSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_mySwarmSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_mySwarmSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUSwarmParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAbsoluteScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myDebugBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myVelocityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidBoundsWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAlignWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myCohesionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_myAvoidRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUSwarmParameters_Statics::NewProp_mySwarmSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUSwarmParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Swarm,
		nullptr,
		&NewStructOps,
		"USwarmParameters",
		sizeof(FUSwarmParameters),
		alignof(FUSwarmParameters),
		Z_Construct_UScriptStruct_FUSwarmParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUSwarmParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUSwarmParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUSwarmParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Swarm();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("USwarmParameters"), sizeof(FUSwarmParameters), Get_Z_Construct_UScriptStruct_FUSwarmParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUSwarmParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUSwarmParameters_Hash() { return 2307471856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
