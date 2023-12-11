// Fill out your copyright notice in the Description page of Project Settings.


#include "Cards/Actors/A_Card.h"

// Sets default values
AA_Card::AA_Card()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AA_Card::BeginPlay()
{
	Super::BeginPlay();
	
}

ECardType AA_Card::GetCardType()
{
	return CardType;
}

bool AA_Card::ActivateAgaints(AA_Card OtherCard)
{
	return WinningTypes[(int8)OtherCard.GetCardType()];
}

