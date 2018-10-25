// Developed by FrigidCoffin

#include "GameCharacter.h"

UGameCharacter::UGameCharacter(const class FObjectInitializer& objectInitializer): Super(objectInitializer)
{

}
UGameCharacter * UGameCharacter::CreateGameCharacter(FCharacterInfo * characterInfo, UObject * outer)
{
	UGameCharacter* character = NewObject<UGameCharacter>(outer);
	UDataTable* characterClasses = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), NULL, TEXT("DataTable'/Game/CharacterClasses.CharacterClasses'")));

	if (characterClasses == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterClass DataTable not Found!"));
	}
	else
	{
		character->CharacterName = characterInfo->CharacterName;
		FCharacterClassInfo* row = characterClasses->FindRow <FCharacterClassInfo>(*(characterInfo->ClassID), TEXT("LookupCharacterClass"));
		character->ClassInfo = row;

		character->MHP = character->ClassInfo->StartMHP;
		character->MMP = character->ClassInfo->StartMMP;

		character->HP = character->MHP;
		character->MP = character->MMP;

		character->ATK = character->ClassInfo->StartATK;
		character->DEF = character->ClassInfo->StartDEF;
		
	}
	return character;
}

void UGameCharacter::BeginDestroy()
{
	Super::BeginDestroy();
}
