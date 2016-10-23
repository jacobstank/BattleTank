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
	UFUNCTION(BlueprintCallable, Category = "Setup")
		void IntendedMoveForward(float Throw);

	UFUNCTION(BlueprintCallable, Category = "Setup")
		void IntendedMoveBackwards(float Throw);

	UFUNCTION(BlueprintCallable, Category = "Setup")
		void IntendedTurnRight(float Throw);

	/*UFUNCTION(BlueprintCallable, Category = "Setup")
		void IntendedTurnLeft(float Throw); */

private:
	//TODO check best protection
	//called from the pathfinding logic by the AI Controllers
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;

	
private:
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;

};
