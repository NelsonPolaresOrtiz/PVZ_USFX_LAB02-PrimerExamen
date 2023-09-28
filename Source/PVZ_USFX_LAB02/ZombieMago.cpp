// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieMago.h"
#include "TimerManager.h"

AZombieMago::AZombieMago()
{
	// Configura un timer para que llame a la funci�n DisappearAndAppear cada 5 segundos 
	GetWorldTimerManager().SetTimer(TimerHandleDisappear, this, &AZombieMago::DisappearAndAppear, 5.0f, true, 0.0f);
}

void AZombieMago::DisappearAndAppear()
{
	// Calcula una nueva ubicaci�n aleatoria para el zombie mago en el mismo carril 
	FVector NewLocation = GetActorLocation();
	NewLocation.X += FMath::RandRange(100.0f, 200.0f); // Cambia la posici�n en el eje X para moverlo al carril adyacente

	// Establece la nueva ubicaci�n del zombie mago
	SetActorLocation(NewLocation);
}

