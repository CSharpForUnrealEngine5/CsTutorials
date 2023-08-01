namespace Game;
using GameFramework;
internal class AUMGForCsPlayerController : APlayerController
{
    protected override void BeginPlay()
    {
        base.BeginPlay();

        SetInputMode(new FInputModeGameAndUI());
    }
}
