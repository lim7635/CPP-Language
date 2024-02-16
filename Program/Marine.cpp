#include "Marine.h"

Marine::Marine()
{
	attack = 10;
	health = 45;
	cout << "Create Marine" << endl;
}

Marine::~Marine()
{
	cout << "Release Marine" << endl;
}
