// Developed by FrigidCoffin

#include "CombatEngine.h"



CombatEngine::CombatEngine(TArray<UGameCharacter*> playerParty, TArray<UGameCharacter*> enemyParty)
{
	this->playerParty = playerParty;
	this->enemyParty = enemyParty;

	for (int i = 0; i < playerParty.Num(); i++)
	{
		this->combatantOrder.Add(playerParty[i]);
	}
	for (int i = 0; i < enemyParty.Num(); i++)
	{
		this->combatantOrder.Add(enemyParty[i]);
	}
	this->tickTargetIndex = 0;
	this->SetPhase(CombatPhase::CPHASE_Decision);
}

CombatEngine::~CombatEngine()
{
}


bool CombatEngine::Tick(float DeltaSeconds)
{
	switch (phase)
	{
	case CombatPhase::CPHASE_Decision:
		SelectNextCharacter();
		if (this->tickTargetIndex == -1)
		{
			this->SetPhase(CombatPhase::CPHASE_Action);
		}
		break;
	case CombatPhase::CPHASE_Action:
		SelectNextCharacter();
		if (this->tickTargetIndex == -1)
		{
			this->SetPhase(CombatPhase::CPHASE_Decision);
		}
		break;
	case CombatPhase::CPHASE_Victory:
	case CombatPhase::CPHASE_GameOver:
		return true;
		break;
	}
	return BattleResolution();
}

bool CombatEngine::BattleResolution()
{
	int deadCount = 0;
	for (int i = 0; i < this->playerParty.Num(); i++)
	{
		if (this->playerParty[i]->HP <= 0)
			deadCount++;
	}
	if (deadCount == this->playerParty.Num())
	{
		this->SetPhase(CombatPhase::CPHASE_GameOver);
		return false;
	}
	deadCount = 0;
	for (int i = 0; i < this->enemyParty.Num(); i++)
	{
		if (this->enemyParty[i]->HP <= 0)
			deadCount++;
	}
	if (deadCount == this->enemyParty.Num())
	{
		this->SetPhase(CombatPhase::CPHASE_Victory);
		return false;
	}
	return false;
}

void CombatEngine::SetPhase(CombatPhase phase)
{
}

void CombatEngine::SelectNextCharacter()
{
}
