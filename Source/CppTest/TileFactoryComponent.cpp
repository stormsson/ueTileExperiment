// Fill out your copyright notice in the Description page of Project Settings.

#include "TileFactoryComponent.h"
// Sets default values for this component's properties
UTileFactoryComponent::UTileFactoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	// ...
}


// Called when the game starts
void UTileFactoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTileFactoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTileFactoryComponent::setMapCoordinates(int32 index, FMapCoordinates newCoordinates)
{
	mapCoordinates.Add(index, newCoordinates);
}

FMapCoordinates UTileFactoryComponent::getMapCoordinates(int32 index)
{
	if (mapCoordinates.Contains(index))
	{
		return mapCoordinates[index];
	}

	return false;
}
