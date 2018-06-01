// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerVolume.h"
#include "Pellet.generated.h"

UCLASS()
class PACMAN_API APellet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APellet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
private:
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume = nullptr;
    
    AActor* Player = nullptr;
	
};
