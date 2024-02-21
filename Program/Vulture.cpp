#include "Vulture.h"

Vulture::Vulture()
{
	health = 200;
	attack = 100;
	cout << "Create Vulture" << endl;
}

Vulture::~Vulture()
{
	cout << "Release Vulture" << endl;
}

void Vulture::Move()
{
	cout << "Move Vulture" << endl;
}
