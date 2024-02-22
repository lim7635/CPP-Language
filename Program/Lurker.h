#pragma once
#include "Zerg.h"
class Lurker : public Zerg
{
public:
	Lurker();
	virtual ~Lurker();
	void Recovery() override;
	int GetHP() override;
	void SetHP(int health) override;
};

