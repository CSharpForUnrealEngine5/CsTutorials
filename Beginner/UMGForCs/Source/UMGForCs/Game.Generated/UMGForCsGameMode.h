#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "UMGForCsGameMode.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AUMGForCsGameMode : public AGameModeBase {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
TSubclassOf<UUserWidget> StartingWidgetClass;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UUserWidget* CurrentWidget;
UFUNCTION(BlueprintCallable)
virtual void BeginPlay();
UFUNCTION(BlueprintCallable)
virtual void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
};
