// Developed by FrigidCoffin

#pragma once

#include "Object.h"	
#include "ControllableCharacter.generated.h"

UINTERFACE()
class RPG_API UControllableCharacter : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class RPG_API IControllableCharacter
{
	GENERATED_IINTERFACE_BODY()
	virtual void MoveVertical(float Value);
	virtual void MoveHorizontal(float Value);
};
