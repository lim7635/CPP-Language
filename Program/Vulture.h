#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();
	virtual ~Vulture(); // �θ� Ŭ������ ���� �Ҹ��ڸ� �����ϸ� �ڽ� Ŭ������ �������� �ʾƵ� �������
	void Move() override;
};

