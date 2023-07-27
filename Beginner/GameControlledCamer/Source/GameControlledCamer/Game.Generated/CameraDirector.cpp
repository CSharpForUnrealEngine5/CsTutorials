#include "CameraDirector.h"
ACameraDirector::ACameraDirector()
{
PrimaryActorTick.bCanEverTick=true;
PrimaryActorTick.bStartWithTickEnabled=true;
PrimaryActorTick.SetTickFunctionEnable(true);
}
void ACameraDirector::Tick(float DeltaTime)
{
Super::Tick(DeltaTime);
float TimeBetweenCameraChanges=2.0f;
float SmoothBlendTime=0.75f;
TimeToNextCameraChange-=DeltaTime;
if (TimeToNextCameraChange<=0.0f)
{
TimeToNextCameraChange+=TimeBetweenCameraChanges;
APlayerController* OurPlayerController=UGameplayStatics::GetPlayerController(this,0);
if (OurPlayerController!=nullptr)
{
if (CameraTwo!=nullptr&&(OurPlayerController->GetViewTarget()==CameraOne))
{
OurPlayerController->SetViewTargetWithBlend(CameraTwo,SmoothBlendTime,EViewTargetBlendFunction::VTBlend_Linear,0.0f,false);
}
else
if (CameraOne!=nullptr)
{
OurPlayerController->SetViewTargetWithBlend(CameraOne,SmoothBlendTime,EViewTargetBlendFunction::VTBlend_Linear,0.0f,false);
}
}
}
}
