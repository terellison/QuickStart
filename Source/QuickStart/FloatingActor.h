// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class QUICKSTART_API AFloatingActor : public AActor
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;

	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = "FloatingActor")
		float FloatSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		float RoationSpeed = 20.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		FVector Location = FVector(0.0f, 0.0f, 0.0f);

};
