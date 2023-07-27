#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "CameraDirector.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ACameraDirector : public AActor {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
AActor* CameraOne;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
AActor* CameraTwo;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
float TimeToNextCameraChange;
ACameraDirector();
UFUNCTION(BlueprintCallable)
virtual void Tick(float DeltaTime);
};
