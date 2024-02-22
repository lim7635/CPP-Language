#pragma once
#include "Zerg.h"
class Zergling : public Zerg
{
public:
	Zergling();
	virtual ~Zergling();
	void Recovery() override;
	int GetHP() override;
	void SetHP(int health) override;
};

