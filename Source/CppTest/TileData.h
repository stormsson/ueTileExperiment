// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/StaticMesh.h"
#include "TileData.generated.h"


USTRUCT(BlueprintType)
struct FTileType
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FName Tile_ID;

	UPROPERTY(EditAnywhere)
	UStaticMesh* mesh;

	UPROPERTY(EditAnywhere)
	FString publicName;

	UPROPERTY(EditAnywhere)
	TArray<FVector> navigationNodes;
	
};

/**
 * 
 */
UCLASS(Blueprintable)
class CPPTEST_API UTileData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FTileType> tiles;
	
};
