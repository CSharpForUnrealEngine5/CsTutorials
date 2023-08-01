#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UMGForCsPlayerController.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AUMGForCsPlayerController : public APlayerController {
GENERATED_BODY()
public:
UFUNCTION(BlueprintCallable)
virtual void BeginPlay();
};
