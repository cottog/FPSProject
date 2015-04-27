// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

public:

		AFPSHUD(const FObjectInitializer& ObjectInitializer);
		
		/** Primary draw call for the hud, which we modify to add crosshairs */
		virtual void DrawHUD() override;
	

private:
	/** Crosshair asset */
	UTexture2D* CrosshairTex;
	
};
