// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseTile.generated.h"

USTRUCT(BlueprintType)
struct FMapCoordinates {
	GENERATED_USTRUCT_BODY()

	FMapCoordinates(int32 newX=0, int32 newY=0) : X(newX), Y(newY) {};
	FString ToString() { return FString::Printf(TEXT("(%d,%d)"), X, Y); };
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	int32 X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	int32 Y;

};

/*
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EConnectionEnum : uint8
{
	CE_NORTH 	UMETA(DisplayName = "Allow north connection"),
	CE_EAST 	UMETA(DisplayName = "Allow east connection"),
	CE_SOUTH 	UMETA(DisplayName = "Allow south connection"),
	CE_WEST 	UMETA(DisplayName = "Allow west connection")
};
*/

UCLASS(Blueprintable)
class CPPTEST_API ABaseTile : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	ABaseTile();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category="Map Properties")
	FMapCoordinates mapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile properties|Neighbors")
	bool bAllowNorthTiling = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile properties|Neighbors")
	bool bAllowEastTiling = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile properties|Neighbors")
	bool bAllowSouthTiling = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile properties|Neighbors")
	bool bAllowWestTiling = true;


	UFUNCTION(BlueprintPure)
	FORCEINLINE bool allowNorthTiling() const { return bAllowNorthTiling; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool allowEastTiling() const { return bAllowEastTiling; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool allowSouthTiling() const { return bAllowSouthTiling; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool allowWestTiling() const { return bAllowWestTiling; }

	//UFUNCTION(BlueprintCallable)
	//void setMapPosition(int32 X, int32 Y);

	
	UFUNCTION(BlueprintCallable)
	void setMapPosition(const FMapCoordinates& newMapPosition);


	UFUNCTION(BlueprintPure)
	FORCEINLINE FMapCoordinates getMapPosition() const { return mapPosition; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tile properties")
	FName Tile_ID = FName(NAME_None);


};
