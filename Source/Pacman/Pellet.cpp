// Fill out your copyright notice in the Description page of Project Settings.

#include "Pellet.h"


// Sets default values
APellet::APellet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APellet::BeginPlay()
{
	Super::BeginPlay();
    Player = GetWorld()->GetFirstPlayerController()->GetPawn();
    if(!Player){
        UE_LOG(LogTemp, Warning, TEXT("Cannot Find The Player In Pellet"))
        return;
    }
    if(!TriggerVolume){
        UE_LOG(LogTemp, Error, TEXT("Missing TriggerVolume on %s"), *GetOwner()->GetName());
        return;
    }
	
}

// Called every frame
void APellet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    if(!Player)
        return;
    
    if(!TriggerVolume)
        return;
    
    if(TriggerVolume->IsOverlappingActor(Player)){
        FVector Location = GetOwner()->GetTransform().GetLocation();
        GetOwner()->SetActorLocation(FVector(Location.X, Location.Y, Location.Z-200));
        TriggerVolume->SetActorLocation(FVector(Location.X, Location.Y, Location.Z-200));
    }
}

