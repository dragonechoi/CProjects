/*#include <stdio.h>
void main()
{
	int student[5];
	student[0] = 90;
	student[1] = 80;
	student[2] = 70;

	printf("첫 번째 학생 점수 : %d\n", student[0]);
	printf("두 번째 학생 점수 : %d\n", student[1]);
	printf("세 번째 학생 점수 : %d\n", student[2]);
	printf("네 번째 학생 점수 : %d\n", student[3]);
	printf("다섯 번째 학생 점수 : %d\n", student[4]);


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

/*#include <stdio.h> //점수 누적값+평균구하기
void main()
{

	int araay[3] = { 87 ,99, 80 };
	int total = 0;

	total = araay[0] + araay[1] + araay[2];
	printf("총점은 %d이고\n", total);
	printf("평균은 %.2lf입니다.", (double)total / 3);

}*/

/*#include<stdio.h> //배열 요소의 값 구하는 식
void main()
{
	int araay[3] = { 87,65,78 };
	int i, total = 0;

	for (i = 0; i < 3; i++) {
		total = total + araay[i];
		printf("배열의 요소 araay[%d]값: %d\n",i, araay[i]);
	}
	printf("총점은 %d이고  \n", total);
	printf("평균은 %.2lf\n", (double)total / 3);
}*/

/*#include <stdio.h> //1차원 배열 주소값
void main()
{
	int array1[3] = { 1,2,3 };
	char array2[3] = { 'a','b','c' };

	printf("%p %p %p\n", &array1[0], array1[1], &array1[2]);
	printf("%p %p %p\n", &array2[0], array2[1], &array2[2]);
}*/

/*#include<stdio.h> //연습문제 1번
void main()
{

	int student[10];
	int total = 0;
	printf("점수를 입력해 총합과 평균을 구하라");
	

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &student[i]);
		total = total + student[i];
	}
	printf("총합: %d\n", total);
	printf("평균: %.2lf\n", (double)total / 10);
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
	//2차원 배열 선언
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
	//2차원 배열의 선언과 동시에 행 단위로 데이터 저장(초기화)
	int array1[4][3] = { {1,2} ,{3},{4},{5} };
	int array2[4][3] = { {1,23} ,{456},{789},{10} };
	//2차원 배열 array1의 데이터 출력
	printf("%d %d %d \n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%d %d %d \n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%d %d %d \n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%d %d %d \n", array1[3][0], array1[3][1], array1[3][2]);
	printf("-----------------\n");

	//2차원 배열 array2의 데이터 출력
	printf("%d %d %d \n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%d %d %d \n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%d %d %d \n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%d %d %d \n", array2[3][0], array2[3][1], array2[3][2]);
}*/

/*#include <stdio.h>
void main()
//2차원 배열의 선언
{
	int array[2][2];
	int i, j;

	//2차원 배열에 데이터 입력
	for (i = 0; i < 2; i++)
	{

	}


	for (j = 0; j < 2; j++) {
		printf("정수를 입력하세요 :");
		scanf_s("%d", &array[i][j]);
	}

	//2차원의 데이터 출력

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
	printf("정수 다섯번을 입력해 값을 계산하자\n");
	

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
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);

	printf("총합 : %d\n", total);
		

}*/
/*문제2.
프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산
하여 출력하는 프로그램을 작성해보자.예를 들어서 "Array"라는 단어가 입력되면
5가 출력되어야 한다.(입력받을 수 있는 영단어의 최대 글자수가 30개까지
	되도록 배열변수의 크기를 선언하자.)*/
/*#include <stdio.h>
void main()
{
	char arry[30];
	int max = 0;
	
	printf("단어를 입력해 몇글자가 출력되었는지 확인\n");
	printf("단어 입력 : ");
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
	printf("철자 갯수 :%d\n", max);
	

}*/





/*#include <stdio.h>
void main()
{
	char word[30];
	int aci = 0;
	char max = 0;
	printf("문자를 입력해 가장큰 아스키 값을 알아보자\n");

	for (int i = 0; i < 30; i++)
	{
		scanf_s("%c", &word[i], 30);
		if (word[i] == 10)break;
		if (word[i] > max)max = word[i];		
	}
	printf("최대값 : %d\n", max);
}*/

/*#include <stdio.h>
void main()
{

}*/

/*#include<stdio.h>
void main()
{
	

	printf("학생의 수 를 입력 하십시오 : ");
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
	double mean = 0; //평균은 실수이르모 double형
	int i;
	printf("학생 수: ");
	scanf_s("%d", &number);

	for (int i = 1; i <= number; i++) {
		
		if (printf("학생%d의 성적:", i))
		scanf_s("%d", &score);
		sum += score;
		
	}
	mean = sum / number;
	printf("학생수: %d, 평균 성적: %lf", number, mean); //double은 %lf
}

