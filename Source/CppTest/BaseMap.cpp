// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseMap.h"


// Sets default values
ABaseMap::ABaseMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	if (this->mapGenerator == nullptr)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "Map Generator not setup!");
		UE_LOG(LogTemp, Error, TEXT("Map %s has been initialized without Map Generator!"), *this->GetFName().ToString());

		return;
	}
	
}

// Called when the game starts or when spawned
void ABaseMap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

