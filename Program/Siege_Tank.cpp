#include "Siege_Tank.h"

Siege_Tank::Siege_Tank()
{
	health = 400;
	attack = 200;
	cout << "Create Siege Tank" << endl;
	cout << "Health : " << health << endl;
	cout << "Attack : " << attack << endl;
}

Siege_Tank::~Siege_Tank()
{
	cout << "Release Siege Tank" << endl;
}

void Siege_Tank::Move()
{
	cout << "Move Siege Tank" << endl;
}
