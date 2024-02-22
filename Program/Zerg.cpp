#include "Zerg.h"

Zerg::Zerg()
{
	cout << "Create Zerg" << endl;
}

Zerg::~Zerg()
{
	cout << "Realase Zerg" << endl;
}

void Zerg::Recovery()
{

}

int Zerg::GetHP()
{
	return health;
}

void Zerg::SetHP(int health)
{
	this->health = health;
}
