// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Gameframework/Actor.h"
#include "Engine/TriggerVolume.h"
#include "EatPellet.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FScore1);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWinTrigger);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API UEatPellet : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEatPellet();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    void ChangeScore();
    void MovePellet1();
    void MovePellet2();
    void MovePellet3();
    void MovePellet4();
    void MovePellet5();
    void MovePellet6();
    void MovePellet7();
    void MovePellet8();
    void MovePellet9();
    void MovePellet10();
    void MovePellet11();
    void MovePellet12();
    void MovePellet13();
    void MovePellet14();
    void MovePellet15();
    void MovePellet16();
    void MovePellet17();
    void MovePellet18();
    void MovePellet19();
    void MovePellet20();
    
    UPROPERTY(BlueprintAssignable) FScore1 Score1;
    UPROPERTY(BlueprintAssignable) FScore1 Score2;
    UPROPERTY(BlueprintAssignable) FScore1 Score3;
    UPROPERTY(BluePrintAssignable) FScore1 Score4;
    UPROPERTY(BlueprintAssignable) FScore1 Score5;
    UPROPERTY(BlueprintAssignable) FScore1 Score6;
    UPROPERTY(BlueprintAssignable) FScore1 Score7;
    UPROPERTY(BluePrintAssignable) FScore1 Score8;
    UPROPERTY(BlueprintAssignable) FScore1 Score9;
    UPROPERTY(BlueprintAssignable) FScore1 Score10;
    UPROPERTY(BlueprintAssignable) FScore1 Score11;
    UPROPERTY(BlueprintAssignable) FScore1 Score12;
    UPROPERTY(BlueprintAssignable) FScore1 Score13;
    UPROPERTY(BluePrintAssignable) FScore1 Score14;
    UPROPERTY(BlueprintAssignable) FScore1 Score15;
    UPROPERTY(BlueprintAssignable) FScore1 Score16;
    UPROPERTY(BlueprintAssignable) FScore1 Score17;
    UPROPERTY(BluePrintAssignable) FScore1 Score18;
    UPROPERTY(BlueprintAssignable) FScore1 Score19;
    UPROPERTY(BlueprintAssignable) FScore1 Score20;
    
    UPROPERTY(BlueprintAssignable) FWinTrigger Win;
    
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume = nullptr;
    
    AActor* Object= nullptr;
    AActor* Player = nullptr;
    
    //Second Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume2 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet2 = nullptr;
    
    //Third Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume3 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet3 = nullptr;
    
    //Fourth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume4 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet4 = nullptr;
    
    //Fith Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume5 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet5 = nullptr;
    
    //Sixth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume6 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet6 = nullptr;
    
    //Seventh Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume7 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet7 = nullptr;
    
    //Eighth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume8 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet8 = nullptr;
    
    //Ninth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume9 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet9 = nullptr;
    
    //Tenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume10 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet10 = nullptr;
    
    //Eleventh Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume11 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet11 = nullptr;
    
    //Twelth Pellet----------------------------------
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume12 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet12 = nullptr;
    
    //Thirteenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume13 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet13 = nullptr;
    
    //Fourteenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume14 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet14 = nullptr;
    
    //Fithteenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume15 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet15 = nullptr;
    
    //Sixteenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume16 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet16 = nullptr;
    
    //SeventeenthPellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume17 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet17 = nullptr;
    
    //Eighteenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume18 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet18 = nullptr;
    
    //Ninteenth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume19 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet19 = nullptr;
    
    //Twentieth Pellet
    UPROPERTY(EditAnywhere)
    ATriggerVolume* TriggerVolume20 = nullptr;
    UPROPERTY(EditAnywhere)
    AActor* Pellet20 = nullptr;
    
    int32 PacScore = 0;
    
    //Pellet Locations
    FVector Location;
    FVector Location2;
    FVector Location3;
    FVector Location4;
    FVector Location5;
    FVector Location6;
    FVector Location7;
    FVector Location8;
    FVector Location9;
    FVector Location10;
    FVector Location11;
    FVector Location12;
    FVector Location13;
    FVector Location14;
    FVector Location15;
    FVector Location16;
    FVector Location17;
    FVector Location18;
    FVector Location19;
    FVector Location20;
    
};
