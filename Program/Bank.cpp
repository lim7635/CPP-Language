#include "Bank.h"

void Bank::Withdrawal(Character& character, int money)
{
	bankMoney += money;
	character.money -= money;
}

void Bank::Show()
{
	cout << "Bank Money : " << bankMoney << endl;
}
