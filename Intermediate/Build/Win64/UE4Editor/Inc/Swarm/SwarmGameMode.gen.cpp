// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swarm/SwarmGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmGameMode() {}
// Cross Module References
	SWARM_API UClass* Z_Construct_UClass_ASwarmGameMode_NoRegister();
	SWARM_API UClass* Z_Construct_UClass_ASwarmGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Swarm();
// End Cross Module References
	void ASwarmGameMode::StaticRegisterNativesASwarmGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASwarmGameMode_NoRegister()
	{
		return ASwarmGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASwarmGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwarmGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Swarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SwarmGameMode.h" },
		{ "ModuleRelativePath", "SwarmGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwarmGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwarmGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwarmGameMode_Statics::ClassParams = {
		&ASwarmGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASwarmGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwarmGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwarmGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwarmGameMode, 47820249);
	template<> SWARM_API UClass* StaticClass<ASwarmGameMode>()
	{
		return ASwarmGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwarmGameMode(Z_Construct_UClass_ASwarmGameMode, &ASwarmGameMode::StaticClass, TEXT("/Script/Swarm"), TEXT("ASwarmGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwarmGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
