// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankTurret.h"




void UTankTurret::Rotate(float RelativeSpeed)
{
	//move the barrel the right amount this frame
	//auto Time = GetWorld()->GetTimeSeconds();
	//UE_LOG(LogTemp, Warning, TEXT("%f: Barrel Elevate() called as speed: %f"),Time, RelativeSpeed);
	//Given a max elevation speed, and the frame time
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));


}