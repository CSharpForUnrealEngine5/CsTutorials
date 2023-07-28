#include "CollidingPawn.h"
ACollidingPawn::ACollidingPawn()
{
USphereComponent* SphereComponent=CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
RootComponent=SphereComponent;
SphereComponent->InitSphereRadius(40.0f);
SphereComponent->SetCollisionProfileName(TEXT("Pawn"),true);
UStaticMeshComponent* SphereVisual=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
SphereVisual->SetupAttachment(RootComponent);
ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset=ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
if (SphereVisualAsset.Succeeded())
{
SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
SphereVisual->SetRelativeLocation(FVector(0.0f,0.0f,-40.0f));
SphereVisual->SetWorldScale3D(FVector(0.8f));
}
OurParticleSystem=CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MovementParticles"));
OurParticleSystem->SetupAttachment(SphereVisual);
OurParticleSystem->bAutoActivate=false;
OurParticleSystem->SetRelativeLocation(FVector(-20.0f,0.0f,20.0f));
ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset=ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
if (ParticleAsset.Succeeded())
{
OurParticleSystem->SetTemplate(ParticleAsset.Object);
}
USpringArmComponent* SpringArm=CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
SpringArm->SetupAttachment(RootComponent);
SpringArm->SetRelativeRotation(FRotator(-45.0f,0.0f,0.0f));
SpringArm->TargetArmLength=400.0f;
SpringArm->bEnableCameraLag=true;
SpringArm->CameraLagSpeed=3.0f;
UCameraComponent* Camera=CreateDefaultSubobject<UCameraComponent>(TEXT("ActualCamera"));
Camera->SetupAttachment(SpringArm,USpringArmComponent::SocketName);
AutoPossessPlayer=EAutoReceiveInput::Player0;
OurMovementComponent=CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CustomMovementComponent"));
OurMovementComponent->UpdatedComponent=RootComponent;
}
void ACollidingPawn::SetupPlayerInputComponent(UInputComponent* InInputComponent)
{
InInputComponent->BindAction(TEXT("ParticleToggle"),EInputEvent::IE_Pressed,this,&ACollidingPawn::ParticleToggle);
InInputComponent->BindAxis(TEXT("MoveForward"),this,&ACollidingPawn::MoveForward);
InInputComponent->BindAxis(TEXT("MoveRight"),this,&ACollidingPawn::MoveRight);
InInputComponent->BindAxis(TEXT("Turn"),this,&ACollidingPawn::Turn);
}
UPawnMovementComponent* ACollidingPawn::GetPawnMovementComponent()
{
return OurMovementComponent;
}
void ACollidingPawn::MoveForward(float AxisValue)
{
if (OurMovementComponent!=nullptr&&(OurMovementComponent->UpdatedComponent==RootComponent))
{
OurMovementComponent->AddInputVector(GetActorForwardVector()*AxisValue,false);
}
}
void ACollidingPawn::MoveRight(float AxisValue)
{
if (OurMovementComponent!=nullptr&&(OurMovementComponent->UpdatedComponent==RootComponent))
{
OurMovementComponent->AddInputVector(GetActorRightVector()*AxisValue,false);
}
}
void ACollidingPawn::Turn(float AxisValue)
{
FRotator NewRotation=GetActorRotation();
NewRotation.Yaw+=AxisValue;
SetActorRotation(NewRotation);
}
void ACollidingPawn::ParticleToggle()
{
if (OurParticleSystem!=nullptr&&OurParticleSystem->Template!=nullptr)
{
OurParticleSystem->ToggleActive();
}
}
