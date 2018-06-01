// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostPlayerController.h"

AGhost* AGhostPlayerController::GetControlledGhost() const{
    return Cast<AGhost>(GetPawn());
}


