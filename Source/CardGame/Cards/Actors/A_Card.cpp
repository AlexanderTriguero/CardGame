// Fill out your copyright notice in the Description page of Project Settings.


#include "Cards/Actors/A_Card.h"

// Sets default values
AA_Card::AA_Card()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA_Card::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA_Card::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

