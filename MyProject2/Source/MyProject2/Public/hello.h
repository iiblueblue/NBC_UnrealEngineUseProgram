// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "hello.generated.h"

UCLASS()
class MYPROJECT2_API Ahello : public AActor
{
	GENERATED_BODY()

private:
	FVector2D start;
	int32 evCnt;
	int toDist;
	
public:	
	// Sets default values for this actor's properties
	Ahello();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float distance(FVector2D first, FVector2D second);
	void move();
	int32_t step();
	int32 createEvent();
};
