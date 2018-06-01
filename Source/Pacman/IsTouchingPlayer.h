// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "Gameframework/Actor.h"
#include "IsTouchingPlayer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowAlive);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API UIsTouchingPlayer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UIsTouchingPlayer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    UPROPERTY(BlueprintAssignable)
    FShowDeath ShowDeath;
    
    UPROPERTY(BlueprintAssignable)
    FShowAlive ShowAlive;

private:
    AActor* Player = nullptr;
    FVector PlayerLocation;
    AActor* Ghost = nullptr;
    
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume = nullptr;
	
    bool bdeath = false;
    float time = 0.f;
};
