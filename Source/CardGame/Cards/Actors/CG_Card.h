#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CG_Card.generated.h"

UENUM()
enum class ECardType: uint8
{
	BLANK,
	ROCK,
	PAPER,
	SCISSORS,
	MAX			
};


UCLASS()
class CARDGAME_API ACG_Card : public AActor
{
	GENERATED_BODY()	

public:	
	// Sets default values for this actor's properties
	ACG_Card();

	UFUNCTION()
	ECardType GetCardType();
	

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CardType")
	TEnumAsByte<ECardType> CardType;
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ActivationTypes")
	TArray<bool> ActivationTypes[(uint8)ECardType::MAX];*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WinningTypes")
	TArray<bool> WinningTypes = {true,false,false,false};

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool ActivateAgaints(ACG_Card OtherCard);


	

};
