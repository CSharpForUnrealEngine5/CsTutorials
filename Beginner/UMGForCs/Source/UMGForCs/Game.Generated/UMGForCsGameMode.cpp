#include "UMGForCsGameMode.h"
void AUMGForCsGameMode::BeginPlay()
{
Super::BeginPlay();
ChangeMenuWidget(StartingWidgetClass);
}
void AUMGForCsGameMode::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
if (CurrentWidget!=nullptr)
{
CurrentWidget->RemoveFromViewport();
CurrentWidget=nullptr;
}
if (NewWidgetClass!=nullptr)
{
CurrentWidget=CreateWidget<UUserWidget>(GetWorld(),NewWidgetClass,TEXT(""));
if (CurrentWidget!=nullptr)
{
CurrentWidget->AddToViewport(0);
}
}
}
