// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "Gameframework/Actor.h"
#include "FollowPlayer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMove);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API UFollowPlayer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFollowPlayer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
    
private:
    //1-10
    UPROPERTY(EditAnywhere)
    AActor* Wall = nullptr;
    /*UPROPERTY(EditAnywhere)
    AActor* Wall2 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall3= nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall4 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall5 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall6= nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall7 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall8 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall9 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall10 = nullptr;
    
    //11-20
    UPROPERTY(EditAnywhere)
    AActor* Wall11 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall12 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall13= nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall14 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall15 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall16= nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall17 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall18 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall19 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall20 = nullptr;
    
    //21-27
    UPROPERTY(EditAnywhere)
    AActor* Wall21 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall22 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall23= nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall24 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall25 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall26= nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Wall27 = nullptr;*/

    
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume = nullptr;
    
    //actor declarations
    AActor* Player = nullptr;
    AActor* Ghost = nullptr;
    
    //Transforms
    FTransform PlayerTransform;
    FVector PlayerLocation;
    FRotator PlayerRotation;
    FVector GhostLocation;
    FRotator GhostRotation;
    
    //Function Declarations
    void ActorTransforms();
    void MoveGhost();
    void CheckForWalls();
};
