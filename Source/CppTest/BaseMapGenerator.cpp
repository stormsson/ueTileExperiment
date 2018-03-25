// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseMapGenerator.h"
#include "BaseMap.h"

#include "UtilityTimer.h"
// Sets default values
ABaseMapGenerator::ABaseMapGenerator() : ABaseMapGenerator(8, 8) {}


ABaseMapGenerator::ABaseMapGenerator(int w, int h)
{
	this->mapWidth = w;
	this->mapHeight = h;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	this->generateAllowedTilesReferences();

}

// Called when the game starts or when spawned
void ABaseMapGenerator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


int32 ABaseMapGenerator::generateAllowedTilesReferences()
{							
	//GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Blue, "ABaseMapGenerator::generateAllowedTilesReferences");
	static ConstructorHelpers::FObjectFinder<UClass> AsphaltTile(TEXT("Class'/Game/MapGenerator/Tiles/TileAsphalt.TileAsphalt_C'"));

	if (AsphaltTile.Object) {
		this->AllowedTiles.Add(AsphaltTile.Object);
	}
	

	return this->AllowedTiles.Num();
}

void ABaseMapGenerator::buildMap(int32 w=NULL, int32 h=NULL)
{
	if (w){ mapWidth = w;}
	if (h) { mapHeight = h; }
	generateMap();
}

void ABaseMapGenerator::generateMap()
{
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Blue, "ABaseMapGenerator::generateMap");

	FVector baseLocation = this->GetActorLocation();
	if (this->AllowedTiles.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "Allowed tiles array is empty!");
		return;
	}

	if (map == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "Could not find map reference!");
		return;
	}


	UClass* tileToSpawn = this->AllowedTiles[0];
	if (tileToSpawn == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red,"Could not find at least 1 tile in allowed tiles array");
		return;
	}

	FVector spawnOffset = FVector(.0f);
	
	UtilityTimer t;



	t.tick(TEXT("RIGA"));

	for (int rowIndex = 0; rowIndex < mapHeight; rowIndex++)
	{
		spawnOffset.Y = (float) rowIndex * this->tileSize+ this->tileSize * this->tilePadding * rowIndex;
		if (!map->tiles.IsValidIndex(rowIndex)) {	
			FMapRow newRow;
			map->tiles.Add(newRow);
		}

		map->tiles[rowIndex].row.AddUninitialized(mapWidth);
		for (int colIndex = 0; colIndex < mapWidth; colIndex++)
		{
			spawnOffset.X = (float) colIndex * this->tileSize + this->tileSize * this->tilePadding * colIndex;

			FVector spawnLocation = FVector(baseLocation + spawnOffset);
			
			//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "Row: "+ FString::FromInt(rowIndex)+" Col: "+ FString::FromInt(colIndex));
			ABaseTile* spawnedTile = GetWorld()->SpawnActor<ABaseTile>(tileToSpawn);
			if (spawnedTile == nullptr) {
				GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "Could not spawn tile");
				continue;
			}
			spawnedTile->SetActorLocation(spawnLocation);

			spawnedTile->setMapPosition(FMapCoordinates(colIndex, rowIndex));
			//GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Green, "Map Position: " + spawnedTile->getMapPosition().ToString());
		
			map->tiles[rowIndex][colIndex] = spawnedTile;
		}

	}
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Silver, "map generation time:" + FString::FromInt(t.tock(TEXT("RIGA"))) + " ms!");




}

