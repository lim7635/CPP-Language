#include "Hydra.h"

Hydra::Hydra()
{
	health = 80;
	maxHP = health;
	cout << "Create Hydra" << endl;
	cout << "Hydra ��ü ü�� : " << health << endl;
}

Hydra::~Hydra()
{
	cout << "Realase Hydra" << endl;
}

void Hydra::Recovery()
{
	health = maxHP;
	cout << "Hydra ���� ���� : " << health << endl;
}

int Hydra::GetHP()
{
	this->health = health;
	return health;
}

void Hydra::SetHP(int health)
{
	this->health = health;
	cout << "Hydra ���� ü�� : " << this->health << endl;
}
