#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "CollidingPawn.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ACollidingPawn : public APawn {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UParticleSystemComponent* OurParticleSystem;
ACollidingPawn();
};
