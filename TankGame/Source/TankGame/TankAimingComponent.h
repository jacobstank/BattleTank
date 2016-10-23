// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


//ENum for aiming state
UENUM()
enum class EFiringStatus : uint8
{
	Reloading,
	Aiming,
	Locked
};


//Forward Declaration
class UTankBarrel; 
class UTankTurret;
class AProjectile;


//holds barrels propertys and Elevate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKGAME_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	


	void AimAt(FVector HitLocation);

	//void SetBarrelReference(UTankBarrel* BarrelToSet);
	//void SetTurretReference(UTankTurret* TurretToSet);

	
	UFUNCTION(BlueprintCallable, Category = "Setup")
		void Initalize(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet);
	

	UFUNCTION(BlueprintCallable, Category = "Fire")
		void Fire();

	//TODO add SetTurretRefernce


protected:

	UPROPERTY(BlueprintReadOnly, Category = "State")
		EFiringStatus FiringState = EFiringStatus::Reloading;


private:

	// Sets default values for this component's properties
	UTankAimingComponent();

	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;

	void MoveBarrelTowards(FVector AimDirection);

	UPROPERTY(EditAnywhere, Category = "Firing")
		float LaunchSpeed = 4000; //TODO find sensable default


	UPROPERTY(EditAnywhere, Category = "Setup")
		TSubclassOf<AProjectile> ProjectileBlueprint;


	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float ReloadTimeInSeconds = 3;

	double LastFireTime = 0;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	virtual void BeginPlay() override;

	bool IsBarrelMoving();

	FVector AimDirection;
	
};
