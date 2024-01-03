// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CG_BattleField.generated.h"

class ACG_PlayerWithLife;
class ACG_EnemyWithLife;

UCLASS()
class CARDGAME_API ACG_BattleField : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "CurrentPlayer")
	ACG_PlayerWithLife* CurrentPlayer;
	UPROPERTY(EditAnywhere, Category = "CurrenEnemy")
	ACG_EnemyWithLife* CurrentEnemy;

public:	

	ACG_BattleField();
	UFUNCTION()
	void SetPlayer(ACG_PlayerWithLife* NewPlayer);
	UFUNCTION()
	ACG_PlayerWithLife* GetPlayer();
	UFUNCTION()
	void SetEnemy(ACG_EnemyWithLife* NewEnemy);
	UFUNCTION()
	ACG_EnemyWithLife* GetEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
