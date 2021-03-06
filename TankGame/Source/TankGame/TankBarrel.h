// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKGAME_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	// -1 is max downward movement, and +1 is max up movement
	void Elevate(float RelativeSpeed);
	

private:
	UPROPERTY(EditAnywhere, Category = "Setup")
		float MaxDegreesPerSecond = 10; //Max number of degrees the barrel can move.

	UPROPERTY(EditAnywhere, Category = "Setup")
		float MaxElevationDegrees = 40; //Highest movement up the barrel can go in degrees

	UPROPERTY(EditAnywhere, Category = "Setup")
		float MinElevationDegrees = 0; //Lowest movement down the barrel can go in degrees.

};
