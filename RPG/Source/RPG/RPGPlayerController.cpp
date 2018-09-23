// Developed by FrigidCoffin

#include "RPGPlayerController.h"
#include "ControllableCharacter.h"

void ARPGPlayerController::MoveVertical(float Value)
{
	IControllableCharacter* pawn = Cast<IControllableCharacter>(GetPawn());
	if (pawn != NULL)
	{
		pawn->MoveVertical(Value);
	}
}

void ARPGPlayerController::MoveHorizontal(float Value)
{
	IControllableCharacter* pawn = Cast<IControllableCharacter>(GetPawn());
	if (pawn != NULL)
	{
		pawn->MoveVertical(Value);
	}
}

void ARPGPlayerController::SetupInputComponent()
{
	if (InputComponent == NULL)
	{
		InputComponent = NewObject<UInputComponent>(this, UInputComponent::StaticClass() , TEXT("PC_InputComponent0"));
		InputComponent->RegisterComponent();
	}

	InputComponent->BindAxis("MoveVertical", this, &ARPGPlayerController::MoveVertical);
	InputComponent->BindAxis("MoveHorizontal", this, &ARPGPlayerController::MoveHorizontal);
	this->bShowMouseCursor = true;
}
