// Fill out your copyright notice in the Description page of Project Settings.


#include "hello.h"

// Sets default values
Ahello::Ahello()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 초기화
	start = FVector2D(0, 0);
	evCnt = 0;
	toDist = 0;
}

int32_t Ahello::step()
{
	int32_t randomNum = FMath::RandRange(0, 1);
	return randomNum;
}

float Ahello::distance(FVector2D first, FVector2D second)
{
	float dx = first.X - second.X;
	float dy = first.Y - second.Y;
	float distance_result = FMath::Sqrt(dx * dx + dy * dy);
	return distance_result;
}

void Ahello::move()
{
	// 움직이기
	start.X += step();
	start.Y += step();

	// 이벤트 발생
}

int32 Ahello::createEvent()
{
	int32 randomValue = FMath::RandRange(1, 100);
	return randomValue;
}

// Called when the game starts or when spawned
void Ahello::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player Start Position : (%d, %d)"), (int)start.X, (int)start.Y);
	FVector2D pre_pos;
	float now_distance = 0;

	for (int i = 0; i < 10; i++)
	{
		pre_pos = start;
		move();
		now_distance = distance(pre_pos, start);
		toDist += now_distance;
		UE_LOG(LogTemp, Warning, TEXT("Player Position : (%d, %d), Distance : %f"), (int)start.X, (int)start.Y, now_distance);
		if (createEvent() <= 50)
		{
			UE_LOG(LogTemp, Warning, TEXT("Event Trigger!!!!"));
			evCnt++;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Event Not Trigger."));
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Total Distance : %d, Total EventCount : %d"), toDist, evCnt);
}

// Called every frame
void Ahello::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}