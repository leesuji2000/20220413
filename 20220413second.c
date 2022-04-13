//컴퓨터가 변수를 처리하는 방법(지역변수, 전역변수, 레지스터 변수 등)
//특정한 함수에 값을 전달하거나 주소를 전달하는 방법을 알아보자

//컴퓨터에서 프로그램이 실행되기 위해서는 프로그램이 메모리에 적재(로딩)되어야 한다
//당연히 프로그램의 크기를 충당할 수 있는 만큼의 메모리 공간이 필요하다
//일반적인 운영체제는 메모리 공간을 4개로 구분하여 관리한다.
//코드영역(소스코드), 데이터영역(전역변수, 정적변수), 힙 영역(동적할당변수), 스택영역(지역변수, 매개변수)

//전역변수(global variable): 프로그램 어디서든 접근 가능한 변수
//main 함수가 실행되기 전에 프로그램 시작과 동시에 메모리(데이터영영)에 할당
//프로그램의 크기가 커질 수록 전역 변수로 인해 프로그램이 복잡해질 수 있다.

//#include <stdio.h> 
//int a = 5;
//void changA() {
//	a = 1;
//}
//int main(void) {
//	printf("%d\n", a);
//	changA();
//	printf("%d", a);
//	system("pause");
//	return 0;
//}
//지역변수(local variable): 프로그램에서 특정 블록에서만 접근 가능
//함수가 실행될때 마다 스택(stack)메모리에 할당되며 함수가 종료되면 메모리 해제

//#include <stdio.h> 
//int main(void) {
//	int a = 7;
//	if (1) {
//		int a = 5; //공통 a를 쓰고 싶으면 a = 5;로 선언해야한다.
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	
//	system("pause");
//	return 0;
//}

//정적변수(static variable): 특정한 블록에서만 접근 가능
//프로그램이 실행될때, 데이터 메모리에 할당되어 프로그램이 종료되면 메모리에서 해제(지역변수의 블록접근 + 전역변수의 main 전 할당)

//#include <stdio.h> 
//void process() {
//	static int a = 5;
//	a = a + 1;
//	printf("%d\n", a);
//}
//
//int main(void) {
//	process();
//	process();
//	system("pause");
//	return 0;
//}

//레지스터변수(register variable): 메인 메모리 대신 cpu의 레지스터를 사용하는 변수(메모리보다 레지스터가 cpu에 가까워서 빠름)
//레지스터는 매우 한전되어 있으므로 실제로 레지스터에 처리될지 장담할 수 없다.

//#include <stdio.h> 
//
//int main(void) {
//	register int a = 10; int i;
//	for (i = 0; i < a; i++) {
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

//함수의 매개변수가 처리될때
//함수를 호출할때 함수에 필요한 데이터를 매개변수로 전달
//전달방식은 1. 값에 의한 전달(call by value) 2. 참조에 의한 전달(call by referance)방식
//값에 의한 전달은 단순히 값을 전달 -> 함수 내에서 변수가 새롭게 생성
//참조에 의한 전달은 주소 전달 -> 원래 변수 자체에 접근


//값에 의한 전달

//#include <stdio.h> 
//void add(int a, int b) {
//	a = a + b;
//}
//int main(void) {
//	int a = 7;
//	add(a, 10); //add()함수가 끝남과 동시에 a = a+b의 결과도 사라진다.
//	//이를 해결하기 위해 call by referance를 사용한다.
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//참조에 의한 전달
//매개변수로 값을 전달하는 것이 아니라 변수의 주소(포인터값)을 전달 -> 원래 변수 값 자체에 접근 할 수 있다.
//#include <stdio.h>
//void add(int* a) {
//	*a = (*a) + 10;
//}
//int main(void) {
//	int a = 7;
//	add(&a);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//매개변수로 포인터(주소)를 이용할 뿐 어렵지 않다.

//다차원배열과 포인터배열(포인터를 이용하여 2차원 배열 다루는 방법)
//2차원 배열 - 행열데이터를 표현할때, 그래프 알고리즘을 처리할때, 다수의 실생활 데이터를 처리할때 등
//자료형 배열 이름 [행-세로][열-가로] = {{값, 값, 값,,,}, {값, 값, 값,,,},,,}
//2중 반복문과 자주 사용

//#include <stdio.h>
//int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//int main(void) {
//	int i, j;
//	for (i = 0; i < 3; i++) { //행에 접근
//		for (j = 0; j < 3; j++) { //열에 접근
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//다차원배열: 2차원 이상의 배열, 컴퓨터는 2차원 배열형태로만 화면에 출력

//3차원 배열
//#include <stdio.h>
//int a[3][3][3] = {{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }, { {11, 21, 31}, {41, 51, 61}, {71, 81, 91} },
//	{ {12, 22, 32}, {42, 52, 62}, {72, 82, 92} }};
//int main(void) {
//	int i, j, m;
//	for (i = 0; i < 3; i++) { //행에 접근
//		for (j = 0; j < 3; j++) { //열에 접근
//			for (m = 0; m < 3; m++) {
//				printf("%d ", a[i][j][m]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//포인터 배열의 구조분석
//배역은 포인터와 동일한 방식으로 동작
//배열의 이름은 배열의 원소의 첫번째 주소가 된다
//차이점은, 포인터는 변수, 배열은 상수

//배열의 이름이 변수인지 상수인지 알 수 있는 오류
//#include <stdio.h>
//int main(void) {
//	int a = 10;
//	int b[10];
//	b = &a;//배열은 상수이기 때문에 변수의 주소를 넣을 수 없다.
//
//}

//반대로 포인터를 배열처럼 사용할 수 있다.
//배열을 바꿀때 포인터로 바꿀 수 있다.
//포인터를 배열처럼 사용하는 것은 자주 쓰인다.
//#include <stdio.h>
//int main(void) {
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* b = a; //포인터는 배열의 첫번째 원소 주소값과 동일하기 때문에 int *b = &a[0];이라고 써도 된다.
//	printf("%d\n", b[2]);
//	system("pause");
//	return 0;
//}

//포인터는 연산이 가능한데, 연산을 통해 자료형의 크기이동
//#include <stdio.h>
//int main(void) {
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int i;
//	for (i = 0; i < 5; i++) {
//		printf("%d\n ", a + i);
//		printf("%d\n", *(a + i));
//		printf("%d\n", a[i]);
//
//	}
//	system("pause");
//	return 0;
//}

//자료형의 크기를 알면 첫번째 주소와 마지막 주소를 알 수 있다.
//#include <stdio.h>
//int main(void) {
//	double b[10];
//	printf("%d %d\n", b, b + 9);
//	system("pause");
//	return 0;
//}

//2차원 배열을 포인터로 처리하는 방법(2중포인터)
#include <stdio.h>
int main(void) {
	int a[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
	int(*p)[5] = a[1]; // a의 2번째 행인 6을 가리키는 
	for (int i = 0; i < 5; i++) {
		printf("%d ", p[0][i]);
	}
	
	system("pause");
	return 0;
}

