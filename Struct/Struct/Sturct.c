#include <stdio.h>
#include<stdlib.h>
//이름,나이를 한번에 저장하는 자료형 설계
struct Person
{
	char* name;
	int age;
};
void main()
{
	struct Person* p = malloc(sizeof(struct Person));
	p->name = "sam";
	p->age = 20;
	printf("name: %s\n", p->name);
	printf("name: %d\n", p->age);
	printf("\n");

	struct Person* p2;
	p2 = p; //값의 복사가 아닌 주소복사

	p2->age = 30;
	printf("name: %s\n", p->name);
	printf("name: %d\n", p->age);
	printf("\n");


}