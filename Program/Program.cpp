#include <iostream>
#include "Vulture.h"
#include "Siege_Tank.h"
#include "Goliath.h"
using namespace std;

int main()
{
#pragma region 가상 함수(virtual)
	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의될 수 있는 함수입니다.

	/*Mechanic* mechanic = new Vulture();

	mechanic->Move();

	mechanic = new Siege_Tank();

	mechanic->Move();*/

	//// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	//// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.

	//cout << "Mechanic의 크기 : " << sizeof(Mechanic) << endl;

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때
	// 객체 주소에 가상 함수 테이블을 추가합니다.

#pragma endregion

#pragma region Factory
	// 0번을 누르면 Vulture 생성
	// 1번을 누르면 Siege_Tank 생성
	// 2번을 누르면 Goliath 생성
	// 그 외의 버튼을 누르면 다시 번호 선택
	// 입력은 최대 5번 하고 유닛 생성을 종료한다.

	Mechanic* mechanic;

	int i = 1;
	while (i <= 5)
	{
		int select;
		cin >> select;
		switch (select)
		{
		case 0: mechanic = new Vulture();
			break;

		case 1 : mechanic = new Siege_Tank();
			break;

		case 2: mechanic = new Goliath();
			break;

		default: continue;
		}
		i++;
	}

#pragma endregion


	return 0;
}