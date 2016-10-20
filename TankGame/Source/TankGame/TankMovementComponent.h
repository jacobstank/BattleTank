// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
		//UPROPERTY(BlueprintCallable, Category = Input)
	UFUNCTION(BlueprintCallable, Category = Setup)
		void IntendedMoveForward(float Throw);
	
};