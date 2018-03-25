// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseMapGenerator.h"
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

	UPROPERTY(EditAnywhere, Category = "Tiles")
	TArray<UStaticMesh*> AllowedMeshes;

	UFUNCTION(BlueprintCallable, Category = "Map|Construction")
	virtual int32 generateAllowedTilesReferences() override;

	virtual void generateMap() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
