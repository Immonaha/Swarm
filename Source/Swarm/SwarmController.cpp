// Fill out your copyright notice in the Description page of Project Settings.


#include "SwarmController.h"
#include "Components/BrushComponent.h"
#include "Runtime\Core\Public\Math\Box.h"
#include "Runtime\Engine\Classes\Kismet\KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Runtime\Core\Public\Containers\UnrealString.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

#include "SwarmActor.h"


ASwarmController::ASwarmController(const FObjectInitializer& ObjectInitializer)
//:super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);


	myMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("myMeshComponent"));
	myMeshComponent->SetupAttachment(RootComponent);
	GetBrushComponent()->Mobility = EComponentMobility::Static;
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("scale3d  %s"), *GetTransform().GetScale3D().ToString()));

	
	BrushColor = FColor(255, 255, 255, 255);

	bColored = true;

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("init"));

	//playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	//playerActor->GetActorLocation();
}

ASwarmController::~ASwarmController()
{
	mySwarmData.Empty();
}

void ASwarmController::BeginPlay()
{
	Super::BeginPlay();

	myMeshComponent->SetStaticMesh(myMesh);
	mySwarmData.Reserve(myParameters.mySwarmSize);

	//myBounds = GetComponentsBoundingBox(false);

	myAABBMin = FVector(-100.0f, -100.0f, -100.0f);//myBounds.GetCenter() - myBounds.GetExtent();
	myAABBMax = FVector(100.0f, 100.0f, 100.0f);//myBounds.GetCenter() + myBounds.GetExtent();

	if (myParameters.myDebugBool) GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Yellow, FString::Printf(TEXT("MIN  %s"),*myAABBMin.ToString()));
	if (myParameters.myDebugBool) GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Yellow, FString::Printf(TEXT("MAX  %s"),*myAABBMax.ToString()));

	//create each object at random positions in bounding box
	for (int i = 0; i < myParameters.mySwarmSize; i++)
	{
		int index = mySwarmData.Emplace();
		SwarmData& data = mySwarmData[index];

		data.myPosition = (FMath::RandPointInBox(GetComponentsBoundingBox(true)) / GetTransform().GetScale3D());//FVector(0.0f, 0.0f, 0.0f);
		data.myVelocity = FVector(FMath::VRand());

		FTransform tx;
		tx.SetLocation(data.myPosition);
		tx.SetScale3D(FVector(myMeshScale));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("scale3d  %s"), *tx.GetScale3D().ToString()));

		myMeshComponent->AddInstance(tx);

		//GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Yellow, FString::Printf(TEXT("pos  %s"), *data.myPosition.ToString()));
		//just some debug code
		if (myParameters.myDebugBool == true && i != 0)
		{
			SwarmData& prevData = mySwarmData[i - 1];

			float vecdist = FVector::Dist(data.myPosition, prevData.myPosition);
			//GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Yellow, FString::SanitizeFloat(vecdist));
			if (vecdist < myParameters.myCohesionRange2)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Yellow, TEXT("cohesion"));
			}

		}
	}
	//update if we changed params in editor
	myParameters.Update();
}

