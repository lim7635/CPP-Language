#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
	maxHP = health;
	cout << "Create Zergling" << endl;
	cout << "Zergling 전체 체력 : " << health << endl;
}

Zergling::~Zergling()
{
	cout << "Realase Zergling" << endl;
}

void Zergling::Recovery()
{
	health = maxHP;
	cout << "Zergling 비콘 진입 : " << health << endl;
}

int Zergling::GetHP()
{
	return health;
}

void Zergling::SetHP(int health)
{
	cout << "Zergling 현재 체력 : " << health << endl;
}
