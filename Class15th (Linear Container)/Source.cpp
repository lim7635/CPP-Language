#include <iostream>
#include <vector>
#include <deque>
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

	//vector<const char*> note;
	//note.reserve(100);

	//int i = 0;
	//int life = 3;
	//int count = 10;
	//srand(time(NULL));

	//// 1. 랜덤한 Note를 생성합니다.(↑ ← → ↓)
	//while (i < count)
	//{	
	//	int arrow = rand() % 4;
	//	switch (arrow)
	//	{
	//	case 0: note.push_back("↑");
	//		break;

	//	case 1: note.push_back("←");
	//		break;

	//	case 2: note.push_back("→");
	//		break;

	//	case 3: note.push_back("↓");
	//		break;

	//	default:
	//		break;
	//	}
	//	i++;
	//}

	//char key = 0;

	//// 2. 게임 시작 조건을 설정합니다.
	//while (note.empty() == false && life != 0)
	//{
	//	// 3. Life를 출력합니다.
	//	cout << "Life : ";
	//	for (int i = 0; i < life; i++)
	//	{
	//		cout << "♥ ";
	//	}
	//	
	//	cout << endl;
	//	cout << endl;

	//	// 4. Note를 출력합니다.
	//	for (int i = 0; i < note.size(); i++)
	//	{
	//		cout << note[i] << " ";
	//	}

	//	if (_kbhit())
	//	{
	//		key = _getch();
	//		system("cls");

	//		if (key == -32)
	//		{
	//			key = _getch();
	//		}

	//		// 5. 내가 선택한 key가 맞다면 맨 뒤의 Note를 삭제하고 다르다면 life를 깎습니다.
	//		switch (key)
	//		{
	//		case UP: if (note[note.size() - 1] == "↑") { note.pop_back(); } else { life--; }
	//			break;

	//		case LEFT: if (note[note.size() - 1] == "←") { note.pop_back(); } else { life--; }
	//			break;

	//		case RIGHT: if (note[note.size() - 1] == "→") { note.pop_back(); } else { life--; }
	//			break;

	//		case DOWN: if (note[note.size() - 1] == "↓") { note.pop_back(); } else { life--; }
	//			break;

	//		default:
	//			break;
	//		}
	//	}

	//	// 6. 화면 전체를 지워줍니다.
	//	Sleep(100);
	//	system("cls");
	//}

	//if (life == 0)
	//{
	//	cout << "GAME OVER" << endl;
	//}

	//if (note.empty() == true)
	//{
	//	cout << "GAME CLEAR" << endl;
	//}

#pragma endregion

#pragma region Deque

	//std::deque<int> deque;

	//// push.front : 앞에 데이터 값을 넣어줍니다.
	//deque.push_front(10);
	//deque.push_back(5);

	//deque.push_front(7);
	//deque.push_back(11);

	//for (int i = 0; i < deque.size(); i++)
	//{
	//	cout << "deque[" << i << "] : " << deque[i] << endl;
	//}
	//cout << "--------------" << endl;

	//// pop_front : 앞에 있는 데이터 값을 삭제합니다.
	//deque.pop_front();
	//deque.pop_back();
	//
	//for (int i = 0; i < deque.size(); i++)
	//{
	//	cout << "deque[" << i << "] : " << deque[i] << endl;
	//}

#pragma endregion

#pragma endregion

	return 0;
}