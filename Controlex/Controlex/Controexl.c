
#include <stdio.h>
void main()

{
	int num;
	printf("���� �Է� :");
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

		printf("������ �Է�:");
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
	 
	 printf("������ �� ���� �Է�:");
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
		printf("������ �Է� �Ͻÿ�(1�̸��� �Է� �Ұ�) :");
		scanf_s("%d %d %d %d %d", &i,&j,&d,&k,&p);
		
		while (i < 1)
		{
			printf("1�̻����� �� �Է� �ϼ��� : ");
			scanf_s("%d", &i);
			
			
			
		}
		
		j = +1;
		i++;
		int total = (i + j +d+k+p);
		printf("��� ��:%d \n", total);
 }





}

#include <stdio.h>
void main()

{
	int num1, num2,i=0;
	double total;

	printf("��� ������ ��� �Ͻðڽ��ϱ� :");
	scanf_s("%d", &num1);
	while (i <num1 ) {
		printf("�����Է� : ");
		scanf_s("%d", &num2);
		total = +num1;
		num=0;
		i++;

	}
	printf("��� :%.2lf", total/num1);
}

#include <stdio.h>
void main()
{
	int a = 0, b = 0;
	int result = 0;

	printf("�ΰ��� ������ �Է� �Ͻÿ�:");
	scanf_s("%d %d", &a, &b);

	if (a < b)
		result = a - b;
	else(b < a);
	result = b - a;
	printf("�����:%d", a - b);
	

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

//2 4 6 8�� ������ �ϵ� break�� continue ����ؼ� 2 * 2 4 * 4 6 * 6 8 * 8������ ������

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

 // # ���ǹ� �����ڷ�

#include <stdio.h>
void main()

{
	int num;

	printf("���ڸ� �Է��ϼ��� :");
	scanf_s("%d", &num);


	if (num >= 0);
	printf("��� �Դϴ�.\n");

	if (num < 0)
		printf("���� �Դϴ�.\n");


}

#include <stdio.h>

void main()
{

	int num;
	printf("5�� ��� ");
	for (num = 1; num <= 100; num++) {

		if (num % 5 == 0)
			printf("%3d", num);

	}
}

#include <stdio.h>
void main()

{

	int age;

	printf("���� �Է�:");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
		printf("ȸ�� ������ ���� �մϴ�.");

	else(age <= 15 && age <= 100); {
		printf("ȸ�� ������ �Ұ��� �մϴ�.\n");
	}
		// �����Ͽ��� ���� �˸��� �� �Ұ������� ���� ���� ���� printf("���α׷��� ���� �մϴ�.\n");
}

#include<stdio.h>
void main()
{

	int num;

	printf("�����Է� : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("0�� ū ���� num�� ���� \n");

	else if (num == 0)
		printf("0�� num�� ����\n");

	else
		printf("0���� ���� ���� num�� ���� \n");
}

#include <stdio.h>

void main()
{

	int num;

	printf("C��� ���� �Է� :");
	scanf_s("%d", &num);

	if (num >= 95)
		printf("A+���� �Դϴ�.");

	else
		
		if (num >= 90) {
			printf("A���� �Դϴ�.");
		}
		else
		{
			if (num >= 85)
				printf("B+���� �Դϴ�.");
			else {
				if (num >= 80)
					printf("B���� �Դϴ�.");
				else
					printf("F���� �Դϴ�.");
			}
		}*


	 
	

	

	

}