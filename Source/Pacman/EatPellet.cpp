// Fill out your copyright notice in the Description page of Project Settings.

#include "EatPellet.h"


// Sets default values for this component's properties
UEatPellet::UEatPellet()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEatPellet::BeginPlay()
{
	Super::BeginPlay();

    
    Player = GetWorld()->GetFirstPlayerController()->GetPawn();
    Object = GetOwner();
    if(!Player){
        UE_LOG(LogTemp, Error, TEXT("%s Missing player Volume"), *GetOwner()->GetName());
        return;
    }
    if(!Object|| !Pellet2 ||!Pellet3||!Pellet4||!Pellet5||!Pellet6||!Pellet7||!Pellet8||!Pellet9||!Pellet10||!Pellet11|| !Pellet12 ||!Pellet13||!Pellet14||!Pellet15||!Pellet16||!Pellet17||!Pellet18||!Pellet19||!Pellet20){
        UE_LOG(LogTemp, Error, TEXT("%s Missing Objects"), *GetOwner()->GetName());
        return;
    }
    if(!TriggerVolume || !TriggerVolume2||!TriggerVolume3||!TriggerVolume4||!TriggerVolume5||!TriggerVolume6||!TriggerVolume7||!TriggerVolume8||!TriggerVolume9||!TriggerVolume10 || !TriggerVolume11 || !TriggerVolume12||!TriggerVolume13||!TriggerVolume14||!TriggerVolume15||!TriggerVolume16||!TriggerVolume17||!TriggerVolume18||!TriggerVolume19||!TriggerVolume20){
        UE_LOG(LogTemp, Error, TEXT("%s Missing Trigger Volumes"), *GetOwner()->GetName());
        return;
    }
}
//MovePellets-----------------------------------------------------------------------------------------------------------
void UEatPellet::MovePellet1(){
    Location = Object->GetTransform().GetLocation();
    Object->SetActorLocation(FVector(Location.X, Location.Y, Location.Z-200.0f));
    TriggerVolume->SetActorLocation(FVector(Location.X, Location.Y, Location.Z-200.0f));
}

void UEatPellet::MovePellet2(){
    Location2 = Pellet2->GetTransform().GetLocation();
    TriggerVolume2->SetActorLocation(FVector(Location2.X, Location2.Y, Location2.Z-200.0f));
    Pellet2->SetActorLocation(FVector(Location2.X, Location2.Y, Location2.Z-200.0f));
}

void UEatPellet::MovePellet3(){
    Location3 = Pellet3->GetTransform().GetLocation();
    TriggerVolume3->SetActorLocation(FVector(Location3.X, Location3.Y, Location3.Z-200.0f));
    Pellet3->SetActorLocation(FVector(Location3.X, Location3.Y, Location3.Z-200.0f));
}

void UEatPellet::MovePellet4(){
    Location4 = Pellet4->GetTransform().GetLocation();
    TriggerVolume4->SetActorLocation(FVector(Location4.X, Location4.Y, Location4.Z-200.0f));
    Pellet4->SetActorLocation(FVector(Location4.X, Location4.Y, Location4.Z-200.0f));
}

void UEatPellet::MovePellet5(){
    Location5 = Pellet5->GetTransform().GetLocation();
    TriggerVolume5->SetActorLocation(FVector(Location5.X, Location5.Y, Location5.Z-200.0f));
    Pellet5->SetActorLocation(FVector(Location5.X, Location5.Y, Location5.Z-200.0f));
}

void UEatPellet::MovePellet6(){
    Location6 = Pellet6->GetTransform().GetLocation();
    TriggerVolume6->SetActorLocation(FVector(Location6.X, Location6.Y, Location6.Z-200.0f));
    Pellet6->SetActorLocation(FVector(Location6.X, Location6.Y, Location6.Z-200.0f));
}

void UEatPellet::MovePellet7(){
    Location7 = Pellet7->GetTransform().GetLocation();
    TriggerVolume7->SetActorLocation(FVector(Location7.X, Location7.Y, Location7.Z-200.0f));
    Pellet7->SetActorLocation(FVector(Location7.X, Location7.Y, Location7.Z-200.0f));
}

void UEatPellet::MovePellet8(){
    Location8 = Pellet8->GetTransform().GetLocation();
    TriggerVolume8->SetActorLocation(FVector(Location8.X, Location8.Y, Location8.Z-200.0f));
    Pellet8->SetActorLocation(FVector(Location8.X, Location8.Y, Location8.Z-200.0f));
}

