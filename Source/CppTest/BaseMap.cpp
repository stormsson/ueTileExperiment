// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseMap.h"


// Sets default values
ABaseMap::ABaseMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;		
}

void ABaseMap::instantiateMapGenerator()
{
	
	UE_LOG(LogTemp, Warning, TEXT("Starting map generation!"));

	this->mapGeneratorInstance = GetWorld()->SpawnActor<ABaseMapGenerator>(this->mapGeneratorReference);
	if (this->mapGeneratorInstance == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Could not create Map Generator from Reference in Map %s !"), *this->GetFName().ToString());
		return;
	}

	this->mapGeneratorInstance->SetActorLocation(this->GetActorLocation());
	this->mapGeneratorInstance->setMap(this);
	this->mapGeneratorInstance->buildMap(mapWidth, mapHeight);
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, "Finished map generation");


	/* questo dovrebbe funzionare ma in realtà non funziona...
	this->mapGenerator = GetWorld()->SpawnActorDeferred<ABaseMapGenerator>(this->mapGeneratorReference->StaticClass(), this->GetActorTransform());	
	this->mapGenerator->FinishSpawning(this->GetActorTransform());
	this->mapGenerator->buildMap(mapWidth, mapHeight);
	*/

}

// Called when the game starts or when spawned
void ABaseMap::BeginPlay()
{
	Super::BeginPlay();
	

	if (this->mapGeneratorReference == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Map %s has been initialized without Map Generator Reference!"), *this->GetFName().ToString());
		return;
	}

	this->instantiateMapGenerator();
	
}

// Called every frame
void ABaseMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABaseTile* ABaseMap::getTileAtCoords(int32 x, int32 y)
{
	return tiles[x][y];
}