// Developed by FrigidCoffin

#include "RPGCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


void ARPGCharacter::MoveVertical(float Value)
{
	if ( Controller != NULL && Value !=0.0f)
	{
		const FVector moveDir = FVector(1, 0, 0);
		AddMovementInput(moveDir, Value);
	}
}

void ARPGCharacter::MoveHorizontal(float Value)
{
	if (Controller != NULL && Value != 0.0f)
	{
		const FVector moveDir = FVector(0, 1, 0);
		AddMovementInput(moveDir, Value);
	}
}

ARPGCharacter::ARPGCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Sets default values
ARPGCharacter::ARPGCharacter(const class FObjectInitializer& ObjectInitializer) : Super (ObjectInitializer)
{
	bUseControllerRotationYaw = false;
	auto charactermov = GetCharacterMovement();
	charactermov->bOrientRotationToMovement = true;
	charactermov->RotationRate = FRotator(0.0f, 460.0f, 0.0f);
	charactermov->MaxWalkSpeed = 400.0f;


}

// Called when the game starts or when spawned
void ARPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

