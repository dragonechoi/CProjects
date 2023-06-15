#include <stdio.h>

void main()
//{
//	//사용자로 부터 2개의 정수를 입력받기
//	printf("2개의 정수를 입력하면 덧셈결과를 알려주는 프로그램 입니다. \n\n");
//
//	printf("정수 입력 : ");
//	
//	int a; 
//	int b;
//	scanf_s("%d",&a);
//	
//	printf("정수 입력 : ");
//	scanf_s("%d", &b);
//	//사용자로 부터 2개의 정수를 입력받아서 두 수를 덧샘 해주기
//	
//	
//
//	int c;
//	c = a + b;
//	printf("\n");
//	printf(" %d + %d = %d \n",a,b,c);
//
 //사용자로 부터 원하는 구구단의 단수를 입력받아 구구단 출력

{
	printf("\n구구단 출력프로그램\n\n");

	int dan = 0;


	printf("단수 입력 :");
	scanf_s("%d",dan );

	printf("\n");
	printf(" %d * %d =%d\n", dan, 1, dan * 1);
	printf(" %d * %d =%d\n", dan, 2, dan * 2);
	printf(" %d * %d =%d\n", dan, 3, dan * 3);
	printf(" %d * %d =%d\n", dan, 4, dan * 4);
	printf(" %d * %d =%d\n", dan, 5, dan * 5);
	printf(" %d * %d =%d\n", dan, 6, dan * 6);
	printf(" %d * %d =%d\n", dan, 7, dan * 7);
	printf(" %d * %d =%d\n", dan, 8, dan * 8);
	printf(" %d * %d =%d\n", dan, 9, dan * 9);
}

  //scanf 명령하나에 여러개의  변수값 입력받기 
	/*int a, b;


	scanf_s("%d%d", &a, &b);


	printf(" a: %d \n", a);
	printf(" b: %d \n", a);*/

