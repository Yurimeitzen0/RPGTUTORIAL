// Developed by FrigidCoffin

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ControllableCharacter.h"
#include "RPGCharacter.generated.h"

UCLASS()
class RPG_API ARPGCharacter : public ACharacter, public IControllableCharacter
{
	GENERATED_BODY()
	ARPGCharacter(const class FObjectInitializer& ObjectInitializer);

public:
	// Sets default values for this character's properties
	virtual void MoveVertical(float Value);
	virtual void MoveHorizontal(float Value);
	ARPGCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
