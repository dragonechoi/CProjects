/*#include <stdio.h>
int sum(int x, int y)
{
	int result=x+y;
	return result;
}

void main()
{
	int answer = 0;
	answer = sum(3, 4);
	printf("%d\n", answer);

}




#include <stdio.h>
int max(int a ,int b) 
{
	if (a > b)
		return a;
	else
		return b;
}

void main()
{
	int i, j;
	int k;
printf("���ڸ� �� �� �Է��ϼ��� : ");
	scanf_s("%d %d", &i, &j);

	k= max(i, j);
	printf("%d�� %d �� ū ���� %d�Դϴ� \n", i, j, k);
}

#include <stdio.h>
double divide(double x, double y);
double input(void);
void output(double x);
void information(void);

void main()
{
	double num1, num2, result;
	
	information();
	printf("ù��° �Ǽ��� �Է� : ");
	num1 = input();

	printf("�ι�° �Ǽ��� �Է� : ");
	num2 = input();

	result = divide(num1, num2);
	output(result);

}


double divide(double x, double y)
{
	double val;
	val = x / y;
	return val;
}

double input(void)
{
	double val;
	scanf_s("%lf\n", &val);
	return val;

}

void output(double x)
{
	printf("������ ��� : %lf \n",x);
	return;

}
void information(void)
{
	printf("---���α׷� ����---\n");
	return;
}

#include <stdio.h>
int sum(void);
int input(void);
void output(int x);

void main()
{
	int result;
	printf("---���α׷� ����---\n");
	printf("���� �Ѱ��� �Է� �ϼ��� :");

	result = sum();
	output(result);

}

int sum(void)
{
	int i = 0, total = 0, num = 0;
	num = input();
	
	for (i = 1; i <= num; i++)
	{
		total = total + i;
	}
	return total;
}

int input(void)
{
	int val;
	scanf_s("%d", &val);
	return val;

}
void output(int x)
{
	printf("��� :%d \n", x);
	return;
}

#include <stdio.h>
void func_A(void);

void main()
{
	int aaa = 10;
	printf("main( ) �Լ��� aaa�� : %d \n", aaa);

	func_A();
}
void func_A(void)
{
	int aaa = 20;
	int bbb = 30;

	printf("func_A( )�Լ���aaa�� :%d\n", aaa);
	printf("func_A( )�Լ���bbb�� :%d \n", bbb);
	return;
}
#include <stdio.h>
void main()
{
	int i = 0;
	int total=0;

	for (i = 1; i < 3; i++)
	{
		int total = 0;
		total = total + i;
				
		if (total < 10)
		{
			printf("total���� : %d �Դϴ�\n",total);
		}
		
	}

	
}

#include <stdio.h>
int subtract(int x, int y);

void main()
{
	int a = 5, b = 3;
	int result = 0;

	result = subtract(a, b);
	printf("�E����� :%d ", result);

}
int subtract(int x, int y)
{
	return x-y;
}
#include <stdio.h>
int num;
void grow(void);

void main()
{

	printf("�Լ� ȣ���� num : %d\n", num);
   
	grow();

	printf("�Լ�ȣ�� �� num : %d\n", num);

}
void grow(void)
{
	num = 60;
}

#include <stdio.h>
int factorial(int n);

void main()

{
	int a;
	int result;

	printf("������ �Է� :");
	scanf_s("%d", &a);

	result = factorial(a);
	printf("%d ���丮���� : %d �Դϴ�.\n", a,result);

}
int factorial(int n)
{
	if (n < 1)
		return 1;
	else
		return n * factorial(n - 1);
}*/

/*#include <stdio.h>


void abs(int n);

void main()
{ 
	int n;

	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &n);
	
	abs(n);
	
}
void abs(int n)
{
	
	if (n < 0)
		n =-n;
	printf("���밪�� :%d�Դϴ�\n", n);
}*/

/*#include <stdio.h>
void F(int n);

void main()
{
	F(12);

}
void F(int n)
{
	int a = 1, b = 0,c=1 , i;

	for (i = 0; i < 12; i++)
	{
		printf("%d\n", a);
		b = a + c;//a+c���� ���� b���� �����ϰ�
		a = c;// c���� a�� ��ġ
		c = b;//�ᱹ�� c�� �ջ��� �������b��


	}
	printf("\n");
}*/

/*#include <stdio.h>



void add(int n1, int n2);

void sub(int n1, int n2);

void mul(int n1, int n2);

void div(int n1, int n2);



int main()

{

	int n1, n2;



	printf("��Ģ������ �� ���� �Է� : ");

	scanf_s("%d %d", &n1, &n2);



	add(n1, n2);

	sub(n1, n2);

	mul(n1, n2);

	div(n1, n2);



	

}



void add(int n1, int n2)

{

	printf("���ϸ� %d\n", n1 + n2);

}

void sub(int n1, int n2)

{

	printf("���� %d\n", n1 - n2);

}

void mul(int n1, int n2)

{

	printf("���ϸ� %d\n", n1 * n2);

}

void div(int n1, int n2)

{

	printf("������ %d\n", n1 / n2);

}*/

#include<stdio.h>
int getarea(int x, int y);




/*void main()
{
	int base,hight;
	printf("�簢���� �غ��� ���� �Է� :");
	scanf_s("%d %d", &base, &hight);

	getarea(base,hight);
}

int getarea(int x, int y)
{
	
	printf(" �簢���� ����= %d", x * y);
}*/

/*#include <stdio.h>
int sum(int n);

void main() 
{
	int n;
	printf("in put your number: ");
	scanf_s("%d", &n);

	printf("1���� %d������ �� : %d\n", n, sum(n));
		
}
int sum(int n)
{

	if (n == 1)return 1;
	else
		return(n + sum(n - 1));
	
}*/
