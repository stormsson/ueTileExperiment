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

	UE_LOG(LogTemp, Error, TEXT("Map %s has been initialized without Map Generator!"), *this->GetFName().ToString());
	UClass* classReference = this->mapGeneratorReference->GeneratedClass;
	
	this->mapGenerator = GetWorld()->SpawnActor<ABaseMapGenerator>(this->mapGeneratorReference->GeneratedClass);  
	this->mapGenerator->SetActorLocation(this->GetActorLocation());
	this->mapGenerator->setMap(this);
	this->mapGenerator->buildMap(mapWidth, mapHeight);
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
		//GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "Map Generator not setup!");
		UE_LOG(LogTemp, Error, TEXT("Map %s has been initialized without Map Generator!"), *this->GetFName().ToString());
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