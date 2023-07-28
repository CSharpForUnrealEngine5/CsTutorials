namespace Game;

using CSharpToCpp.Utilities;
using GameFramework;
using static System.Net.Mime.MediaTypeNames;

[CppInclude("CollidingPawnMovementComponent.h")]
public class ACollidingPawn : APawn
{
    UParticleSystemComponent OurParticleSystem;
    UCollidingPawnMovementComponent OurMovementComponent;
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

        // Create a particle system that we can activate or deactivate
        OurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>("MovementParticles");
        OurParticleSystem.SetupAttachment(SphereVisual);
        OurParticleSystem.bAutoActivate = false;
        OurParticleSystem.SetRelativeLocation(new FVector(-20.0f, 0.0f, 20.0f));
        ConstructorHelpers.FObjectFinder<UParticleSystem> ParticleAsset =
            new ConstructorHelpers.FObjectFinder<UParticleSystem>("/Game/StarterContent/Particles/P_Fire.P_Fire");
        if (ParticleAsset.Succeeded())
        {
            OurParticleSystem.SetTemplate(ParticleAsset.Object);
        }

        // Use a spring arm to give the camera smooth, natural-feeling motion.
        USpringArmComponent SpringArm = CreateDefaultSubobject<USpringArmComponent>("CameraAttachmentArm");
        SpringArm.SetupAttachment(RootComponent);
        SpringArm.SetRelativeRotation(new FRotator(-45.0f, 0.0f, 0.0f));
        SpringArm.TargetArmLength = 400.0f;
        SpringArm.bEnableCameraLag = true;
        SpringArm.CameraLagSpeed = 3.0f;

        // Create a camera and attach to our spring arm
        UCameraComponent Camera = CreateDefaultSubobject<UCameraComponent>("ActualCamera");
        Camera.SetupAttachment(SpringArm, USpringArmComponent.SocketName);

        // Take control of the default player
        AutoPossessPlayer = EAutoReceiveInput.Player0;

        // Create an instance of our movement component, and tell it to update the root.
        OurMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>("CustomMovementComponent");
        OurMovementComponent.UpdatedComponent = RootComponent;
    }


    // Called to bind functionality to input
    public void SetupPlayerInputComponent( UInputComponent InInputComponent)
{
    InInputComponent.BindAction("ParticleToggle", EInputEvent.IE_Pressed, this, Code<string>("&ACollidingPawn::ParticleToggle"));

    InInputComponent.BindAxis("MoveForward", this, Code<string>("&ACollidingPawn::MoveForward"));
    InInputComponent.BindAxis("MoveRight", this, Code<string>("&ACollidingPawn::MoveRight"));
    InInputComponent.BindAxis("Turn", this, Code<string>("&ACollidingPawn::Turn"));
}
public override UPawnMovementComponent GetPawnMovementComponent()
    {
        return OurMovementComponent;
    }

    void MoveForward(float AxisValue)
    {
        if (OurMovementComponent != null && (OurMovementComponent.UpdatedComponent == RootComponent))
        {
            OurMovementComponent.AddInputVector(GetActorForwardVector() * AxisValue, false);
        }
    }
    void MoveRight(float AxisValue)
    {
        if (OurMovementComponent != null && (OurMovementComponent.UpdatedComponent == RootComponent))
        {
            OurMovementComponent.AddInputVector(GetActorRightVector() * AxisValue, false);
        }
    }
    void Turn(float AxisValue)
    {
        FRotator NewRotation = GetActorRotation();
        NewRotation.Yaw += AxisValue;
        SetActorRotation(NewRotation);
    }
    void ParticleToggle() {
        if (OurParticleSystem != null && OurParticleSystem.Template != null)
        {
            OurParticleSystem.ToggleActive();
        }
    }
}