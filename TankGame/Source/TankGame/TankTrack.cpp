// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankTrack.h"




void UTankTrack::SetThrottle(float throttle)
{
	//auto Time = GetWorld()->GetTimeSeconds();
	

	//TODO Clamp actual throttle calue so players cant overdrive
	auto ForceApplied = GetForwardVector() * throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);


}
