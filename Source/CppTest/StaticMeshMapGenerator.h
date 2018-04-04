// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMapGenerator.h"
#include "TileData.h"
#include "TileFactoryComponent.h"
#include "StaticMeshMapGenerator.generated.h"


UCLASS()
class CPPTEST_API AStaticMeshMapGenerator : public ABaseMapGenerator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStaticMeshMapGenerator();
	AStaticMeshMapGenerator(int, int);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tiles")
	UTileData* TilesDatabaseReference = nullptr;


	UFUNCTION(BlueprintCallable, Category = "Map|Construction")
	void createTileFactoryComponent(FName Tile_ID, UStaticMesh* staticMesh);

	UFUNCTION(BlueprintCallable, Category = "Map|Construction")
	int32 generateFactories();

	UFUNCTION(BlueprintCallable, Category = "Map|Factory")
	UTileFactoryComponent* getTileFactoryByTileID(FName Tile_ID);

	TMap<FName, UTileFactoryComponent*> tileFactories;


	virtual void generateMap() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
	void OnHover(AActor* pippo);
	
};
