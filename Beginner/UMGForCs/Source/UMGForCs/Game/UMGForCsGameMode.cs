namespace Game;

using GameFramework;
using System.Diagnostics.CodeAnalysis;

public class AUMGForCsGameMode : AGameModeBase
{
    TSubclassOf<UUserWidget> StartingWidgetClass;

    [AllowNull]
    UUserWidget CurrentWidget;

    protected override void BeginPlay()
    {
        base.BeginPlay();
        ChangeMenuWidget(StartingWidgetClass);
    }

    void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
    {
        if (CurrentWidget != null)
        {
            CurrentWidget.RemoveFromViewport();
            CurrentWidget = null;
        }
        if (NewWidgetClass != null)
        {
            CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass,"");
            if (CurrentWidget != null)
            {
                CurrentWidget.AddToViewport(0);
            }
        }
    }

}