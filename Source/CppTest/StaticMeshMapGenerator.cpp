// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshMapGenerator.h"
#include "BaseMap.h"
#include "TileFactoryComponent.h"

#include "UtilityTimer.h"

AStaticMeshMapGenerator::AStaticMeshMapGenerator() : AStaticMeshMapGenerator(8, 8) {}


AStaticMeshMapGenerator::AStaticMeshMapGenerator(int w, int h) 
{
	this->mapWidth = w;
	this->mapHeight = h;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;		

} 

// Called when the game starts or when spawned
void AStaticMeshMapGenerator::BeginPlay()
{
	Super::BeginPlay();


}


// Called every frame
void AStaticMeshMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStaticMeshMapGenerator::createTileFactoryComponent(FName Tile_ID, UStaticMesh* staticMesh)
{
	FString cristo = FString(TEXT("TileFactory_")) + Tile_ID.ToString();
	FName componentName = FName(*cristo);

	UTileFactoryComponent* factory = NewObject<UTileFactoryComponent>(this, componentName);

	factory->SetSimulatePhysics(false);
	factory->SetupAttachment(RootComponent);

	factory->SetStaticMesh(staticMesh);	
	factory->RegisterComponent();

	tileFactories.Add(Tile_ID, factory);
}

UTileFactoryComponent* AStaticMeshMapGenerator::getTileFactoryByTileID(FName Tile_ID)
{
	if (tileFactories.Contains(Tile_ID))
	{
		return tileFactories[Tile_ID];
	}

	return nullptr;
}


// just to remember:
// //static ConstructorHelpers::FObjectFinder<UStaticMesh> AsphaltMesh(TEXT("StaticMesh'/Game/MapGenerator/Tiles/AsphaltMesh.AsphaltMesh'"));

int32 AStaticMeshMapGenerator::generateFactories()
{
	
	// inserire qui il for che legge tutte le entry di tilesDatabaseReference, e da li prende le mesh*

	for (FTileType item : this->TilesDatabaseReference->tiles)
	{
		UStaticMesh* mesh = item.mesh;
		FString meshName = mesh->GetName();
		createTileFactoryComponent(FName(*meshName), mesh);
	}

	return tileFactories.Num();
}

void AStaticMeshMapGenerator::generateMap()
{
	
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Blue, "AStaticMeshMapGenerator::generateMap");

	if (TilesDatabaseReference == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("TilesDatabaseReference is missing in class %s !"), *this->GetFName().ToString());
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "TilesDatabaseReference is missing! ");
		return;
	}
	
	generateFactories();

	if (tileFactories.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "No tile factories found!");
		return;
	}

	if (map == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, "Could not find map reference!");
		return;
	}


	FVector baseLocation = this->GetActorLocation();
	FVector spawnOffset = FVector(.0f);

	UtilityTimer t;

	if (!tileFactories.Contains(FName(TEXT("AsphaltMesh"))) )
	{
		UE_LOG(LogTemp, Error, TEXT("Could not find AsphaltMesh factory!"));
		return;
	}
	
	UTileFactoryComponent* af = tileFactories[TEXT("AsphaltMesh")];

	t.tick(TEXT("FullMap"));

	
	for (int rowIndex = 0; rowIndex < mapHeight; rowIndex++)
	{
		spawnOffset.Y = (float)rowIndex * this->tileSize + this->tileSize * this->tilePadding * rowIndex;
		if (!map->tiles.IsValidIndex(rowIndex)) {
			//FMapRow newRow;
			//map->tiles.Add(newRow);
		}

		//map->tiles[rowIndex].row.AddUninitialized(mapWidth);
		for (int colIndex = 0; colIndex < mapWidth; colIndex++)
		{
			spawnOffset.X = (float)colIndex * this->tileSize + this->tileSize * this->tilePadding * colIndex;

			FTransform localTransform = GetTransform();
			localTransform.SetLocation(localTransform.GetLocation() + spawnOffset);

			FMapCoordinates coords =  FMapCoordinates(colIndex, rowIndex);

			int32 instanceIndex = af->AddInstance(localTransform);
			af->setMapCoordinates(instanceIndex, coords);
			
		}

	}
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Silver, "map generation time:" + FString::FromInt(t.tock(TEXT("FullMap"))) + " ms!");

}