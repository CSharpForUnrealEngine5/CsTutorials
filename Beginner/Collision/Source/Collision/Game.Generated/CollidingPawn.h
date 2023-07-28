#pragma once
#include "CoreMinimal.h"
#include "CollidingPawnMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Particles/ParticleSystem.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "CollidingPawn.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ACollidingPawn : public APawn {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UParticleSystemComponent* OurParticleSystem;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UCollidingPawnMovementComponent* OurMovementComponent;
ACollidingPawn();
UFUNCTION(BlueprintCallable)
virtual void SetupPlayerInputComponent(UInputComponent* InInputComponent);
UFUNCTION(BlueprintCallable)
virtual UPawnMovementComponent* GetPawnMovementComponent();
UFUNCTION(BlueprintCallable)
virtual void MoveForward(float AxisValue);
UFUNCTION(BlueprintCallable)
virtual void MoveRight(float AxisValue);
UFUNCTION(BlueprintCallable)
virtual void Turn(float AxisValue);
UFUNCTION(BlueprintCallable)
virtual void ParticleToggle();
};
