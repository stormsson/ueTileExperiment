// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseTile.h"


// Sets default values
ABaseTile::ABaseTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseTile::BeginPlay()
{
	Super::BeginPlay();
	if (this->Tile_ID == NAME_None)
	{
//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, ("Tile has been initialized without Tile_ID!"));
		UE_LOG(LogTemp, Error, TEXT("Tile %s has been initialized without Tile_ID!"), *this->GetFName().ToString());		

	}
}

// Called every frame
void ABaseTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*
void ABaseTile::setMapPosition(int32 X, int32 Y)
{
	this->mapPosition.X = X;
	this->mapPosition.Y = Y;
}
*/
void ABaseTile::setMapPosition(const FMapCoordinates &newMapPosition)
{
	this->mapPosition = newMapPosition;
}