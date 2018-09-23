// Developed by FrigidCoffin

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RPGPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API ARPGPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
protected:
	void MoveVertical(float Value);
	void MoveHorizontal(float Value);

	virtual void SetupInputComponent() override;

	
};
