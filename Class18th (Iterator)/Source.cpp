#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
#pragma region 반복자
	//// iterator : 컨테이너에 저장되어 있는 원소를 참조할 때 사용(포인터와 비슷)
	//list<int> list;

	//// 순서 : 80 70 60 10 20 30
	//list.push_back(10);
	//list.push_back(20);
	//list.push_back(30);
	//list.push_front(60);
	//list.push_front(70);
	//list.push_front(80);

	//std::list<int>::iterator iterator; // using namespace std;가 있어도 std::를 입력해야 한다.

	//iterator = list.begin();

	//// 앞에 100 삽입
	//list.insert(list.begin(), 100);

	//// 앞의 값 제거
	//list.erase(list.begin());

	//for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++)
	//{
	//	cout << "list의 값 : " << *iterator << endl; // 역참조하여 값 출력
	//}

#pragma endregion

#pragma region String

	//std::string content;

	//content = "Hello World~";

	//cout << content << endl;

	//content.append(" Continue"); // 뒤에 문자열 첨가

	//cout << content << endl;

#pragma endregion

#pragma region 최대공약수

	/*int firstValue;
	int secondValue;
	cin >> firstValue;
	cin >> secondValue;

	int answer = 1;
	int i = 2;
	while (i <= firstValue || i <= secondValue)
	{
		if (firstValue % i == 0 && secondValue % i == 0)
		{
			answer = i;
		}
		i++;
	}
	cout << answer;*/

#pragma endregion

	return 0;
}