// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankTrack.h"
#include "TankMovementComponent.h"


void UTankMovementComponent::IntendedMoveForward(float Throw)
{
	//auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("Intend move forward throw: %f"), Throw);

	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);

	//TODO change double throttle with keys.
}


void UTankMovementComponent::Initalize(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet)
{
	if (!LeftTrackToSet || !RightTrackToSet) { return; }
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;

}