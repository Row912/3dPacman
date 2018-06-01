// Fill out your copyright notice in the Description page of Project Settings.

#include "FollowPlayer.h"
#include "Engine/TriggerVolume.h"
#include "Gameframework/Actor.h"

// Sets default values for this component's properties
UFollowPlayer::UFollowPlayer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFollowPlayer::BeginPlay()
{
	Super::BeginPlay();

    Player = GetWorld()->GetFirstPlayerController()->GetPawn();
    Ghost = GetOwner();
    
    if(!Player){
        UE_LOG(LogTemp, Error, TEXT("Follow Player Component on %s is missing Player"), *GetOwner()->GetName());
        return;
    }
    if(!TriggerVolume){
        UE_LOG(LogTemp, Error, TEXT("Follow Player Component on %s is missing TriggerVOlume"), *GetOwner()->GetName());
        return;
    }

	
}

void UFollowPlayer::ActorTransforms(){
    PlayerTransform = Player->GetTransform();
    PlayerLocation = PlayerTransform.GetLocation();
    PlayerRotation = PlayerTransform.GetRotation().Rotator();
    GhostLocation = Ghost->GetTransform().GetLocation();
    GhostRotation = Ghost->GetTransform().GetRotation().Rotator();
}

void UFollowPlayer::MoveGhost(){
        if(PlayerLocation.X>=GhostLocation.X+5){
            GhostLocation.X+=2.f;
            GhostRotation.Yaw=-90;
            Ghost->SetActorLocation(GhostLocation);
            
            Ghost->SetActorRotation(GhostRotation);
        }
        else if(PlayerLocation.X<GhostLocation.X-5){
            GhostLocation.X-=2.f;
            GhostRotation.Yaw=90;
            Ghost->SetActorLocation(GhostLocation);
            Ghost->SetActorRotation(GhostRotation);
        }
    
        if(PlayerLocation.Y>=GhostLocation.Y+5){
            GhostLocation.Y+=2.f;
            GhostRotation.Yaw=0;
            Ghost->SetActorLocation(GhostLocation);
            Ghost->SetActorRotation(GhostRotation);
        }
        else if(PlayerLocation.Y<GhostLocation.Y-5){
            GhostLocation.Y-=2.f;
            GhostRotation.Yaw=180;
            Ghost->SetActorLocation(GhostLocation);
            Ghost->SetActorRotation(GhostRotation);
        }
}
//TODO Get This Working
void UFollowPlayer::CheckForWalls(){
    FVector Temp = GhostLocation;
    FRotator RotTemp = GhostRotation;
    if(RotTemp.Yaw == 0&&PlayerLocation.X<Temp.X){
        RotTemp.Yaw=90;
        Ghost->SetActorLocation(FVector(Temp.X-2.f, Temp.Y, Temp.Z));
        Ghost->SetActorRotation(RotTemp);
    }
    else if(RotTemp.Yaw == 0&&PlayerLocation.X>Temp.X){
        RotTemp.Yaw = 270;
        Ghost->SetActorLocation(FVector(Temp.X+2.f, Temp.Y, Temp.Z));
        Ghost->SetActorRotation(RotTemp);
    }
}

//  every frame
void UFollowPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if(!Player)
        return;
    if(!TriggerVolume)
        return;
    
        ActorTransforms();
        if(TriggerVolume->IsOverlappingActor(Ghost)){
            UE_LOG(LogTemp, Warning, TEXT("Pineapples don't fall from the sky during easter"));
            FVector Temp = GhostLocation;
            FRotator RotTemp = GhostRotation;
        if(RotTemp.Yaw == 0&&PlayerLocation.X<Temp.X){
            RotTemp.Yaw=90;
            Ghost->SetActorLocation(FVector(Temp.X-2.f, Temp.Y, Temp.Z));
            Ghost->SetActorRotation(RotTemp);
        }
        else if(RotTemp.Yaw == 0&&PlayerLocation.X>Temp.X){
            RotTemp.Yaw = 270;
            Ghost->SetActorLocation(FVector(Temp.X+2.f, Temp.Y, Temp.Z));
            Ghost->SetActorRotation(RotTemp);
        }
            CheckForWalls();
        }
        else
            MoveGhost();
}

