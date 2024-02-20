#pragma once
#include <iostream>
using namespace std;

class Mechanic
{
protected:
	int health;
	int attack;

public:
	Mechanic();
	~Mechanic();
	void Move();
};

