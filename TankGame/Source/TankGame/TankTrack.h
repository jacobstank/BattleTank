// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * Tank track is used to set maximum driving force, and to apply forces to the tank.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKGAME_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	
public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float throttle);
	
	//This is max force per track in newtons
	UPROPERTY(EditAnywhere)
		float TrackMaxDrivingForce = 400000; //assume 40toone tank, and 1g accelleration

};
