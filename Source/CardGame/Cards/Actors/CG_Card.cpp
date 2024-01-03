// Fill out your copyright notice in the Description page of Project Settings.


#include "Cards/Actors/CG_Card.h"

// Sets default values
ACG_Card::ACG_Card()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACG_Card::BeginPlay()
{
	Super::BeginPlay();
	
}

ECardType ACG_Card::GetCardType()
{
	return CardType;
}

bool ACG_Card::ActivateAgaints(ACG_Card OtherCard)
{
	return WinningTypes[(int8)OtherCard.GetCardType()];
}

