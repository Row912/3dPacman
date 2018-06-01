// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Ghost.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GhostPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PACMAN_API AGhostPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
    AGhost* GetControlledGhost() const;
	
	
	
};
