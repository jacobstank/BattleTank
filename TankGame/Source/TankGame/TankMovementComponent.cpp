// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankTrack.h"
#include "TankMovementComponent.h"


void UTankMovementComponent::Initalize(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet)
{
	
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;

}

void UTankMovementComponent::IntendedMoveForward(float Throw)
{
	//auto Name = GetName();
	//UE_LOG(LogTemp, Warning, TEXT("Intend move forward throw: %f"), Throw);

	if (!LeftTrack || !RightTrack) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);

	//TODO change double throttle with keys.
}

void UTankMovementComponent::IntendedMoveBackwards(float Throw)
{
	//auto Name = GetName();
	//UE_LOG(LogTemp, Warning, TEXT("Intend move forward throw: %f"), Throw);

	if (!LeftTrack || !RightTrack) { return; }
	LeftTrack->SetThrottle(-Throw);
	RightTrack->SetThrottle(-Throw);

	//TODO change double throttle with keys.
}

void UTankMovementComponent::IntendedTurnRight(float Throw)
{
	//auto Name = GetName();
	//UE_LOG(LogTemp, Warning, TEXT("Intend move forward throw: %f"), Throw);

	if (!LeftTrack || !RightTrack) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(-Throw);

	//TODO change double throttle with keys.
}

void UTankMovementComponent::IntendedTurnLeft(float Throw)
{
	//auto Name = GetName();
	//UE_LOG(LogTemp, Warning, TEXT("Intend move forward throw: %f"), Throw);

	if (!LeftTrack || !RightTrack) { return; }
	LeftTrack->SetThrottle(-Throw);
	RightTrack->SetThrottle(Throw);

	//TODO change double throttle with keys.
}

void UTankMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	//no need to call super as we are replacing the function
	auto TankName = GetOwner()->GetName();
	auto MoveVelocityString = MoveVelocity.ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s vectoring to %s"), *TankName, *MoveVelocityString)

}