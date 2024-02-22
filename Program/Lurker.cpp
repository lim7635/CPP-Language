#include "Lurker.h"

Lurker::Lurker()
{
	health = 125;
	maxHP = health;
	cout << "Create Lurker" << endl;
	cout << "Lurker 전체 체력 : " << health << endl;
}

Lurker::~Lurker()
{
	cout << "Realase Lurker" << endl;
}

void Lurker::Recovery()
{
	health = maxHP;
	cout << "Lurker 비콘 진입 : " << health << endl;
}

int Lurker::GetHP()
{
	this->health = health;
	return health;
}

void Lurker::SetHP(int health)
{
	this->health = health;
	cout << "Lurker 현재 체력 : " << this->health << endl;
}
