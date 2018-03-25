// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BaseTile.h"
#include "TileFactoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPTEST_API UTileFactoryComponent : public UInstancedStaticMeshComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTileFactoryComponent();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category = "Map Properties")
	TMap<int32, FMapCoordinates> mapCoordinates;

	UFUNCTION(BlueprintCallable, Category= "Map Properties")
	void setMapCoordinates(int32 index, FMapCoordinates newCoordinates);

	UFUNCTION(BlueprintCallable, Category = "Map Properties")
	FMapCoordinates getMapCoordinates(int32 index);

	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category = "Map Properties")
	FName Tile_ID = FName(NAME_None);
	
};
