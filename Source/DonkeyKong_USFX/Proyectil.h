// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Proyectil.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AProyectil : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProyectil();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USphereComponent* ProjectileColision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio")
	class UAudioComponent* ProjectileAudioComponent;


	void Initialize(const FVector& Direction);
	void locationProyectil(FVector locacion, FRotator rotacion, FVector direccion);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float vidaUtil;
};
