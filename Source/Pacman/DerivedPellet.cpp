// Fill out your copyright notice in the Description page of Project Settings.

#include "DerivedPellet.h"


// Sets default values for this component's properties
UDerivedPellet::UDerivedPellet()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

    
}


// Called when the game starts
void UDerivedPellet::BeginPlay()
{
	Super::BeginPlay();

    Player = GetWorld()->GetFirstPlayerController()->GetPawn();
    if(!Player){
        UE_LOG(LogTemp, Error, TEXT("%s Couldn't find a player"), *GetOwner()->GetName());
        return;
    }
    if(!TriggerVolume ||!TriggerVolume2){
        UE_LOG(LogTemp, Error, TEXT("%s Couldn't find a triggervolume"), *GetOwner()->GetName());
        return;
    }
	
}


// Called every frame
void UDerivedPellet::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if(!Player)
        return;
    if(!TriggerVolume ||!TriggerVolume2)
        return;
    
    PelletLocation = GetOwner()->GetTransform().GetLocation();
    FVector PlayerLocation = Player->GetTransform().GetLocation();
    if(TriggerVolume->IsOverlappingActor(Player)){
        GetOwner()->SetActorLocation(FVector(PelletLocation.X, PelletLocation.Y, PelletLocation.Z-200));
        TriggerVolume->SetActorLocation(FVector(PelletLocation.X, PelletLocation.Y, PelletLocation.Z-200));
        TriggerVolume2->SetActorLocation(FVector(PelletLocation.X, PelletLocation.Y, PelletLocation.Z-200));
    }
}