void ASwarmController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	myParameters.Update();

	int i = 0;

	//for every boid in the swarm
	for (SwarmData& data : mySwarmData)
	{
		FVector meanPos(0.f);
		FVector meanVel(0.f);
		FVector avoidance(0.f);

		int numInCohesionRange = 0;
		int numInAlignRange = 0;

		int j = 0;
		// for every other boid in the swarm
		for (const SwarmData& innerSwarmNode : mySwarmData)
		{
			//dont check ourself!
			if (i != j)
			{
				float dist2 = FVector::Dist(data.myPosition, innerSwarmNode.myPosition);

				//Cohesion, Avoidance, and Alignment

				//Cohesion: find the average position of nearby boids
				//Every bird attempts to move towards the average position of other nearby birds.
				if (dist2 < myParameters.myCohesionRange2)
				{
					meanPos += innerSwarmNode.myPosition;
					numInCohesionRange++;
				}

				//Avoidance: create a vector pointing away from nearby boids
				//Birds try to change their position so that it corresponds with the average alignment of other nearby birds.
				if (dist2 < (myParameters.myAvoidRange2))
				{
					avoidance += data.myPosition - innerSwarmNode.myPosition;
				}

				//Alignment: find the mean velocity of nearby boids
				//Each bird attempts to maintain a reasonable amount of distance between itself and any nearby birds, to prevent overcrowding.
				if (dist2 < (myParameters.myAlignRange2))
				{
					meanVel += innerSwarmNode.myVelocity;
					numInAlignRange++;
				}
			}
			++j;
		}

		//Coherence is a vector pointing from current pos towards the mean position of other boids within range
		if (numInCohesionRange)
			meanPos /= numInCohesionRange;

		FVector coherence = (meanPos - data.myPosition) * myParameters.myCohesionWeight;

		//align
		if (numInAlignRange)
			meanVel /= numInAlignRange;

		FVector alignment = meanVel * myParameters.myAlignWeight;

		//if a boid leaves the bounding box push them back in
		FVector bounds(0.f);

		if (data.myPosition.X < myAABBMin.X) {
			bounds.X = myParameters.myAvoidBoundsWeight;
		}
		else if (data.myPosition.X > myAABBMax.X) {
			bounds.X = -myParameters.myAvoidBoundsWeight;
		}

		if (data.myPosition.Y < myAABBMin.Y) {
			bounds.Y = myParameters.myAvoidBoundsWeight;
		}
		else if (data.myPosition.Y > myAABBMax.Y) {
			bounds.Y = -myParameters.myAvoidBoundsWeight;
		}

		if (data.myPosition.Z < myAABBMin.Z) {
			bounds.Z = myParameters.myAvoidBoundsWeight;
		}
		else if (data.myPosition.Z > myAABBMax.Z) {
			bounds.Z = -myParameters.myAvoidBoundsWeight;
		}

		bounds *= myParameters.myAvoidBoundsWeight;


		//Add up the component vectors, and Lerp towards to the new velocity to keep things smooth.
		data.myVelocity = FMath::Lerp(data.myVelocity, (data.myVelocity + (coherence + avoidance + alignment + bounds)).GetClampedToMaxSize(myParameters.myVelocityMax), DeltaSeconds * 10.f);
		data.myPosition += data.myVelocity * DeltaSeconds;

		//Calculate instance transform. Probably a more efficient way to calculate rotation here?
		FTransform tx;
		myMeshComponent->GetInstanceTransform(i, tx);
		FQuat lookAtRotator = FRotationMatrix::MakeFromX(data.myVelocity).ToQuat();
		tx.SetRotation(lookAtRotator);
		tx.SetLocation(data.myPosition);

		//Apply the new transform
		myMeshComponent->UpdateInstanceTransform(i, tx, false, i == mySwarmData.Num() - 1, true);

		//vars for checking if we can dive the player
		FHitResult OutHit;

		AActor* PlayerActor = Cast<AActor>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		FVector Start = (data.myPosition* GetTransform().GetScale3D());
		FVector ForwardVector = PlayerActor->GetActorLocation() - Start;
		FVector End = ((ForwardVector) + Start);
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(PlayerActor);
		//draw debug line. float is lines lifetime
		DrawDebugLine(GetWorld(), Start, End, FColor::Black, false, 0.08f, 0, 4);

		if (GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams))
		{
			if (OutHit.bBlockingHit)
			{
				//if (myParameters.myDebugBool) DrawDebugLine(GetWorld(),OutHit.ImpactPoint, End, FColor::White, false, 0.08f, 0, 2);
				//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("BONK"));
				//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("from %s"),*Start.ToString()));
				//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("to %s"), *End.ToString()));
				//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Impact Point: %s"), *OutHit.ImpactPoint.ToString()));
				//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Normal Point: %s"), *OutHit.ImpactNormal.ToString()));
			}
		}
		else {
			//if (myParameters.myDebugBool) DrawDebugLine(GetWorld(), Start, End, FColor::Black, false, 0.08f, 0, 2);
		}

		++i;
	}
}
void ASwarmController::Spawn(FVector SpawnLocation)
{
if (GetWorld())
	{
		//set params
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		//get rand rotation
		FRotator SpawnRotation;
		SpawnRotation.Yaw = FMath::FRand() * 360.0f;
		SpawnRotation.Pitch = FMath::FRand() * 360.0f;
		SpawnRotation.Roll = FMath::FRand() * 360.0f;

		//spawn it
		ASwarmActor* cost = GetWorld()->SpawnActor<ASwarmActor>(MeshToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
	}
}