#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
	maxHP = health;
	cout << "Create Zergling" << endl;
	cout << "Zergling ��ü ü�� : " << health << endl;
}

Zergling::~Zergling()
{
	cout << "Realase Zergling" << endl;
}

void Zergling::Recovery()
{
	health = maxHP;
	cout << "Zergling ���� ���� : " << health << endl;
}

int Zergling::GetHP()
{
	this->health = health;
	return health;
}

void Zergling::SetHP(int health)
{
	this->health = health;
	cout << "Zergling ���� ü�� : " << this->health << endl;
}
