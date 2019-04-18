// Fill out your copyright notice in the Description page of Project Settings.

#include "Asteroid.h"
#include "ConstructorHelpers.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
AAsteroid::AAsteroid()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
	AsteroidVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual Representation"));
	AsteroidVisual->SetupAttachment(RootComponent);

	//Get Sphere Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisualAsset.Succeeded())
	{
		AsteroidVisual->SetStaticMesh(SphereVisualAsset.Object);
	}

	//Get Material
	static ConstructorHelpers::FObjectFinder<UMaterial> FoundMaterial(TEXT("/Game/StarterContent/Materials/M_Concrete_Grime.M_Concrete_Grime"));
	if (FoundMaterial.Succeeded())
	{
		DynamicMaterialInst = UMaterialInstanceDynamic::Create((UMaterial*)FoundMaterial.Object, AsteroidVisual);
		AsteroidVisual->SetMaterial(0, DynamicMaterialInst);
	}

	//Set Speed, Position and Target
	speed = 300.0f;
	position = this->GetActorLocation();
	//SetRandomTarget();
}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Set the current boid location
	position = this->GetActorLocation();

	targetLocation = Separation() * 2.0f + Cohesion() * 1.5f + Alignment() * 1.0f;
	//targetLocation.Normalize();

	SetActorLocation(position + (targetLocation * speed * DeltaTime)); // Random Moving at the beginning
	//SetActorLocation(position + (mixin * speed * DeltaTime));
	

	//targetLocation.Normalize();
	//NewLocation = position + (targetLocation * speed * DeltaTime);
	//SetActorLocation(NewLocation);

	//if (position.X >= 3000.0f || position.Y >= 3000.0f || position.Z >= 3000.0f || position.X <= -3000.0f || position.Y <= -3000.0f || position.Z <= -3000.0f) {
//
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("Out!")));
	//	//SetRandomTarget();
	//}
}

void AAsteroid::SetRandomTarget()
{
	targetLocation.X = FMath::FRandRange(-3000, 3000);
	targetLocation.Y = FMath::FRandRange(-3000, 3000);
	targetLocation.Z = FMath::FRandRange(-3000, 3000);
}


FVector AAsteroid::Alignment()
{
	FVector steering;
	int total = 0;
	float Radius = 800.0f;

	TArray<FHitResult> OutHits;
	FCollisionShape ExplosionSphere = FCollisionShape::MakeSphere(Radius);
	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, position, position, FQuat::Identity, ECC_WorldStatic, ExplosionSphere);

	for (auto& Hit : OutHits) {
		float d = FVector::Dist(position, Hit.GetActor()->GetActorLocation());		
		if (Hit.GetActor() != this && d < Radius) {
			steering += Hit.GetActor()->GetActorLocation();
			total++;
		}
	}

	if (total > 0) {
		steering = steering / total;
		steering -= position;
	
	}

	steering.Normalize();
	return steering;
}

FVector AAsteroid::Cohesion()
{
	FVector steering;
	int total = 0;
	float Radius = 800.0f;

	TArray<FHitResult> OutHits;
	FCollisionShape ExplosionSphere = FCollisionShape::MakeSphere(Radius);
	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, position, position, FQuat::Identity, ECC_WorldStatic, ExplosionSphere);

	for (auto& Hit : OutHits) {
		float d = FVector::Dist(position, Hit.GetActor()->GetActorLocation());
		if (Hit.GetActor() != this && d < Radius) {
			steering += Hit.GetActor()->GetActorLocation();
			total++;
		}
	}
	
	if (total > 0) {
		steering = steering / total;
		steering = steering - this->position;
	}

	steering.Normalize();
	return steering;
}

FVector AAsteroid::Separation()
{

	FVector steering;
	int total = 0;
	float Radius = 400.0f;
	
	TArray<FHitResult> OutHits;
	FCollisionShape ExplosionSphere = FCollisionShape::MakeSphere(Radius);
	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, position, position, FQuat::Identity, ECC_WorldStatic, ExplosionSphere);

	for (auto& Hit : OutHits) {
		float d = FVector::Dist(this->position, Hit.GetActor()->GetActorLocation());
		if (Hit.GetActor() != this && d < Radius) {
			steering += - position + Hit.GetActor()->GetActorLocation();
			total++;
		}
	}

	if (total > 0) {
		steering = steering / total;
		//steering -= this->position;
		steering *= -1;
	}

	steering.Normalize();
	return steering;

}