void UEatPellet::MovePellet9(){
    Location9 = Pellet9->GetTransform().GetLocation();
    TriggerVolume9->SetActorLocation(FVector(Location9.X, Location9.Y, Location9.Z-200.0f));
    Pellet9->SetActorLocation(FVector(Location9.X, Location9.Y, Location9.Z-200.0f));
}

void UEatPellet::MovePellet10(){
    Location10 = Pellet10->GetTransform().GetLocation();
    TriggerVolume10->SetActorLocation(FVector(Location10.X, Location10.Y, Location10.Z-200.0f));
    Pellet10->SetActorLocation(FVector(Location10.X, Location10.Y, Location10.Z-200.0f));
}
//-------------
void UEatPellet::MovePellet11(){
    Location11 = Pellet11->GetTransform().GetLocation();
    Pellet11->SetActorLocation(FVector(Location11.X, Location11.Y, Location11.Z-200.0f));
    TriggerVolume11->SetActorLocation(FVector(Location11.X, Location11.Y, Location11.Z-200.0f));
}

void UEatPellet::MovePellet12(){
    Location12 = Pellet12->GetTransform().GetLocation();
    TriggerVolume12->SetActorLocation(FVector(Location12.X, Location2.Y, Location12.Z-200.0f));
    Pellet12->SetActorLocation(FVector(Location12.X, Location12.Y, Location12.Z-200.0f));
}

void UEatPellet::MovePellet13(){
    Location13 = Pellet13->GetTransform().GetLocation();
    TriggerVolume13->SetActorLocation(FVector(Location13.X, Location13.Y, Location13.Z-200.0f));
    Pellet13->SetActorLocation(FVector(Location13.X, Location13.Y, Location13.Z-200.0f));
}

void UEatPellet::MovePellet14(){
    Location14 = Pellet14->GetTransform().GetLocation();
    TriggerVolume14->SetActorLocation(FVector(Location14.X, Location14.Y, Location14.Z-200.0f));
    Pellet14->SetActorLocation(FVector(Location14.X, Location14.Y, Location14.Z-200.0f));
}

void UEatPellet::MovePellet15(){
    Location15 = Pellet15->GetTransform().GetLocation();
    TriggerVolume15->SetActorLocation(FVector(Location15.X, Location15.Y, Location15.Z-200.0f));
    Pellet15->SetActorLocation(FVector(Location15.X, Location15.Y, Location15.Z-200.0f));
}

void UEatPellet::MovePellet16(){
    Location16 = Pellet16->GetTransform().GetLocation();
    TriggerVolume16->SetActorLocation(FVector(Location16.X, Location16.Y, Location16.Z-200.0f));
    Pellet16->SetActorLocation(FVector(Location16.X, Location16.Y, Location16.Z-200.0f));
}

void UEatPellet::MovePellet17(){
    Location17 = Pellet17->GetTransform().GetLocation();
    TriggerVolume17->SetActorLocation(FVector(Location17.X, Location17.Y, Location17.Z-200.0f));
    Pellet17->SetActorLocation(FVector(Location17.X, Location17.Y, Location17.Z-200.0f));
}

void UEatPellet::MovePellet18(){
    Location18 = Pellet18->GetTransform().GetLocation();
    TriggerVolume18->SetActorLocation(FVector(Location18.X, Location18.Y, Location18.Z-200.0f));
    Pellet18->SetActorLocation(FVector(Location18.X, Location18.Y, Location18.Z-200.0f));
}

void UEatPellet::MovePellet19(){
    Location19 = Pellet19->GetTransform().GetLocation();
    TriggerVolume19->SetActorLocation(FVector(Location19.X, Location19.Y, Location19.Z-200.0f));
    Pellet19->SetActorLocation(FVector(Location19.X, Location19.Y, Location19.Z-200.0f));
}

void UEatPellet::MovePellet20(){
    Location20 = Pellet20->GetTransform().GetLocation();
    TriggerVolume20->SetActorLocation(FVector(Location20.X, Location20.Y, Location20.Z-200.0f));
    Pellet20->SetActorLocation(FVector(Location20.X, Location20.Y, Location20.Z-200.0f));
}
//End Move Pellets------------------------------------------------------------------------------------------------

