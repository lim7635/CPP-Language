#include "Lurker.h"

Lurker::Lurker()
{
	health = 125;
	maxHP = health;
	cout << "Create Lurker" << endl;
	cout << "Lurker ��ü ü�� : " << health << endl;
}

Lurker::~Lurker()
{
	cout << "Realase Lurker" << endl;
}

void Lurker::Recovery()
{
	health = maxHP;
	cout << "Lurker ���� ���� : " << health << endl;
}

int Lurker::GetHP()
{
	return health;
}

void Lurker::SetHP(int health)
{
	cout << "Lurker ���� ü�� : " << health << endl;
}
