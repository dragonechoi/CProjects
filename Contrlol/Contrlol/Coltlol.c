//#include<stdio.h>
//void main()
//{
//	int num;
//	printf("숫자를 입력하세요 :");
//	scanf_s("%d", &num);
//	
//
//	if (num >= 0)
//		printf("양수입니다.\n");
//
//	if (num < 0)
//		printf("음수입니다.\n");
//
//
//}

// #include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("5의 배수 : ");
//	for (num = 1; num <= 100; num++);
//	{
//		if (num%5 == 0)
//		printf("%3d", num);
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int age;
//
//	printf("나이 입력");
//	scanf_s("%d", &age);
//
//	if (age >= 15 && age <= 100)
//	
//		printf("회원 가입이 가능합니다.\n");
//
//	else
//		printf("회원가입이 불가능 합니다.\n");
//	
//	
//
//}
//#include <stdio.h>
//void main()
//{
//	int num;
//	printf("숫자입력 : ");
//	scanf_s("%d", &num);
//
//	if (num > 0)
//		printf("0보다 큰 수가 num에 저장\n");
//
//	else
//		printf("0또는 0보다 적운 슈거 num에 저장\n");
//}

//#include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("숫자입력");
//	scanf_s("%d", &num);
//
//	if (num > 0)
//		printf("0보다 큰 수가 num에 저장\n");
//
//	else
//		printf("0보다 작은 수가 num에 저장\n");
//
//}

//#include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("C언어 성적 입력 : ");
//	scanf_s("%d", &num);
//	if (num >= 95)
//		printf("A+입니다\n");
//
//	else {
//
//		if (num >= 90)
//			printf("A입니다.\n");
//
//		else {
//			if (num >= 85)
//				printf("B+입니다. \n");
//			
//			else
//			{
//				if (num >= 80)
//					printf("B+입니다. \n");
//				else {
//					printf("F입니다\n");
//				}
//			}
//		}
//	}
//}


//#include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("C언어 성적 입력 :");
//	scanf_s("%d", &num);
//
//	if (num >= 95)
//		printf("A+입니다.\n");
//	else if (num >= 90)
//		printf("A입니다.\n");
//	else if (num >= 85)
//		printf("B+입니다\n");
//	else if (num >= 80)
//		printf("B입니다\n");
//
//	else
//		printf("F입니다.\n");
//}
//
//#include <stdio.h>
//void main()
//{
//
//	int num;
//
//	printf("C언어 성적 입력 :");
//	scanf_s('%d',& num);
//
//	      if(num>=95)
//		printf("A+입니다.\n");
//
//		  if (num >= 90)   // else if(num>=90)
//		printf("A입니다.\n");
//
//		  if (num >= 85)	   //else if(num>=85)
//			printf("B+입니다.\n");
//			
//		  if (num >= 80) //else if(num>=80)
//				   printf("B입니다.\n");
//		  else                         //else
//			printf("F입니다.\n");
//} 

//#include <stdio.h>
//void main()
//
//{
//	int num;
//
//	printf("몇 번 스위치를 누르시겠습니까?");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("전등이 켜짐 \n");
//		break;
//	case 2:
//		printf("전등이 꺼짐 \n");
//		break;
//	case 3 :
//		printf("전등이 켜짐 \n");
//		break;
//
//	default:
//		printf("스위치 오류 : 우리집 스위치는 1번 ~ 3번까지만 있습니다 \n");
//
//	}
//}



//#include <stdio.h>
//void main()
//
//{
//
//	char ch;
//
//	printf("(H)ursday. (F)riday (S)aturday)\n");
//	printf("문자입력 (T,F,S) : ");
//	scanf_s("%c", &ch);
//
//	switch (ch)
//	{
//	case 'T':
//	case't':
//		printf("Thursday\n");
//		break;
//	
//	case'F':
//	case'f':
//		printf("Friday\n");
//		break;
//
//	case'S':
//	case's':
//		printf("Saturday\n");
//		break;
//
//	default:
//		printf("잘못입력 하셨습니다.\n");
//	}
//		
//	
//	}


//#include <stdio.h>
//void main()
//
//{
//
//	int num;
//
//	for (num = 0; num < 101; num++)
//	{
//		if (num % 2 == 1)
//			continue;
//
//		printf("%d \n", num);
//
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int a;
//	a; 4;
//	printf ("두 개의 정수를 입력하시오 :");
//	scanf_s("%d ", &a );
//
//	if (a <= 6)
//		printf("큰 수는 6입니다.");
//}

//#include <stdio.h>
//void main()
//{
//	int num;
//	int b;
//	 
//	printf("두개의 정수를 입력 하시오: ");
//	scanf_s("%d %d", &num,&b);
//
//	if (num == b)
//		printf("두 수는 같습니다\n");
//
//}

//#include <stdio.h>
//void main()
//{
//
//	int num;
//
//	printf("3자리 십진수를 입력하세요 :");
//	scanf("%d", &num);
//
//	if (num <= 10) {
//		printf("짝수:%d",num)
//
//	
//}


#include