#include <stdio.h>
#include<stdlib.h>
//�̸�,���̸� �ѹ��� �����ϴ� �ڷ��� ����
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
	p2 = p; //���� ���簡 �ƴ� �ּҺ���

	p2->age = 30;
	printf("name: %s\n", p->name);
	printf("name: %d\n", p->age);
	printf("\n");


}