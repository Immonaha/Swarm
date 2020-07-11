// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
//#include "Components/InstancedStaticMeshComponent.h"
#include "SwarmData.h"
#include "SwarmParameters.h"
#include "GameFramework/Volume.h"
#include "SwarmController.generated.h"


class UInstancedStaticMeshComponent;


UCLASS(hidecategories = (Tags, Cooking, Actor, HLOD, Mobile, LOD))
class SWARM_API ASwarmController : public AVolume
{

	GENERATED_UCLASS_BODY()

public:

	ASwarmController();
	~ASwarmController();

	TArray<SwarmData> mySwarmData;

	APawn* playerPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Swarm")
		UStaticMesh* myMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Swarm")
		float myMeshScale = 0.20f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Swarm")
		FUSwarmParameters myParameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Swarm")
		UInstancedStaticMeshComponent* myMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Swarm")
		TSubclassOf<class ASwarmActor> MeshToSpawn;

	void BeginPlay() override;

	void Tick(float DeltaSeconds) override;

	void Spawn(FVector SpawnLocation);

protected:
	FBox myBounds;

	FVector myAABBMin, myAABBMax;
};
