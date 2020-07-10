// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SwarmParameters.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct SWARM_API FUSwarmParameters
{
	GENERATED_BODY()

	/** The number of boids to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int mySwarmSize;
	/** The SQRT of the avoid range for boids*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myAvoidRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myAvoidWeight;
	/** The SQRT of the coherance range for boids*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myCohesionWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myCohesionRange;
	/** The SQRT of the align range for boids*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myAlignWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myAlignRange;
	/** The SQRT of the boid bounding box*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myAvoidBoundsWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float myVelocityMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool myDebugBool;

	float myAvoidRange2, myCohesionRange2, myAlignRange2;

	//easier to set params this way
	FUSwarmParameters() :
		mySwarmSize(100),
		myAvoidRange(4.0f),
		myAvoidWeight(1.0f),
		myCohesionWeight(1.0f),
		myCohesionRange(4.0f),
		myAlignWeight(1.0f),
		myAlignRange(10.0f),
		myAvoidBoundsWeight(10.0f),
		myVelocityMax(50.f),
		myDebugBool(true),
		myAvoidRange2(0.f),
		myCohesionRange2(0.f),
		myAlignRange2(0.f) {}

	void Update()
	{
		myAvoidRange2 = myAvoidRange * myAvoidRange;
		myCohesionRange2 = myCohesionRange * myCohesionRange;
		myAlignRange2 = myAlignRange * myAlignRange;
	}

};