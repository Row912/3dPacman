// Fill out your copyright notice in the Description page of Project Settings.

#include "IsTouchingPlayer.h"
#include "Engine/TriggerVolume.h"
#include "Gameframework/Actor.h"

// Sets default values for this component's properties
UIsTouchingPlayer::UIsTouchingPlayer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UIsTouchingPlayer::BeginPlay()
{
	Super::BeginPlay();

    Ghost = GetOwner();
    Player = GetWorld()->GetFirstPlayerController()->GetPawn();
    PlayerLocation = Player->GetTransform().GetLocation();
    
    if(!Ghost || !Player){
        UE_LOG(LogTemp, Error, TEXT("%s Missing classes"), *Ghost->GetName())
        return;
    }
    if(!TriggerVolume){
        UE_LOG(LogTemp, Error, TEXT("%s Missing Trigger Volume"), *Ghost->GetName())
        return;
    }
	
}


// Called every frame
void UIsTouchingPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if(!Ghost || !Player)
        return;
    if(!TriggerVolume)
        return;
    
    if(TriggerVolume->IsOverlappingActor(Player)){
        Player->SetActorLocation(PlayerLocation);
        time = GetWorld()->GetTimeSeconds();
        ShowDeath.Broadcast();
        bdeath = true;
    }
    
    if(GetWorld()->GetTimeSeconds()-time>10&&bdeath == true){
        bdeath =false;
        ShowAlive.Broadcast();
    }
}

