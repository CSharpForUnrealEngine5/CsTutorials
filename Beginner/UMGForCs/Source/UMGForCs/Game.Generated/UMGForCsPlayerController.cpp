#include "UMGForCsPlayerController.h"
void AUMGForCsPlayerController::BeginPlay()
{
Super::BeginPlay();
SetInputMode(FInputModeGameAndUI());
}
