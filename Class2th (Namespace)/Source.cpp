#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

char character = 'A';

using namespace std;

namespace EnemySkill
{
	void Skill()
	{
		cout << "Enemy Skill" << endl;
	}
}
using namespace EnemySkill;

namespace PlayerSkill
{
	void Skill()
	{
		cout << "Player Skill" << endl;
	}
}

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.

	//char character = 'W';

	//std::cout << "character�� �� : " << character << std::endl;
	//
	//// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��
	//// ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ�� �����ϱ� ������
	//// ���� ������ ȣ����� �ʽ��ϴ�.

	//std::cout << "���� ���� character�� �� : " << ::character << std::endl;

	// ���� ���� �����ڸ� ����Ͽ� ���� ������ ������ �����ϰ� �Ǹ� ���� ������ ������ �� �ֽ��ϴ�.

#pragma endregion

#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	//Skill(); // EnemySkill �Լ� ���
	//PlayerSkill::Skill(); // PlayerSkill �Լ� ���

	// �̸� ������ ���� �̸��� �Լ��� ������ �� �ٸ� ������ �����Ͽ� �ߺ����� �ʵ��� ������ �� �ֽ��ϴ�.

#pragma endregion

#pragma region ȸ��(�Ӹ� ���) �Ǻ�
	/*bool flag = true;

	const char* content = "level";

	for (int i = 0; i <= strlen(content) / 2; i++)
	{
		if (content[i] != content[strlen(content) - i - 1] && content[i] + 32 != content[strlen(content) - i - 1] && content[i] - 32 != content[strlen(content) - i - 1])
		{
			flag = false;
			break;
		}
	}

	if (flag == true)
	{
		cout << content << "�� �Ӹ� ��� �Դϴ�." << endl;
	}
	else
	{
		cout << content << "�� �Ӹ� ����� �ƴմϴ�." << endl;
	}*/

#pragma endregion

#pragma region �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �˰���
	/*char nickname[] = "bard";

	int count = strlen(nickname);

	for (int i = 0; i < count; i++)
	{
		if (nickname[i] >= 'a' && nickname[i] <= 'z')
		{
			nickname[i] -= 32;
		}
	}
	cout << nickname << endl;*/

#pragma endregion

	return 0;
}