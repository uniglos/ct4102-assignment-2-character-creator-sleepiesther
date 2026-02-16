// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Root");
	UStaticMesh* sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>((TEXT("'StaticMesh'/Engine/BasicShapes/Sphere.Sphere"))).Object;
	mesh->SetStaticMesh(sphereMesh);
	this->SetRootComponent(mesh);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	HelloWorld(":3");
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AMyActor::HelloWorld(FString input)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5, FColor::Purple, input);
	return 0;
}

