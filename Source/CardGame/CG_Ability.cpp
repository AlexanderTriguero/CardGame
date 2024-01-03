// Fill out your copyright notice in the Description page of Project Settings.


#include "CG_Ability.h"

// Sets default values
ACG_Ability::ACG_Ability()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACG_Ability::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACG_Ability::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACG_Ability::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

