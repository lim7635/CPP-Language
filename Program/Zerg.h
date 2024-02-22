#pragma once
#include <iostream>
using namespace std;

class Zerg
{
protected:
	int health;
	int maxHP;

public:
	Zerg();
	virtual ~Zerg();
	virtual void Recovery();
	virtual int GetHP();
	virtual void SetHP(int health);
};

