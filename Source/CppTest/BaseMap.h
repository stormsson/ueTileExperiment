// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMapGenerator.h"
#include "BaseMap.generated.h"

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
	ABaseMapGenerator* mapGenerator = nullptr;

	UPROPERTY(EditAnywhere, Category = "Map|Setup")
	int mapWidth = 8;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
