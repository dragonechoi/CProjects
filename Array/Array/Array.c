/*#include <stdio.h>
void main()
{
	int student[5];
	student[0] = 90;
	student[1] = 80;
	student[2] = 70;

	printf("ù ��° �л� ���� : %d\n", student[0]);
	printf("�� ��° �л� ���� : %d\n", student[1]);
	printf("�� ��° �л� ���� : %d\n", student[2]);
	printf("�� ��° �л� ���� : %d\n", student[3]);
	printf("�ټ� ��° �л� ���� : %d\n", student[4]);


}*/

/*#include <stdio.h>

void main()
{
	int array1[5] = { 90,80,70,60,50 };
	int array2[] = { 90,90,70,60,50 };
	int array3[5] = { 90,80,70 };

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[4]);

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[4]);

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[4] );
}*/

/*#include <stdio.h> //���� ������+��ձ��ϱ�
void main()
{

	int araay[3] = { 87 ,99, 80 };
	int total = 0;

	total = araay[0] + araay[1] + araay[2];
	printf("������ %d�̰�\n", total);
	printf("����� %.2lf�Դϴ�.", (double)total / 3);

}*/

/*#include<stdio.h> //�迭 ����� �� ���ϴ� ��
void main()
{
	int araay[3] = { 87,65,78 };
	int i, total = 0;

	for (i = 0; i < 3; i++) {
		total = total + araay[i];
		printf("�迭�� ��� araay[%d]��: %d\n",i, araay[i]);
	}
	printf("������ %d�̰�  \n", total);
	printf("����� %.2lf\n", (double)total / 3);
}*/

/*#include <stdio.h> //1���� �迭 �ּҰ�
void main()
{
	int array1[3] = { 1,2,3 };
	char array2[3] = { 'a','b','c' };

	printf("%p %p %p\n", &array1[0], array1[1], &array1[2]);
	printf("%p %p %p\n", &array2[0], array2[1], &array2[2]);
}*/

/*#include<stdio.h> //�������� 1��
void main()
{

	int student[10];
	int total = 0;
	printf("������ �Է��� ���հ� ����� ���϶�");
	

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &student[i]);
		total = total + student[i];
	}
	printf("����: %d\n", total);
	printf("���: %.2lf\n", (double)total / 10);
}*/

/*#include <stdio.h>
void main()
{
	double num1[5] = { 2.2,3.5,2.5,10.1,4.0 };
	double num2[5] = { 3.3,2.0,4.0,1.0,2.5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%lf * %lf=%lf\n", num1[i], num2[i], num1[i] * num2[i]);
	}
	
	


}*/

/*#include <stdio.h>
void main()
{
	//2���� �迭 ����
	int array[4][3];

	array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
	array[1][0] = 4; array[1][1] = 5; array[1][2] = 6;
	array[2][0] = 7; array[2][1] = 8; array[2][2] = 9;
	array[3][0] = 10; array[3][1] = 11; array[3][2] = 12;

	printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
	printf("%d %d %d\n", array[3][0], array[3][1], array[3][2]);
}*/

/*#include <stdio.h>
void main()
{
	//2���� �迭�� ����� ���ÿ� �� ������ ������ ����(�ʱ�ȭ)
	int array1[4][3] = { {1,2} ,{3},{4},{5} };
	int array2[4][3] = { {1,23} ,{456},{789},{10} };
	//2���� �迭 array1�� ������ ���
	printf("%d %d %d \n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%d %d %d \n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%d %d %d \n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%d %d %d \n", array1[3][0], array1[3][1], array1[3][2]);
	printf("-----------------\n");

	//2���� �迭 array2�� ������ ���
	printf("%d %d %d \n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%d %d %d \n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%d %d %d \n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%d %d %d \n", array2[3][0], array2[3][1], array2[3][2]);
}*/

/*#include <stdio.h>
void main()
//2���� �迭�� ����
{
	int array[2][2];
	int i, j;

	//2���� �迭�� ������ �Է�
	for (i = 0; i < 2; i++)
	{

	}


	for (j = 0; j < 2; j++) {
		printf("������ �Է��ϼ��� :");
		scanf_s("%d", &array[i][j]);
	}

	//2������ ������ ���

	for (i = 0; i < 2; i++) {

		for (j = 0; j < 2; j++)

			printf("%3d", array[i][j]);
	}

	printf("\n");



}*/


/*#include <stdio.h>
void main()
{
	int num[5];
	int total = 0;
	int max = 0;
	int min = 0;
	printf("���� �ټ����� �Է��� ���� �������\n");
	

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);

		total = total +num [i];
		if (max < num[i])
		{
			max = num[i];
		}
		
	}
	min = num[0];
	for (int j = 0; j < 5; j++)
	{
		
		if (min > num[j])
		{
			min = num[j];
		}
		
	}
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);

	printf("���� : %d\n", total);
		

}*/
/*����2.
���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� �Է� ���� ���ܾ��� ���̸� ���
�Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.���� �� "Array"��� �ܾ �ԷµǸ�
5�� ��µǾ�� �Ѵ�.(�Է¹��� �� �ִ� ���ܾ��� �ִ� ���ڼ��� 30������
	�ǵ��� �迭������ ũ�⸦ ��������.)*/
/*#include <stdio.h>
void main()
{
	char arry[30];
	int max = 0;
	
	printf("�ܾ �Է��� ����ڰ� ��µǾ����� Ȯ��\n");
	printf("�ܾ� �Է� : ");
	for (int i = 0; i < 30; i++)
	{
		
		scanf_s("%c", &arry[i],30);
		max++;
		if (max > arry[i])
		{
			
			max = arry[i];
		}
			if (arry[i] == 10)break;
		
			
	}max = max - 1;
	printf("ö�� ���� :%d\n", max);
	

}*/





/*#include <stdio.h>
void main()
{
	char word[30];
	int aci = 0;
	char max = 0;
	printf("���ڸ� �Է��� ����ū �ƽ�Ű ���� �˾ƺ���\n");

	for (int i = 0; i < 30; i++)
	{
		scanf_s("%c", &word[i], 30);
		if (word[i] == 10)break;
		if (word[i] > max)max = word[i];		
	}
	printf("�ִ밪 : %d\n", max);
}*/

/*#include <stdio.h>
void main()
{

}*/

/*#include<stdio.h>
void main()
{
	

	printf("�л��� �� �� �Է� �Ͻʽÿ� : ");
	scanf_s("%d";

}
*/


/*#include <stdio.h>
void main()
{
	int buf[5][5] = { 1 ,16,15,14,13
		,2,17,24,23,12,
		3,18,25,22,11
		,4,19,20,21,10,
		5,6,7,8,9};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%5d", buf[i][j]);
		}printf("\n");
	}
}*/



#include <stdio.h>
void main()
{


	int number;
	int score = 0;
	int sum = 0;
	double mean = 0; //����� �Ǽ��̸��� double��
	int i;
	printf("�л� ��: ");
	scanf_s("%d", &number);

	for (int i = 1; i <= number; i++) {
		
		if (printf("�л�%d�� ����:", i))
		scanf_s("%d", &score);
		sum += score;
		
	}
	mean = sum / number;
	printf("�л���: %d, ��� ����: %lf", number, mean); //double�� %lf
}

