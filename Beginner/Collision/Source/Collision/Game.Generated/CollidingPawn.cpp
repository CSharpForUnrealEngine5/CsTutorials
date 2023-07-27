#include "CollidingPawn.h"
ACollidingPawn::ACollidingPawn()
{
USphereComponent* SphereComponent=CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
RootComponent=SphereComponent;
SphereComponent->InitSphereRadius(40.0f);
SphereComponent->SetCollisionProfileName(TEXT("Pawn"),true);
UStaticMeshComponent* SphereVisual=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
SphereVisual->SetupAttachment(RootComponent);
ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset=ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
if (SphereVisualAsset.Succeeded())
{
SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
SphereVisual->SetRelativeLocation(FVector(0.0f,0.0f,-40.0f));
SphereVisual->SetWorldScale3D(FVector(0.8f));
}
}
