//#���� 1
//#include <stdio.h>
//
//void login(); //�Լ��� ������ Ÿ��
//
//void aaa();
//
//void bbb();
//
//void main()
//{
//	login();//�Լ� ȣ��
//	printf("main..\n");
//	aaa();
//	bbb();
//}
//
//
//void login()
//{
//	printf("�α��� ���1\n");
//	printf("�α��� ���2\n");
//
//}
//void aaa()
//{
//	printf("aaa\n");
//}
//void bbb()
//{
//	printf("�α��� ���\n");
//}
////����Ÿ�� �Լ� �̸� (�Ķ����)
//// {int char float double �� ���°�
////���� ����� �ڵ��
//// }
//
//
//#����2
//
//#include <stdio.h>
//void display();
//
//void main()//����
//{
//
//	display();
//	display();
//}
//
////����x �Ķ����x
////�ܼ� ��¸� �ϴ� ��� (�Լ�)
//
//void display() //���� ��û��ü
//{
//	printf("Hello android");
//}
//
//#����(���� ����) + (���� ����)
//
//#include <stdio.h>
//
//
//void main()
//{
//	int num = 10;    // �ѽ��и� ��� ()
//	display();
//}
//
//void display()
//{
//
//	printf("num : %d\n", num);
//}
//
//# �Ķ���� ��� ����
//
//#include <stdio.h>
//
//void display();
//
//void main()
//{
//	int num = 10;
//	display(num);
//}
//
//void display(int n)// <�Ķ���Ͱ� �ִ�
//{
//
//	printf("num : %d\n", n);
//}
//
//
//#�Ķ���� ����2
//
//
//#include <stdio.h>
//
//void display(int n, int a);//�Ķ���� ������ ��û ���� �̸��� �Ȱ��� �ٲ��־����
//
//void main()
//{
//	int num = 10;
//	int age = 25;
//	display(num, age);
//}
//
//void display(int n, int a)// <�Ķ���Ͱ� �ִ�
//{
//
//	printf("num : %d\n", n);
//	printf(" age : %d\n", a);
//}
//
//#�Ķ���� ��뿹�� 2
//
//#include <stdio.h>
//
//void display(int n, int a);//�Ķ���� ������ ��û ���� �̸��� �Ȱ��� �ٲ��־����
//
//void main()
//{
//	int num = 10;
//	int age = 25;
//
//	display(num, age);
//}
//
//void display(int n, int age)// <�Ķ���Ͱ� �ִ� 
//{                            //�����ڵ��� ���� �̸� �� ��� �� ��ȣ
//
//	printf("num : %d\n", n);
//	printf(" age : %d\n", age);
//}
//
//
//#�Ķ���� ����
//
//#include <stdio.h>
//
//void display(int n, int age, double aver, double ddd, int a, char c);//�Ķ���� ������ ��û ���� �̸��� �Ȱ��� �ٲ��־����
//
//void main()
//{
//	int num = 10;
//	int age = 25;
//	double aver = 75.3;
//	double ddd = 3.14;
//
//	display(num, age, aver, ddd, 100 + 3, 'g'); //�ڷ� �뵵 ������� /������ �Ի��� �ؼ��� �����Ⱑ ����
//}
//
//void display(int n, int age, double aver, double ddd, int a, char c)// <�Ķ���Ͱ� �ִ� 
//{                            //�����ڵ��� ���� �̸� �� ��� �� ��ȣ
//
//	printf("num : %d\n", n);
//	printf(" age : %d\n", age);
//	printf(" ��� :%lf\n", aver);
//	printf("")
//}
//
//#���� �Լ� ����
//
//#include <stdio.h>
//int aaa();
//void main()
//{
//	int n;
//	n = aaa(); //*ȣ���� �Լ��� ��� ���� �����ϴ°� 
//	//���� ������ ���� n=aaa() �� ���Խ�Ű�°� ��ȣ
//// �Լ��� return���� �����ٷ� �������� ������ ���� 
//
//
//	printf("%d", n);
//}
//
//int aaa()
//
//{
//	printf("aaa\n");
//	return 100;
//}
//
//
//## ? ?
//
//#include <stdio.h>
//int input(int n); int getmax(int a, int b);
//void main()
//{
//	int num;
//	int num2;
//	//�Է� ����� ���� �Լ��� ȣ�� �Ͽ� �Է°��� num������ �ֱ�����
//	num = input();
//
//	printf("num : %d \n", num);
//	printf("num : %d \n", num);
//	getmax(num, num2);
//	printf("ū�� :%d \b", num);
//}
////���޹��� 2���� �����߿��� ū���� �����ִ� ��� �Լ�
//int getmax(int a, int b)
//{
//	int max;
//	if (a > b)max = a;
//
//	else(b > a); max = b;
//
//}
//
//
//int input()//�Ű� ����
//{
//	int n; //���� ����
//	printf("input : ");
//	scanf_s("%d", &n);
//	return n;
//}
//
//#��ɵ�
//#include<stdio.h>
//void main()
//{
//	printf("����ڷκ��� 2���� ������ �Է¹޾� �����ϴ� ���α׷�\n");
//	int a, b;
//	printf("input : ");
//	scanf_s("%d", &a);
//
//
//	printf("input : ");
//	scanf_s("%d", &b);
//	int c = a + b;
//	printf("%d + %d = %d", a, b, a + b);
//
//
//}
//
//
//
//
//
//#���� ����
//
//
//
//#include<stdio.h>
//void display();
//int input();
//int sum(int x, int y);
//void output(int x, int y, int z);
//void main()
//{
//	//1. �ȳ����� ��� �Լ� ȣ��
//	display();
//	//2. ����ڷκ��� ���� 2�� �Է¹޴� ��� (�Լ�) ���(ȣ��)
//	int a, b;
//	a = input();
//	b = input();
//	//3 2���� �������� �����Ͽ� ����� �ִ� ��� ���
//
//	int c = sum(a, b);
//	// 4��� ��� �� ���
//	output(a, b, c);
//}
//
//void output(int x, int y, int z)
//{
//
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//
//int input()
//{
//	int n;
//	printf("����ڷκ��� 2���� ������ �Է� �޾� �����ϴ� ���α׷�\n\n");
//	scanf_s("%d", &n);
//}
//
//void display()
//{
//
//}
//
//
//
//#��û ����
//
//
//#include<stdio.h>
//
//void kkk() {
//	int a = 10;
//	int b = 20;
//	return a;//�Ķ���� ���� ������ �ϳ��ۿ� �����Ҽ����� 
//}
//
//int ddd()
//{
//	return 5;
//}
//
//int ccc()
//{
//	return 100 + ddd();//ddd�� ������� �ҷ����� ��
//}
//
//
//void bbb()
//{
//	int k = ddd();
//	int n = ccc();
//	printf("bbb : %d\n", n);
//}
//
//
//
//void aaa()
//{
//	printf("aaa\n");
//	bbb();
//	printf("zzzz\n");
//}
//
//
//void main()
//{
//
//	aaa();
//	bbb();
//	ccc();
//
//}
//
//
//#������ ����
//
//#include <stdio.h>
//void main()
//
//{
//	int a; //��������
//
//	a = 10; //ok
//	k = 200 / error
//}
//
//void aaa()
//{
//	int k;//���� ����
//	k = 20; //ok
//	a = 100;//error
//}
//
//#
//���� ���� Ȱ���ؼ� �������
//
//
//
//#include <stdio.h>
//
//int g;//���� ����
//
//void main()
//
//{
//	int a; //��������
//
//	a = 10; //ok
//	//k = 200/error
//	g = 100;
//	printf("g : %d\n", g);
//}
//
//void aaa()
//{
//	int k;//���� ����
//	k = 20; //ok
//	//a = 100;//error
//	g = 200;
//	printf("g:%d\n", g);
//}
//
//# ���������� ����
//
//#include <stdio.h>
//
//void aaa();
//int num; //��� �ϰ� �Ǹ� �޸𸮸� ��ȿ�� ������ �����
//void main()
//{
//	num = 10;
//	aaa();
//
//}
//
//void aaa()
//{
//	printf("num : %d \n", num);
//}
//
//
//
//#
//
//
//#include <stdio.h>
//
//void aaa()
//{
//
//}
//int g;                 //�ۿ� ����Ҽ� �ִ°� ������         �� int j=10;
////������ ������ ���� �ȿ����� ���� ������ �ʱ�ȭ���� ����
////������ �������� ��  ���� ���� 0�� ����
////���������� ��𼭵� �˾Ƶ����� �ִ� ����
//void main()
//{
//
//}
//
//#���� �켱����
//
//
//
//#include <stdio.h>
//int g = 10; // ���� ������  ���������� ������  ���������� �켱�õ�
//
//void aaa()
//{
//	printf("main : %d\n", g);
//
//}
////�ۿ� ����Ҽ� �ִ°� ������
//		//������ ������ ���� �ȿ�����
//void main()
//{
//
//	printf("aaa :%d\n", g);
//	aaa();
//}
//
//#���� ��������& ���� ��������
//
//#include <stdio.h>
//static int g; //���� ���� ���� 
//void main()
//{
//	static int g = 200;//���� ����    //static ������ ������ ��ģ ��������
//	// ���� ���� ���� ���� ���� ������ ��� 
//	//Ȥ���� ���� �������� ����ҋ����� Ǯ�������� ����
//	//  ���� ���� ���� ����ҋ� ����&������ ����.
//}
//
//
//#���� ���� ����
//
//
//#include <stdio.h>
//void aaa()
//{
//	static int num = 10;// ������ �ۿ� ������ 
//	num++;
//	printf("num : %d\n", num);
//}
//void main()
//{
//	aaa();
//	aaa();
//	aaa();
//	aaa();
//	aaa();
//	aaa();
//	aaa();
//	aaa();
//
//}
//
//���� �������� Ȱ���
//
//
//
//#include <stdio.h>
//void aaa()
//{
//	static int count = 0;
//	count++;
//	printf("aaa�Լ� ȣ�� :%d ����\n ", count);
//}
//
//
//void bbb()
//{
//	static int count = 0;
//	count++;
//	printf("bbb�Լ� ȣ�� :%d ����\n ", count);
//
//}
//void main()
//{
//	aaa();
//	bbb();
//	aaa();
//	bbb();
//}
//
//
//# ��� ȣ��
//
//
//#include <stdio.h>
//
//void aaa()
//{
//	printf("aaa\n");
//	aaa(); //��� ȣ��
//
//}
//
//
//void main()
//{
//	aaa();
//
//
//}
//
//
//# 
//
//
//
//
//
//
//
//
//#include <stdio.h>
//
//void aaa(int n)
//{
//	if (n <= 0) return;;
//	printf("aaa\n");
//	aaa(n - 1); //��� ȣ��  //���ѷ��������� 
//	//�ü���� ���峪������ ����� ��Ʃ������� ���� ����
//
//
//}
//
//
//void main()
//{
//	aaa(4);
//
//
//}
//
//
//#��Ŀ�ú� ��
//
//#include <stdio.h>
//
//void aaa(int n)
//{
//	if (n <= 0) return;;
//	printf("aaa\n");
//	aaa(n - 1); //��� ȣ��  //���ѷ��������� 
//	printf("kkk\n");        //�ü���� ���峪������ ����� ��Ʃ������� ���� ����
//
//
//}
//
//
//void main()
//{
//	aaa(4);
//	printf("main ���� \n");
//
//}
