// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack;
/**
 * Responsible for driving the tank tracks
 */
UCLASS( ClassGroup = (Custom), meta = (BluePrintSpawnableComponent) )
class TANKGAME_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initalize(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet);

		//UPROPERTY(BlueprintCallable, Category = Input)
	UFUNCTION(BlueprintCallable, Category = Setup)
		void IntendedMoveForward(float Throw);
	
private:
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;

};
