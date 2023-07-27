namespace Game;
using GameFramework;

public class ACollidingPawn : APawn
{
    UParticleSystemComponent OurParticleSystem;

    ACollidingPawn()
    {
        USphereComponent SphereComponent = CreateDefaultSubobject<USphereComponent>("RootComponent");
        RootComponent = SphereComponent;
        SphereComponent.InitSphereRadius(40.0f);
        SphereComponent.SetCollisionProfileName("Pawn",bUpdateOverlaps:true);

        // Create and position a mesh component so we can see where our sphere is
        UStaticMeshComponent SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>("VisualRepresentation");
        SphereVisual.SetupAttachment(RootComponent);
        ConstructorHelpers.FObjectFinder<UStaticMesh> SphereVisualAsset = new ConstructorHelpers.FObjectFinder<UStaticMesh>("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere");
        if (SphereVisualAsset.Succeeded())
        {
            SphereVisual.SetStaticMesh(SphereVisualAsset.Object);
            SphereVisual.SetRelativeLocation(new FVector(0.0f, 0.0f, -40.0f));
            SphereVisual.SetWorldScale3D(new FVector(0.8f));
        }
    }
}