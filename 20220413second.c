//컴퓨터가 변수를 처리하는 방법(지역변수, 전역변수, 레지스터 변수 등)
//특정한 함수에 값을 전달하거나 주소를 전달하는 방법을 알아보자

//컴퓨터에서 프로그램이 실행되기 위해서는 프로그램이 메모리에 적재(로딩)되어야 한다
//당연히 프로그램의 크기를 충당할 수 있는 만큼의 메모리 공간이 필요하다
//일반적인 운영체제는 메모리 공간을 4개로 구분하여 관리한다.
//코드영역(소스코드), 데이터영역(전역변수, 정적변수), 힙 영역(동적할당변수), 스택영역(지역변수, 매개변수)

//전역변수(global variable): 프로그램 어디서든 접근 가능한 변수
//main 함수가 실행되기 전에 프로그램 시작과 동시에 메모리(데이터영역)에 할당
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
//#include <stdio.h>
//int main(void) {
//	int a[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
//	int(*p)[5] = a[1]; // a의 2번째 행인 6을 가리키는 
//	
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", p[0][i]);
//	}
//	printf("\n%d", *(p[0]+2));
//	
//	system("pause");
//	return 0;
//}

//동적메모리할당: 배열을 사용할때 미리 적절한 크키만큼 할당해줘야 한다. 
//우리가 원하는 만큼 메모리를 할당해서 사용하고자 할떄 동적메모리할당을 사용한다. 동적(프로그램 실행도중) 메모리를 할당해준다.
//필요할때 원하는 만큼만 할당해서 사용한다.
//malloc()함수를 이용해서 원하는 만큼 메모리 공간을 확보한다.
//malloc()함수는 메모리 할당에 성공하면, 주소를 반환하고, 그렇지 않으면 null값을 반환한다.
//메모리(램)에 있는 주소를 반환한다는 의미
//<stdlib.h>라이브러리에 정의되어 있다.
//malloc(할당할 바이트크기);
//동적메모리할당을 수행할 때마다 할당되는 포인터의 주소는 변칙적이다.
//동적할당변수는 힙 메모리 영역에 저장된다

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int* a = malloc(sizeof(int)); // 4를 넣는 것과 같다.
//	printf("%d\n", a);
//	a = malloc(sizeof(int));
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//전통적인 c언어에서 스택에 선언된 변수(지역변수, 매개변수)는 따로 해제해주지 않아도 된다.
//하지만 동적할당 변수는 반드시 free()함수로 메모리 해제를 해줘야 한다.
//메모리 해제를 하지 않으면 메모리 내의 프로세스 무게가 더해져 언제가 오류가 발생한다.
//메모리 누수방지는 코어 개발자의 핵심역량이다

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int* a = malloc(sizeof(int));
//	printf("%d\n", a);
//	free(a);
//	a = malloc(sizeof(int));
//	printf("%d\n", a);
//	free(a);
//	system("pause");
//	return 0;
//
//}
//한번 할당한 후, 해제를 해주면 그 공간이 비어있고, 다시 할당을 하면 비어있는 이전 공간으로 들어갈 확률이 높아
//주소가 같게 나오는 것이다.
//free()안하면 갑자기 프로그램이 꺼지는 위험이 있다.

//동적으로 문자열 처리하기
//일괄적인 범위의 메모리를 모두 특정한 값으로 설정하기 위해서 memset()을 사용
//memset(포인터, 값, 크기);
//한 바이트 씩 값을 저장하므로 문자열 배열의 처리방식과 비슷 -> <string.h>에 정의됨

//memset()함수를 이용해서 A로 채워진 메모리할당
//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	char* a = malloc(100);
//	memset(a, 'A', 100);
//	for (int i = 0; i < 100; i++) {
//		printf("%c ", a[i]);
//	}
//	system("pause");
//	return 0;
//}

//동적메모리할당 + 2중 포인터
//3*3 표 만든 후에 값 출력하기
//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int** p = (int**)malloc(sizeof(int*) * 3);
//	for (int i = 0; i < 3; i++) {
//		*(p + i) = (int*)malloc(sizeof(int) * 3);
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			*(*(p + i) + j) = i * 3 + j;
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", *(*(p + i) + j));
//
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int** p = (int**)malloc(sizeof(int*) * 3);
	for (int i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*((*(p + i)) + j) = 3 * i + j;

		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *((*(p + i)) + j)); 
		}
		printf("\n");
	}
}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int** p = (int**)malloc(sizeof(int*) * 3);
//	for (int i = 0; i < 3; i++) {
//		*(p + i) = (int*)malloc(sizeof(int) * 3);
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			p[i][j] = i * j;
//			printf("%d ", p[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//
//}
