//#include<stdio.h>
//void main()
//{
//	int num;
//	printf("���ڸ� �Է��ϼ��� :");
//	scanf_s("%d", &num);
//	
//
//	if (num >= 0)
//		printf("����Դϴ�.\n");
//
//	if (num < 0)
//		printf("�����Դϴ�.\n");
//
//
//}

// #include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("5�� ��� : ");
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
//	printf("���� �Է�");
//	scanf_s("%d", &age);
//
//	if (age >= 15 && age <= 100)
//	
//		printf("ȸ�� ������ �����մϴ�.\n");
//
//	else
//		printf("ȸ�������� �Ұ��� �մϴ�.\n");
//	
//	
//
//}
//#include <stdio.h>
//void main()
//{
//	int num;
//	printf("�����Է� : ");
//	scanf_s("%d", &num);
//
//	if (num > 0)
//		printf("0���� ū ���� num�� ����\n");
//
//	else
//		printf("0�Ǵ� 0���� ���� ���� num�� ����\n");
//}

//#include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("�����Է�");
//	scanf_s("%d", &num);
//
//	if (num > 0)
//		printf("0���� ū ���� num�� ����\n");
//
//	else
//		printf("0���� ���� ���� num�� ����\n");
//
//}

//#include <stdio.h>
//void main()
//{
//	int num;
//
//	printf("C��� ���� �Է� : ");
//	scanf_s("%d", &num);
//	if (num >= 95)
//		printf("A+�Դϴ�\n");
//
//	else {
//
//		if (num >= 90)
//			printf("A�Դϴ�.\n");
//
//		else {
//			if (num >= 85)
//				printf("B+�Դϴ�. \n");
//			
//			else
//			{
//				if (num >= 80)
//					printf("B+�Դϴ�. \n");
//				else {
//					printf("F�Դϴ�\n");
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
//	printf("C��� ���� �Է� :");
//	scanf_s("%d", &num);
//
//	if (num >= 95)
//		printf("A+�Դϴ�.\n");
//	else if (num >= 90)
//		printf("A�Դϴ�.\n");
//	else if (num >= 85)
//		printf("B+�Դϴ�\n");
//	else if (num >= 80)
//		printf("B�Դϴ�\n");
//
//	else
//		printf("F�Դϴ�.\n");
//}
//
//#include <stdio.h>
//void main()
//{
//
//	int num;
//
//	printf("C��� ���� �Է� :");
//	scanf_s('%d',& num);
//
//	      if(num>=95)
//		printf("A+�Դϴ�.\n");
//
//		  if (num >= 90)   // else if(num>=90)
//		printf("A�Դϴ�.\n");
//
//		  if (num >= 85)	   //else if(num>=85)
//			printf("B+�Դϴ�.\n");
//			
//		  if (num >= 80) //else if(num>=80)
//				   printf("B�Դϴ�.\n");
//		  else                         //else
//			printf("F�Դϴ�.\n");
//} 

//#include <stdio.h>
//void main()
//
//{
//	int num;
//
//	printf("�� �� ����ġ�� �����ðڽ��ϱ�?");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("������ ���� \n");
//		break;
//	case 2:
//		printf("������ ���� \n");
//		break;
//	case 3 :
//		printf("������ ���� \n");
//		break;
//
//	default:
//		printf("����ġ ���� : �츮�� ����ġ�� 1�� ~ 3�������� �ֽ��ϴ� \n");
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
//	printf("�����Է� (T,F,S) : ");
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
//		printf("�߸��Է� �ϼ̽��ϴ�.\n");
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
//	printf ("�� ���� ������ �Է��Ͻÿ� :");
//	scanf_s("%d ", &a );
//
//	if (a <= 6)
//		printf("ū ���� 6�Դϴ�.");
//}

//#include <stdio.h>
//void main()
//{
//	int num;
//	int b;
//	 
//	printf("�ΰ��� ������ �Է� �Ͻÿ�: ");
//	scanf_s("%d %d", &num,&b);
//
//	if (num == b)
//		printf("�� ���� �����ϴ�\n");
//
//}

//#include <stdio.h>
//void main()
//{
//
//	int num;
//
//	printf("3�ڸ� �������� �Է��ϼ��� :");
//	scanf("%d", &num);
//
//	if (num <= 10) {
//		printf("¦��:%d",num)
//
//	
//}


#include