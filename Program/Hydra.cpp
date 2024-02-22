#include "Hydra.h"

Hydra::Hydra()
{
	health = 80;
	maxHP = health;
	cout << "Create Hydra" << endl;
	cout << "Hydra 전체 체력 : " << health << endl;
}

Hydra::~Hydra()
{
	cout << "Realase Hydra" << endl;
}

void Hydra::Recovery()
{
	health = maxHP;
	cout << "Hydra 비콘 진입 : " << health << endl;
}

int Hydra::GetHP()
{
	this->health = health;
	return health;
}

void Hydra::SetHP(int health)
{
	this->health = health;
	cout << "Hydra 현재 체력 : " << this->health << endl;
}
