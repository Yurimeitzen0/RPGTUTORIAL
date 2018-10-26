// Developed by FrigidCoffin

#include "RPGGameInstance.h"

URPGGameInstance::URPGGameInstance(const FObjectInitializer & ObjectInitializer)
{
}

void URPGGameInstance::Init()
{
	if (this->isInitialized) return;
	
	this->isInitialized = true;

	UDataTable * characters = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), NULL, TEXT("DataTable'/Game/Characters.Characters'")));
	
	if (characters == NULL)
	{
		UE_LOG (LogTemp, Error, TEXT("Characters DataTable not found!!"));
		return;
	}

	FCharacterInfo* row = characters->FindRow<FCharacterInfo>(TEXT("S1"), TEXT("LookupCharacterClass"));

	if (row == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Character ID 'S1' not found!"));
		return;
	}

	this->PartyMembers.Add(UGameCharacter::CreateGameCharacter(row, this));
}
