// Fill out your copyright notice in the Description page of Project Settings.


#include "LivingActors/CG_ActorWithLife.h"

// Sets default values
ACG_ActorWithLife::ACG_ActorWithLife()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACG_ActorWithLife::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACG_ActorWithLife::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

