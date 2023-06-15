
#include <stdio.h>
void main()

{
	int num;
	printf("정수 입력 :");
	scanf_s("%d",&num);
	
	int i;
	for (i = 0; i < num; i++) 
	{
		printf("hello world\n");

	}
	

	


}


#include <stdio.h>

void main()
{
	int dan;
	int i;
	for (int dan = 1; dan < 100; dan++)

	{
		if (dan % 2 == 1);
		
for (int i = 1; i < 100; i++)
			printf("%d * %d=%d\n", dan, i, dan * i);
	}
	
	printf("\n");
	
}


#include <stdio.h>;

void main()
{
	int dan;
	int i = 9;
	scanf_s("%d", &dan );
	
	while (i>=0) {

		printf("%d * %d = %d\n",dan,i,dan*i);

		i--;


	}

}






#include <stdio.h>
void main()
{
	int i = 0;
	int num;
	int total = 0;

	while (i < 3) {

		printf("정수를 입력:");
		scanf_s("%d", &num);
		
		total = total + num;
	i++;
		
	}
	printf("%d", total);
}


#include <stdio.h>
void main()

{
	int i = 1;
	while (i < 10) {
		printf("%d\n", i);

		int j = 1;
		while (j < 10) {
			printf("% d * %d = %d", i, j, i * j);
			j++;

		}
		printf("\n");
		i++;
	}
}

#include <stdio.h>



 void main()
 {
	 int dan = 9, num;
	 
	 printf("구구단 할 숫자 입력:");
	 scanf_s("%d", &num);

	 while (dan > 0) {
		 
			 printf("%d * %d= %d", dan, num, num*dan );
			 dan--;
		 }
		 
	
	 	

}


}


#include <stdio.h>
void main()
{
	int i = 0, j = 0 ,d=0 ,k=0,p=0; 
	
	
	
	while (i < 5) 
	{
		printf("정수를 입력 하시오(1미만은 입력 불가) :");
		scanf_s("%d %d %d %d %d", &i,&j,&d,&k,&p);
		
		while (i < 1)
		{
			printf("1이상으로 재 입력 하세요 : ");
			scanf_s("%d", &i);
			
			
			
		}
		
		j = +1;
		i++;
		int total = (i + j +d+k+p);
		printf("결과 값:%d \n", total);
 }





}

#include <stdio.h>
void main()

{
	int num1, num2,i=0;
	double total;

	printf("몇개의 정수로 출력 하시겠습니까 :");
	scanf_s("%d", &num1);
	while (i <num1 ) {
		printf("정수입력 : ");
		scanf_s("%d", &num2);
		total = +num1;
		num=0;
		i++;

	}
	printf("평균 :%.2lf", total/num1);
}

#include <stdio.h>
void main()
{
	int a = 0, b = 0;
	int result = 0;

	printf("두개의 정수를 입력 하시오:");
	scanf_s("%d %d", &a, &b);

	if (a < b)
		result = a - b;
	else(b < a);
	result = b - a;
	printf("결과값:%d", a - b);
	

}
#include <stdio.h>
void main()
{
	int i = 0;
	int j;

	while (i < 5) {
		j = 0;

		while (j < i) {

			printf("o");
			j++;
		}

		printf("\n");
		i++;

	}


}

//2 4 6 8만 나오게 하되 break나 continue 사용해서 2 * 2 4 * 4 6 * 6 8 * 8까지만 나오게

#include <stdio.h>
void main()
{
	int i, j;

	for (i = 1; i < 9; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		for (j = 1; j < 10; j++)
		{
			if (i < j)
			{
				break;
			}
			printf("%dX%d=%d\n", i, j, i * j);
		}
	}

	
}

 // # 조건문 예제자료

#include <stdio.h>
void main()

{
	int num;

	printf("숫자를 입력하세요 :");
	scanf_s("%d", &num);


	if (num >= 0);
	printf("양수 입니다.\n");

	if (num < 0)
		printf("음수 입니다.\n");


}

#include <stdio.h>

void main()
{

	int num;
	printf("5의 배수 ");
	for (num = 1; num <= 100; num++) {

		if (num % 5 == 0)
			printf("%3d", num);

	}
}

#include <stdio.h>
void main()

{

	int age;

	printf("나이 입력:");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
		printf("회원 가입이 가능 합니다.");

	else(age <= 15 && age <= 100); {
		printf("회원 가입이 불가능 합니다.\n");
	}
		// 응용하여서 종료 알림및 왜 불가능한지 까지 설명 가능 printf("프로그램을 종료 합니다.\n");
}

#include<stdio.h>
void main()
{

	int num;

	printf("숫자입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("0이 큰 수가 num에 저장 \n");

	else if (num == 0)
		printf("0이 num에 저장\n");

	else
		printf("0보다 적은 수가 num에 저장 \n");
}

#include <stdio.h>

void main()
{

	int num;

	printf("C언어 성적 입력 :");
	scanf_s("%d", &num);

	if (num >= 95)
		printf("A+학점 입니다.");

	else
		
		if (num >= 90) {
			printf("A학점 입니다.");
		}
		else
		{
			if (num >= 85)
				printf("B+학점 입니다.");
			else {
				if (num >= 80)
					printf("B학점 입니다.");
				else
					printf("F학점 입니다.");
			}
		}*


	 
	

	

	

}