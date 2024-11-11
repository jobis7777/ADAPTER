// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/AudioComponent.h"


// Sets default values
AProyectil::AProyectil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectilMesh"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetWorldScale3D(FVector(0.2f)); // Ajusta el tama?o seg?n sea necesario
	ProjectileMesh->SetMaterial(0, LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'")));
	RootComponent = ProjectileMesh;

	//Audio
	//ProjectileAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("ProjectileAudio"));
	//ProjectileAudioComponent->SetupAttachment(RootComponent);
	//static ConstructorHelpers::FObjectFinder<USoundBase> ProjectileSound(TEXT("SoundWave'/Game/Geometry/Meshes/Kyaa_-sound-effect.Kyaa_-sound-effect'"));
	//ProjectileAudioComponent->SetSound(ProjectileSound.Object);

	//Colicion
	ProjectileColision = CreateDefaultSubobject<USphereComponent>(TEXT("Projectil_Colision"));
	ProjectileColision->SetSphereRadius(50.0f);
	ProjectileColision->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	ProjectileColision->SetVisibility(true);
	ProjectileColision->SetupAttachment(GetRootComponent());

	//movimiento
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	if (ProjectileMovement) {
		ProjectileMovement->UpdatedComponent = ProjectileMesh;
		ProjectileMovement->InitialSpeed = 1000.f; // Velocidad inicial lenta
		ProjectileMovement->MaxSpeed = 1000.f; // Velocidad m?xima
		ProjectileMovement->bRotationFollowsVelocity = true;
		ProjectileMovement->bShouldBounce = true;
		ProjectileMovement->Bounciness = 0.3f;
		ProjectileMovement->ProjectileGravityScale = 0.0f; // Sin gravedad
	}

	vidaUtil = 0.f;
}

void AProyectil::Initialize(const FVector& Direction)
{
	if (ProjectileMovement)
	{
		ProjectileMovement->Velocity = Direction * ProjectileMovement->InitialSpeed;
	}
}

void AProyectil::locationProyectil(FVector locacion, FRotator _rotacion, FVector direccion)
{
	AProyectil* SpawnedProjectile1 = GetWorld()->SpawnActor<AProyectil>(AProyectil::StaticClass(), locacion, _rotacion);
	if (SpawnedProjectile1) {
		SpawnedProjectile1->Initialize(direccion);
	}
}


// Called when the game starts or when spawned
void AProyectil::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	vidaUtil += DeltaTime;
	if (vidaUtil >= 5.0f) Destroy();
}
