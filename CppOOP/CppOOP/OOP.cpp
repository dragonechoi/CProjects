#include <iostream>
using namespace std;
class Robot
{
public:
	const char* name;
	int hp;

	void attack()
	{
		cout << "�ָԹ߻�!" << endl;

	}

	void move()
	{
		cout << "�̵�" << endl;
	}
};

class Flirobot:Robot
{
public:
	void fly()
	{
		cout << "�� ����~" << endl;
	}
	//��� ���� ����� ������ ���������� ����� �����ϴ� ��� 
	//�Լ� �������̵�[Override] ��� �θ�
};

void attack()
{
	cout << "�̻��� �߻�" << endl;
}


void main()
{
	Robot* r = new Robot();
	r->attack;
	r->move;
		 
}