#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();
	virtual ~Vulture(); // 부모 클래스에 가상 소멸자를 선언하면 자식 클래스에 선언하지 않아도 상관없음
	void Move() override;
};

