#pragma once // 컴파일 중복 막는 역할
#include <iostream>
using namespace std;

class Transform
{
private:
	int x;
	int y;
	int z;

public:
	Transform();

	void Rotate(int x = 10, int y = 10, int z = 10); // 기본 매개 변수(매개 변수 안에 값을 미리 지정)
};

