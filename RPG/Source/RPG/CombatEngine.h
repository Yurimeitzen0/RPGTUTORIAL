// Developed by FrigidCoffin

#pragma once
/*
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "CombatEngine.generated.h"
*/
#include "RPG.h"
#include "GameCharacter.h"
/**
 * 
 */



enum class  CombatPhase : uint8
{
	CPHASE_Decision,
	CPHASE_Action,
	CPHASE_Victory,
	CPHASE_GameOver
};
UCLASS()
class RPG_API CombatEngine
{
public:
	CombatEngine(TArray<UGameCharacter*> playerParty, TArray<UGameCharacter*> enemyParty);
	~CombatEngine();
	bool Tick(float DeltaSeconds);
	bool BattleResolution();

	TArray<UGameCharacter*> combatantOrder;
	TArray<UGameCharacter*> playerParty;
	TArray<UGameCharacter*> enemyParty;
	CombatPhase phase;

protected:
	UGameCharacter * currentTickTarget;
	int tickTargetIndex;
	
	void SetPhase(CombatPhase  phase);
	void SelectNextCharacter();
	


};
