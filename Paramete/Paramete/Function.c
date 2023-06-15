//#예시 1
//#include <stdio.h>
//
//void login(); //함수의 프로토 타입
//
//void aaa();
//
//void bbb();
//
//void main()
//{
//	login();//함술 호출
//	printf("main..\n");
//	aaa();
//	bbb();
//}
//
//
//void login()
//{
//	printf("로그인 기능1\n");
//	printf("로그인 기능2\n");
//
//}
//void aaa()
//{
//	printf("aaa\n");
//}
//void bbb()
//{
//	printf("로그인 기능\n");
//}
////리턴타입 함수 이름 (파라미터)
//// {int char float double 등 쓰는거
////독립 기능의 코드들
//// }
//
//
//#예시2
//
//#include <stdio.h>
//void display();
//
//void main()//본사
//{
//
//	display();
//	display();
//}
//
////리턴x 파라미터x
////단순 출력만 하는 기능 (함수)
//
//void display() //대전 하청없체
//{
//	printf("Hello android");
//}
//
//#영역(지역 변수) + (오류 예제)
//
//#include <stdio.h>
//
//
//void main()
//{
//	int num = 10;    // 팩스밀리 기계 ()
//	display();
//}
//
//void display()
//{
//
//	printf("num : %d\n", num);
//}
//
//# 파라미터 사용 예시
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
//void display(int n)// <파라미터가 있다
//{
//
//	printf("num : %d\n", n);
//}
//
//
//#파라미터 예시2
//
//
//#include <stdio.h>
//
//void display(int n, int a);//파라미터 설정시 하청 공장 이름과 똑같이 바꿔주어야함
//
//void main()
//{
//	int num = 10;
//	int age = 25;
//	display(num, age);
//}
//
//void display(int n, int a)// <파라미터가 있다
//{
//
//	printf("num : %d\n", n);
//	printf(" age : %d\n", a);
//}
//
//#파라미터 사용예시 2
//
//#include <stdio.h>
//
//void display(int n, int a);//파라미터 설정시 하청 공장 이름과 똑같이 바꿔주어야함
//
//void main()
//{
//	int num = 10;
//	int age = 25;
//
//	display(num, age);
//}
//
//void display(int n, int age)// <파라미터가 있다 
//{                            //개발자들은 같은 이름 을 사용 을 선호
//
//	printf("num : %d\n", n);
//	printf(" age : %d\n", age);
//}
//
//
//#파라미터 전달
//
//#include <stdio.h>
//
//void display(int n, int age, double aver, double ddd, int a, char c);//파라미터 설정시 하청 공장 이름과 똑같이 바꿔주어야함
//
//void main()
//{
//	int num = 10;
//	int age = 25;
//	double aver = 75.3;
//	double ddd = 3.14;
//
//	display(num, age, aver, ddd, 100 + 3, 'g'); //자료 용도 맞춰야함 /수식의 게산을 해서도 보내기가 가능
//}
//
//void display(int n, int age, double aver, double ddd, int a, char c)// <파라미터가 있다 
//{                            //개발자들은 같은 이름 을 사용 을 선호
//
//	printf("num : %d\n", n);
//	printf(" age : %d\n", age);
//	printf(" 평균 :%lf\n", aver);
//	printf("")
//}
//
//#리턴 함수 적용
//
//#include <stdio.h>
//int aaa();
//void main()
//{
//	int n;
//	n = aaa(); //*호출한 함수의 결과 값을 대입하는것 
//	//대입 연산을 통해 n=aaa() 로 대입시키는걸 선호
//// 함수의 return값은 다음줄로 내려가면 받을수 없다 
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
//	//입력 기능을 가진 함수를 호출 하여 입력값을 num변수에 넣기위해
//	num = input();
//
//	printf("num : %d \n", num);
//	printf("num : %d \n", num);
//	getmax(num, num2);
//	printf("큰값 :%d \b", num);
//}
////전달받은 2개의 정수중에서 큰값을 구해주는 기능 함수
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
//int input()//매개 변수
//{
//	int n; //지역 변수
//	printf("input : ");
//	scanf_s("%d", &n);
//	return n;
//}
//
//#기능들
//#include<stdio.h>
//void main()
//{
//	printf("사용자로부터 2개의 정수를 입력받아 덧셈하는 프로그램\n");
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
//#응용 예제
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
//	//1. 안내문구 기능 함수 호출
//	display();
//	//2. 사용자로부터 정수 2개 입력받는 기능 (함수) 사용(호출)
//	int a, b;
//	a = input();
//	b = input();
//	//3 2개의 정수값을 덧셈하여 결과를 주는 기능 사용
//
//	int c = sum(a, b);
//	// 4모든 결과 값 출력
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
//	printf("사용자로부터 2개의 정수를 입력 받아 덧셈하는 프로그램\n\n");
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
//#하청 연계
//
//
//#include<stdio.h>
//
//void kkk() {
//	int a = 10;
//	int b = 20;
//	return a;//파라미터 값은 무조건 하나밖에 리턴할수없다 
//}
//
//int ddd()
//{
//	return 5;
//}
//
//int ccc()
//{
//	return 100 + ddd();//ddd는 결과값을 불러오는 것
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
//#변수의 종류
//
//#include <stdio.h>
//void main()
//
//{
//	int a; //지역변수
//
//	a = 10; //ok
//	k = 200 / error
//}
//
//void aaa()
//{
//	int k;//지역 변수
//	k = 20; //ok
//	a = 100;//error
//}
//
//#
//전역 변수 활용해서 띄워보기
//
//
//
//#include <stdio.h>
//
//int g;//전역 변수
//
//void main()
//
//{
//	int a; //지역변수
//
//	a = 10; //ok
//	//k = 200/error
//	g = 100;
//	printf("g : %d\n", g);
//}
//
//void aaa()
//{
//	int k;//지역 변수
//	k = 20; //ok
//	//a = 100;//error
//	g = 200;
//	printf("g:%d\n", g);
//}
//
//# 전역변수의 단점
//
//#include <stdio.h>
//
//void aaa();
//int num; //사용 하게 되면 메모리를 비효율 적으로 사용함
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
//int g;                 //밖에 사용할수 있는건 여기들뿐         예 int j=10;
////대입은 선언한 영역 안에서만 변수 선언후 초기화까진 가능
////데이터 영역에서 의  변수 값은 0값 적용
////전역변수는 어디서든 알아들을수 있는 변수
//void main()
//{
//
//}
//
//#변수 우선순위
//
//
//
//#include <stdio.h>
//int g = 10; // 지역 변수와  전역변수가 같을떄  지역변수가 우선시됨
//
//void aaa()
//{
//	printf("main : %d\n", g);
//
//}
////밖에 사용할수 있는건 여기들뿐
//		//대입은 선언한 영역 안에서만
//void main()
//{
//
//	printf("aaa :%d\n", g);
//	aaa();
//}
//
//#정적 지역변수& 정적 전역변수
//
//#include <stdio.h>
//static int g; //정적 전역 변수 
//void main()
//{
//	static int g = 200;//정적 지역    //static 지역과 전역을 합친 정적변수
//	// 정적 전역 보단 정적 지역 변수에 사용 
//	//혹여나 정적 전역변수 사용할떄에는 풀네임으로 말함
//	//  정적 지역 변수 라고할떈 지역&정적만 말함.
//}
//
//
//#정적 지역 변수
//
//
//#include <stdio.h>
//void aaa()
//{
//	static int num = 10;// 원래는 밖에 있지만 
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
//정적 지역변수 활용법
//
//
//
//#include <stdio.h>
//void aaa()
//{
//	static int count = 0;
//	count++;
//	printf("aaa함수 호출 :%d 번쩨\n ", count);
//}
//
//
//void bbb()
//{
//	static int count = 0;
//	count++;
//	printf("bbb함수 호출 :%d 번쩨\n ", count);
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
//# 재귀 호출
//
//
//#include <stdio.h>
//
//void aaa()
//{
//	printf("aaa\n");
//	aaa(); //재귀 호출
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
//	aaa(n - 1); //재귀 호출  //무한루프이지만 
//	//운영체제가 고장나기전에 비쥬얼 스튜디오에서 먼저 죽음
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
//#리커시브 콜
//
//#include <stdio.h>
//
//void aaa(int n)
//{
//	if (n <= 0) return;;
//	printf("aaa\n");
//	aaa(n - 1); //재귀 호출  //무한루프이지만 
//	printf("kkk\n");        //운영체제가 고장나기전에 비쥬얼 스튜디오에서 먼저 죽음
//
//
//}
//
//
//void main()
//{
//	aaa(4);
//	printf("main 종료 \n");
//
//}
