// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "MovingActor.generated.h"

/**
 * 
 */
UCLASS()
class UE4LAB1_API AMovingActor : public ABaseActor
{
	GENERATED_BODY()
	
public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditInstanceOnly, Category = "Movement Point")
	AActor* FirstPoint;

	UPROPERTY(EditInstanceOnly, Category = "Movement Point")
	AActor* SecondPoint;


protected:
	virtual void BeginPlay() override;

private:
	AActor* CurrentPoint;

	void MoveToNextPoint();

};
