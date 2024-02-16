#include <iostream>
#include "Phone.h"
#include "Marine.h"
using namespace std;

int main()
{
#pragma region 캡슐화
	/*Phone phone1;

	phone1.SetVolume(10);*/

#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능입니다.
	
	//Unit unit; // 생성자 출력 순서 : 부모 클래스 => 자식 클래스 / 소멸자 출력 순서 : 자식 클래스 => 부모 클래스

	//cout << "unit 오브젝트의 크기 : " << sizeof(unit) << endl; // attack(int) + health(int) = 8

	//Marine marine;

	//cout << "marine 오브젝트의 크기 : " << sizeof(marine) << endl; // attack(int) + health(int) + intersection(int) = 12

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며
	// 하위 클래스는 상위 클래스의 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.

#pragma endregion


	return 0;
}