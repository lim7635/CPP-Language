#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며 특별한 제약이나 규칙이 없는 일반적인 컨테이너입니다.

#pragma region Vector

	//std::vector<int> vector;

	//vector.reserve(10); // capacity 값 설정

	//// push_back : Vector 컨테이너 뒤에 데이터 값을 넣어줍니다.
	//// [10] [20] [30] [40] [50] [60] 
	//vector.push_back(10);
	// 
	//cout << "vector.capacity : " << vector.capacity() << endl;

	//vector.push_back(20);

	//vector.push_back(30);

	//vector.push_back(40);

	//vector.push_back(50);

	//cout << "vector.capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << " ";
	//}
	//
	//cout << endl;

	//// pop_back : Vector 컨테이너 뒤에 있는 데이터 값을 삭제합니다.
	//vector.pop_back();
	//vector.pop_back();
	//vector.pop_back();

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "vector.capacity : " << vector.capacity() << endl;

#pragma endregion

#pragma region Rhythm Game

	vector<const char*> vector;
	vector.reserve(100);

	int i = 0;
	int count = 10;
	srand(time(NULL));
	while (i < count)
	{
		int direction = rand() % 4;
		switch (direction)
		{
		case 0: vector.push_back("↑");
			break;

		case 1: vector.push_back("←");
			break;

		case 2: vector.push_back("→");
			break;

		case 3: vector.push_back("↓");
			break;

		default:
			break;
		}
		i++;
	}

	int life = 3;
	while (1)
	{
		cout << "Life : ";
		for (int i = 0; i < life; i++)
		{
			cout << "♥ ";
		}
		
		cout << endl;
		cout << endl;
		for (int i = 0; i < vector.size(); i++)
		{
			cout << vector[i] << " ";
		}
		
		char key = 0;

		if (_kbhit())
		{
			key = _getch();
			system("cls");

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case UP: if (vector[vector.size() - 1] == "↑") { vector.pop_back(); }
				     else { life--; }
				break;

			case LEFT: if (vector[vector.size() - 1] == "←") { vector.pop_back(); }
					   else { life--; }
				break;

			case RIGHT: if (vector[vector.size() - 1] == "→") { vector.pop_back(); }
					    else { life--; }
				break;

			case DOWN: if (vector[vector.size() - 1] == "↓") { vector.pop_back(); }
					   else { life--; }
				break;

			default:
				break;
			}
		}

		if (life == 0)
		{
			cout << "GAME OVER" << endl;
			break;
		}

		if (vector.size() == 0)
		{
			cout << "GAME CLEAR" << endl;
			break;
		}
		Sleep(100);
		system("cls");
	}

#pragma endregion


#pragma endregion

	
	return 0;
}