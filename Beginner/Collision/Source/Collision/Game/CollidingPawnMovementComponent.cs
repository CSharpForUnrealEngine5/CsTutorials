using CSharpToCpp.Utilities;
using GameFramework;

namespace Game;

internal class UCollidingPawnMovementComponent : UPawnMovementComponent
{
    public UCollidingPawnMovementComponent()
    {
        PrimaryComponentTick.bCanEverTick = true;
        PrimaryComponentTick.bStartWithTickEnabled = true;
        PrimaryComponentTick.SetTickFunctionEnable(true);
    }

    [CppNoUFunction]
    public override void TickComponent(float DeltaTime, ELevelTick TickType, [CppPointer] FActorComponentTickFunction ThisTickFunction)
    {
        base.TickComponent(DeltaTime, TickType, ThisTickFunction);

        if (PawnOwner == null || UpdatedComponent == null || ShouldSkipUpdate(DeltaTime))
        {
            return;
        }

        // Get (and then clear) the movement vector that we set in ACollidingPawn::Tick
        FVector DesiredMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * 150.0f;
        if (!DesiredMovementThisFrame.IsNearlyZero())
        {
            FHitResult Hit;
            SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent.GetComponentRotation(), true, out Hit);

            // If we bumped into something, try to slide along it
            if (Hit.IsValidBlockingHit())
            {
                SlideAlongSurface(DesiredMovementThisFrame, 1.0f - Hit.Time, Code<FVector>("Hit.Normal"), out Hit);
            }
        }
    }

}


