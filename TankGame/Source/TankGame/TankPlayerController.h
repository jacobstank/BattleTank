// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the last include

/**
 * 
 */
class ATank;
class UTankAimingComponent;

UCLASS()
class TANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	UFUNCTION(BlueprintCallable, Category = "Setup")
		ATank* GetControlledTank() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
		void FoundAimingComponent(UTankAimingComponent* AimingCompRef);

private:

	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	//start the tank moving the so that a shot will hit where the corrhair intersects the world.
	void AimTowardsCrossHair();



	//return a OUT parameter, true if hit landed
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5;
	
	UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.3333;
	
	UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000.0;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
	
};
