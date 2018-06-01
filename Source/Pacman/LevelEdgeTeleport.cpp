// Fill out your copyright notice in the Description page of Project Settings.

#include "LevelEdgeTeleport.h"


// Sets default values for this component's properties
ULevelEdgeTeleport::ULevelEdgeTeleport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULevelEdgeTeleport::BeginPlay()
{
	Super::BeginPlay();

    if(!TriggerVolume1 || !TriggerVolume2){
        UE_LOG(LogTemp, Error, TEXT("Missing a TriggerVolume in teleport"))
        return;
    }
	
}


// Called every frame
void ULevelEdgeTeleport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if(!TriggerVolume1 || !TriggerVolume2){
        UE_LOG(LogTemp, Error, TEXT("ERROR"))
        return;
    }
    
    AActor* Player =GetWorld()->GetFirstPlayerController()->GetPawn();
    
    if(TriggerVolume1->IsOverlappingActor(Player) &&GetWorld()->GetTimeSeconds()-time>2.0f){
        Player->SetActorLocation(TriggerVolume2->GetTransform().GetLocation());
        time = GetWorld()->GetTimeSeconds();
    }
    
    else if(TriggerVolume2->IsOverlappingActor(Player)&&GetWorld()->GetTimeSeconds()-time>2.0f){
        Player->SetActorLocation(TriggerVolume1->GetTransform().GetLocation());
        time = GetWorld()->GetTimeSeconds();
    }
}

