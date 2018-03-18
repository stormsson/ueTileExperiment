// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseTile.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

#include "BaseMapGenerator.generated.h"

UCLASS()
class CPPTEST_API ABaseMapGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseMapGenerator();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Map|Setup")
		int mapWidth = 8;

	UPROPERTY(EditAnywhere, Category = "Map|Setup")
		int mapHeight = 8;
	
	UFUNCTION(BlueprintCallable, Category = "Map|Construction")
	virtual int32 generateAllowedTilesReferences();

	UFUNCTION(BlueprintCallable, Category = "Map|Construction")
	void buildMap();

	UPROPERTY(EditAnywhere, Category = "Tiles")
	TArray<UBlueprint*> AllowedTiles;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tiles")
	int32 tileSize = 100;

	UPROPERTY(EditAnywhere, Category = "Tiles")
	float tilePadding = .05f;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	FORCEINLINE int getMapWidth() const { return mapWidth; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE int getMapHeight() const { return mapHeight; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE float getTilePadding() const { return tilePadding; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE int32 getTileSize() const { return tileSize; }

};
