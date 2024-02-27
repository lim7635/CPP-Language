#pragma once
#include "Character.h"
#include <iostream>
using namespace std;

class Bank
{
private:
	int bankMoney = 0;

public:
	void Withdrawal(Character & character, int money);

	void Show();
};

