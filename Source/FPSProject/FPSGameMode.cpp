// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProject.h"
#include "FPSGameMode.h"
#include "FPSHUD.h"


AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer){

	//set default pawn class to blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnObject(TEXT("Pawn'/Game/Blueprints/BP_FPSCharacter.BP_FPSCharacter_C'"));
	if (PlayerPawnObject.Class != NULL){
		DefaultPawnClass = PlayerPawnObject.Class;
	}
	HUDClass = AFPSHUD::StaticClass();
}

void AFPSGameMode::StartPlay(){

	Super::StartPlay();

	StartMatch();

	if (GEngine){
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
	}
}