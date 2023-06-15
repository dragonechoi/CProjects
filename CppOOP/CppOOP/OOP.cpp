#include <iostream>
using namespace std;
class Robot
{
public:
	const char* name;
	int hp;

	void attack()
	{
		cout << "주먹발사!" << endl;

	}

	void move()
	{
		cout << "이동" << endl;
	}
};

class Flirobot:Robot
{
public:
	void fly()
	{
		cout << "오 난다~" << endl;
	}
	//상속 받은 기능이 마음에 들지않을때 기능을 벼녕하는 기술 
	//함수 오버라이드[Override] 라고 부름
};

void attack()
{
	cout << "미사일 발사" << endl;
}


void main()
{
	Robot* r = new Robot();
	r->attack;
	r->move;
		 
}