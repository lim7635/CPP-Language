#pragma once
#include <iostream>
using namespace std;

class Pencil
{
public:
	// 순수 가상 함수(cpp 정의를 할 필요 없음)
	virtual void Draw() = 0;
};

