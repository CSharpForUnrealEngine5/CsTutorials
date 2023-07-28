#include "CollidingPawnMovementComponent.h"
UCollidingPawnMovementComponent::UCollidingPawnMovementComponent()
{
PrimaryComponentTick.bCanEverTick=true;
PrimaryComponentTick.bStartWithTickEnabled=true;
PrimaryComponentTick.SetTickFunctionEnable(true);
}
void UCollidingPawnMovementComponent::TickComponent(float DeltaTime,ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction)
{
Super::TickComponent(DeltaTime,TickType,ThisTickFunction);
if (PawnOwner==nullptr||UpdatedComponent==nullptr||ShouldSkipUpdate(DeltaTime))
{
return;
}
FVector DesiredMovementThisFrame=ConsumeInputVector().GetClampedToMaxSize(1.0f)*DeltaTime*150.0f;
if (!DesiredMovementThisFrame.IsNearlyZero())
{
FHitResult Hit;
SafeMoveUpdatedComponent(DesiredMovementThisFrame,UpdatedComponent->GetComponentRotation(),true,Hit);
if (Hit.IsValidBlockingHit())
{
SlideAlongSurface(DesiredMovementThisFrame,1.0f-Hit.Time,Hit.Normal,Hit);
}
}
}
