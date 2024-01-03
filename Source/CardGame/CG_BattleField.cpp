// Fill out your copyright notice in the Description page of Project Settings.


#include "CG_BattleField.h"
#include "LivingActors/Player/CG_PlayerWithLife.h"
#include "LivingActors/Enemy/CG_EnemyWIthLife.h"

// Sets default values
ACG_BattleField::ACG_BattleField()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}


void ACG_BattleField::SetPlayer(ACG_PlayerWithLife* NewPlayer)
{
	CurrentPlayer = NewPlayer;
}

ACG_PlayerWithLife* ACG_BattleField::GetPlayer()
{
	return CurrentPlayer;
}

void ACG_BattleField::SetEnemy(ACG_EnemyWithLife* NewEnemy)
{
	CurrentEnemy = NewEnemy;
}

ACG_EnemyWithLife* ACG_BattleField::GetEnemy()
{
	return CurrentEnemy;
}



// Called when the game starts or when spawned
void ACG_BattleField::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACG_BattleField::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

