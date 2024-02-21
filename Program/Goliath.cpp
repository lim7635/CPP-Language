#include "Goliath.h"

Goliath::Goliath()
{
	health = 100;
	attack = 50;
	cout << "Create Goliath" << endl;
}

Goliath::~Goliath()
{
	cout << "Release Goliath" << endl;
}

void Goliath::Move()
{
	cout << "Move Goliath" << endl;
}
