// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Gameframework/Actor.h"
#include "Engine/TriggerVolume.h"
#include "DerivedPellet.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API UDerivedPellet : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDerivedPellet();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    AActor* Player = nullptr;
    
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume = nullptr;
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume2 = nullptr;
    
    FVector PelletLocation;
	
    float time = 0.f;
    float time2 = 1.f;
};
