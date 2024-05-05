#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

struct cmp
{
	bool operator()(string s1, string s2)
	{
		return s1.length() > s2.length(); // 글자 길이가 짧은 것부터 오름차순으로 정렬
	}
};

int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여
	// 만든 기능이 제한되거나 변형된 컨테이너입니다.

#pragma region Stack(LIFO) 선입후출

	/*std::stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	while (stack.empty() == false)
	{
		cout << "Stack의 Top : " << stack.top() << endl;
		stack.pop();
	}*/

#pragma endregion

#pragma region Queue(FIFO) 선입선출

	/*std::queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);

	while (queue.size())
	{
		cout << queue.front() << endl;
		queue.pop();
	}*/

#pragma endregion

#pragma region Priority Queue(우선순위 큐)
	// 우선순위가 설계되어 있는 queue(내림차순이 default)
	// 사용자가 직접 우선순위 조정 가능

	// greater<int> : 오름차순 정렬, less<int> : 내림차순 정렬
	priority_queue<string, vector<string>, cmp> pq;

	int n = 3;

	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		pq.push(x);
	}

	while (pq.empty() == false)
	{
		cout << pq.top() << " ";
		pq.pop();
	}

#pragma endregion

#pragma endregion

	return 0;
}