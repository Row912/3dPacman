// Fill out your copyright notice in the Description page of Project Settings.

#include "DeathFix.h"


// Sets default values for this component's properties
UDeathFix::UDeathFix()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDeathFix::BeginPlay()
{
	Super::BeginPlay();

    Player = GetOwner();
    if(!Player){
        UE_LOG(LogTemp, Error, TEXT("Death Fix Couldn't Get the player"));
        return;
    }
        
	
}


// Called every frame
void UDeathFix::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(!Player)
        return;
    PlayerLocation = Player->GetTransform().GetLocation();
    if(PlayerLocation.Z<0.0f)
        Player->SetActorLocation(FVector(PlayerLocation.X, PlayerLocation.Y, PlayerLocation.Z+=115.0f));
}

