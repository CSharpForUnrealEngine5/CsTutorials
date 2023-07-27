// https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/ProgrammingWithCPP/CPPTutorials/AutoCamera/
namespace Game;

using GameFramework;
public class ACameraDirector : AActor
{
    AActor CameraOne;
    AActor CameraTwo;
    float TimeToNextCameraChange;

    ACameraDirector()
    {
        PrimaryActorTick.bCanEverTick = true;
        PrimaryActorTick.bStartWithTickEnabled = true;
        PrimaryActorTick.SetTickFunctionEnable(true);
    }

    public override void Tick(float DeltaTime)
    {
        base.Tick(DeltaTime);
        const float TimeBetweenCameraChanges = 2.0f;
        const float SmoothBlendTime = 0.75f;
        TimeToNextCameraChange -= DeltaTime;
        if (TimeToNextCameraChange <= 0.0f)
        {
            TimeToNextCameraChange += TimeBetweenCameraChanges;

            //Find the actor that handles control for the local player.
            APlayerController OurPlayerController = UGameplayStatics.GetPlayerController(this, 0);
            if (OurPlayerController != null)
            {
                if (CameraTwo != null && (OurPlayerController.GetViewTarget() == CameraOne))
                {
                    //Blend smoothly to camera two.
                    OurPlayerController.SetViewTargetWithBlend(CameraTwo, SmoothBlendTime, EViewTargetBlendFunction.VTBlend_Linear, 0.0f, false);
                }
                else if (CameraOne != null)
                {
                    //Cut instantly to camera one.
                    //	public  void SetViewTargetWithBlend(AActor NewViewTarget,float BlendTime/*=0f*/,EViewTargetBlendFunction BlendFunc/*=VTBlend_Linear*/,float BlendExp/*=0f*/,bool bLockOutgoing/*=false*/) {}

                    OurPlayerController.SetViewTargetWithBlend(CameraOne, SmoothBlendTime, EViewTargetBlendFunction.VTBlend_Linear, 0.0f, false);
                }
            }

        }
    }
}