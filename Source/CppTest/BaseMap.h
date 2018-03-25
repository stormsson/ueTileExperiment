// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMapGenerator.h"
#include "BaseMap.generated.h"

USTRUCT(BlueprintType)
struct FMapRow {
	GENERATED_USTRUCT_BODY()

	TArray<ABaseTile*> row;

	ABaseTile*& operator[](int32 idx) { return row[idx]; }
	bool IsValidIndex(int32 idx) { return row.IsValidIndex(idx); }
	
};

UCLASS()
class CPPTEST_API ABaseMap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseMap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	UBlueprint* mapGeneratorReference = nullptr;

	UPROPERTY(BlueprintReadOnly)
	ABaseMapGenerator* mapGenerator = nullptr;
	
	UPROPERTY(EditAnywhere, Category = "Setup")
	int mapWidth = 8;

	/*pippo pluto paperino*/
	UPROPERTY(EditAnywhere, Category = "Setup")
	int mapHeight = 8;

	UFUNCTION(BlueprintCallable, Category="Setup")
	void instantiateMapGenerator();	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	ABaseTile* getTileAtCoords(int32 x, int32 y);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Tiles")
	TArray<FMapRow> tiles;

	
	
};