void UEatPellet::ChangeScore(){
    PacScore++;

    switch(PacScore){
    case 1:
        Score1.Broadcast();
        break;
    
    case 2:
        Score2.Broadcast();
        break;
            
    case 3:
        Score3.Broadcast();
        break;
            
    case 4:
        Score4.Broadcast();
        break;
    
    case 5:
        Score5.Broadcast();
        break;
        
    case 6:
        Score6.Broadcast();
        break;
        
    case 7:
        Score7.Broadcast();
        break;
        
    case 8:
        Score8.Broadcast();
        break;
        
    case 9:
        Score9.Broadcast();
        break;
        
    case 10:
        Score10.Broadcast();
        break;
        
    case 11:
        Score11.Broadcast();
        break;
        
    case 12:
        Score12.Broadcast();
        break;
        
    case 13:
        Score13.Broadcast();
        break;
        
    case 14:
        Score14.Broadcast();
        break;
        
    case 15:
            Score15.Broadcast();
        break;
        
    case 16:
        Score16.Broadcast();
        break;
        
    case 17:
        Score17.Broadcast();
        break;
        
    case 18:
        Score18.Broadcast();
        break;
        
    case 19:
        Score19.Broadcast();
        break;
    
    case 20:
        Score10.Broadcast();
        Win.Broadcast();
    }
}

// Called every frame
void UEatPellet::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if(!Player)
        return;
    if(!Object|| !Pellet2 ||!Pellet3||!Pellet4||!Pellet5||!Pellet6||!Pellet7||!Pellet8||!Pellet9||!Pellet10||!Pellet11|| !Pellet12 ||!Pellet13||!Pellet14||!Pellet15||!Pellet16||!Pellet17||!Pellet18||!Pellet19||!Pellet20)
        return;
    if(!TriggerVolume || !TriggerVolume2||!TriggerVolume3||!TriggerVolume4||!TriggerVolume5||!TriggerVolume6||!TriggerVolume7||!TriggerVolume8||!TriggerVolume9||!TriggerVolume10 || !TriggerVolume11 || !TriggerVolume12||!TriggerVolume13||!TriggerVolume14||!TriggerVolume15||!TriggerVolume16||!TriggerVolume17||!TriggerVolume18||!TriggerVolume19||!TriggerVolume20)
        return;
    if(TriggerVolume->IsOverlappingActor(Player)){
        MovePellet1();
        ChangeScore();
    }
    
    else if(TriggerVolume2->IsOverlappingActor(Player)){
        MovePellet2();
        ChangeScore();
    }
    
    else if(TriggerVolume3->IsOverlappingActor(Player)){
        MovePellet3();
        ChangeScore();
    }
    else if(TriggerVolume4->IsOverlappingActor(Player)){
        MovePellet4();
        ChangeScore();
    }
    else if(TriggerVolume5->IsOverlappingActor(Player)){
        MovePellet5();
        ChangeScore();
    }
    
    else if(TriggerVolume6->IsOverlappingActor(Player)){
        MovePellet6();
        ChangeScore();
    }
    else if(TriggerVolume7->IsOverlappingActor(Player)){
        MovePellet7();
        ChangeScore();
    }
    else if(TriggerVolume8->IsOverlappingActor(Player)){
        MovePellet8();
        ChangeScore();
    }
    
    else if(TriggerVolume9->IsOverlappingActor(Player)){
        MovePellet9();
        ChangeScore();
    }
    else if(TriggerVolume10->IsOverlappingActor(Player)){
        MovePellet10();
        ChangeScore();
    }
    if(TriggerVolume11->IsOverlappingActor(Player)){
        MovePellet11();
        ChangeScore();
    }
    
    else if(TriggerVolume12->IsOverlappingActor(Player)){
        MovePellet12();
        ChangeScore();
    }
    
    else if(TriggerVolume13->IsOverlappingActor(Player)){
        MovePellet13();
        ChangeScore();
    }
    else if(TriggerVolume14->IsOverlappingActor(Player)){
        MovePellet14();
        ChangeScore();
    }
    else if(TriggerVolume15->IsOverlappingActor(Player)){
        MovePellet15();
        ChangeScore();
    }
    
    else if(TriggerVolume16->IsOverlappingActor(Player)){
        MovePellet16();
        ChangeScore();
    }
    else if(TriggerVolume17->IsOverlappingActor(Player)){
        MovePellet17();
        ChangeScore();
    }
    else if(TriggerVolume18->IsOverlappingActor(Player)){
        MovePellet18();
        ChangeScore();
    }
    
    else if(TriggerVolume19->IsOverlappingActor(Player)){
        MovePellet19();
        ChangeScore();
    }
    else if(TriggerVolume20->IsOverlappingActor(Player)){
        MovePellet20();
        ChangeScore();
    }
}

