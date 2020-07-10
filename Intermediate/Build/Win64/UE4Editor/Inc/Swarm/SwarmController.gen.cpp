// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swarm/SwarmController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmController() {}
// Cross Module References
	SWARM_API UClass* Z_Construct_UClass_ASwarmController_NoRegister();
	SWARM_API UClass* Z_Construct_UClass_ASwarmController();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Swarm();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	SWARM_API UScriptStruct* Z_Construct_UScriptStruct_FUSwarmParameters();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ASwarmController::StaticRegisterNativesASwarmController()
	{
	}
	UClass* Z_Construct_UClass_ASwarmController_NoRegister()
	{
		return ASwarmController::StaticClass();
	}
	struct Z_Construct_UClass_ASwarmController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_myParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwarmController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Swarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tags Cooking Actor HLOD Mobile LOD Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SwarmController.h" },
		{ "ModuleRelativePath", "SwarmController.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshComponent_MetaData[] = {
		{ "Category", "Swarm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwarmController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshComponent = { "myMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwarmController, myMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmController_Statics::NewProp_myParameters_MetaData[] = {
		{ "Category", "Swarm" },
		{ "ModuleRelativePath", "SwarmController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASwarmController_Statics::NewProp_myParameters = { "myParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwarmController, myParameters), Z_Construct_UScriptStruct_FUSwarmParameters, METADATA_PARAMS(Z_Construct_UClass_ASwarmController_Statics::NewProp_myParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmController_Statics::NewProp_myParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshScale_MetaData[] = {
		{ "Category", "Swarm" },
		{ "ModuleRelativePath", "SwarmController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshScale = { "myMeshScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwarmController, myMeshScale), METADATA_PARAMS(Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmController_Statics::NewProp_myMesh_MetaData[] = {
		{ "Category", "Swarm" },
		{ "ModuleRelativePath", "SwarmController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwarmController_Statics::NewProp_myMesh = { "myMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwarmController, myMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwarmController_Statics::NewProp_myMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmController_Statics::NewProp_myMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwarmController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmController_Statics::NewProp_myParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmController_Statics::NewProp_myMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmController_Statics::NewProp_myMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwarmController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwarmController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwarmController_Statics::ClassParams = {
		&ASwarmController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASwarmController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwarmController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwarmController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwarmController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwarmController, 1455674928);
	template<> SWARM_API UClass* StaticClass<ASwarmController>()
	{
		return ASwarmController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwarmController(Z_Construct_UClass_ASwarmController, &ASwarmController::StaticClass, TEXT("/Script/Swarm"), TEXT("ASwarmController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwarmController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
