// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "ZombieMago.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieMago : public AZombie
{
	GENERATED_BODY()
public:
	AZombieMago();

	// Función para que el zombie mago desaparezca y aparezca en otro lugar
	void DisappearAndAppear();

private:
	// Timer para controlar la desaparición y aparición
	FTimerHandle TimerHandleDisappear;
};