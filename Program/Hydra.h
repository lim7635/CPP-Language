#pragma once
#include "Zerg.h"
class Hydra : public Zerg
{
public:
	Hydra();
	virtual ~Hydra();
	void Recovery() override;
	int GetHP() override;
	void SetHP(int health) override;
};

