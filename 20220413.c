////삼항연산자: 세개의 항을 이용해서 조건문을 수행하는 연산자
//#include <stdio.h>
//int main(void) {
//	int a = 7, b = 7;
//	printf("%d\n", (a == b) ? 100 : -100);
//	system("pause");
//	return 0;
//}

//비트 연산자
// ~ 부정
// & 그리고
// | 또는 
// ^ 배타적 (두개의 값 중에서 하나만 1일때 1출력)
// << 왼쪽 시프트 2의 배수로 증가(자주 사용)
//>> 오른쪽 시프트 2의 배수로 나눠짐

//연산자의 우선순위: 수학의 우선순위와 비슷
//++, -- > ! ~ > * / % > + - > << >> > 비교연산자 > 비트, 논리, 삼항연산자 

//조건문: 프로그램의 흐름을 결정하는 방법
// if 문 switch 문

//if 문: 조건의 개수가 적을때 사용, 내부 조건 검사 후 프로그램 진행 경로 결정
// if (조건 1) {} else if (조건 2) {} else {} 형식

//if 문 예제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	printf("How many people are there?");
//	int a;
//	scanf("%d", &a);
//	if (a == 1 || a == 2) {
//		printf("table for 2 persons\n");
//
//	}
//	else if (a == 3 || a == 4) {
//		printf("table for 4 persons\n");
//
//	}
//	else {
//		printf("Big table\n");
//	}
//	system("pause");
//	return 0;
//}

//if 문 예제-메인 메모리의 크기를 입력 받아서, 결과 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int size;
//	scanf("%d", &size);
//	if (size >= 16) {
//		printf("enough");
//	
//	}
//	else {
//		printf("not enough");
//
//	}
//	system("pause");
//	return 0;
//}

//if 를 두번 쓸때에는 논리적으로 오류가 없는지 겹치지 않는지 확인해야한다.

//switch문: 다양한 조건이 있을 때 사용
//switch (확인대상) { case value1: ....case value2: ... Default: ...}

//switch 실습
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	printf("Write your score\n");
//	char score;
//	scanf("%c", &score);
//	switch (score) {
//	case 'A':
//		printf("your score is A\n");
//		break;
//	case 'B':
//		printf("your score is B\n");
//		break;
//	case 'C':
//		printf("your score is C\n");
//		break;
//	case 'D':
//		printf("your score is D\n");
//		break;
//	default: 
//		printf("Write your score again\n");
//
//	}
//	system("pause");
//	return 0;
//}

//switch 문으로 만든 계절찾기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	printf("Write your favorite month.\n");
//	int month;
//	scanf("%d", &month);
//	switch (month) {
//	case 1: case 2: case 3:
//		printf("spring\n");
//		break;
//	case 4: case 5: case 6:
//		printf("summer\n");
//		break;
//	case 7: case 8: case 9:
//		printf("fallC\n");
//		break;
//	case 10: case 11: case 12:
//		printf("winter\n");
//		break;
//	default:
//		printf("Write your favoerite month again\n");
//
//	}
//	system("pause");
//	return 0;
//}

//반복문: 특정 조건에 부합할때 반복
//for 문
//for (초기화; 조건; 반복 끝 명령어) {}

//1 ~ 100 출력
//#include <stdio.h>
//int main(void) {
//	for (int i = 1; i <= 100; i++) { // 전통적인 c언어에서 초기화는 밖에서 해주는 것이 일반적(중요X)
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//
//}

//1 ~ n 합 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n, sum = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) { // 전통적인 c언어에서 초기화는 밖에서 해주는 것이 일반적(중요X)
//		sum += i;
//	}
//	printf("%d\n", sum);
//	printf("등차수열 공식을 이용한 값: %d\n", (n * (n + 1)) / 2);
//	system("pause");
//	return 0;
//
//}

//무한루프(infinite loop): 조건이 항상 참이거나 조건 부분이 비어있을때 발생

//-1 입력될때까지 더하기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n, sum = 0;
//	scanf("%d", &n);
//	for (; n != -1;) {
//		
//		sum += n;
//		scanf("%d", &n);
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n, sum = 0;
//	
//	for (; 1;) {
//		scanf("%d", &n);
//		if (n == -1) {
//			break;
//		}
//		sum += n;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//while문: 조건에 부합할 때, 반복되며 break를 통해 탈출 정해야함
//while (조건) {}

//특정문자 n번 출력하기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n;
//	char a;
//	scanf("%d %c", &n, &a);
//	while (n--) {
//		printf("%c", a);
//	}
//	system("pause");
//	return 0;
//}

//구구단 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n;
//	int a = 1;
//	scanf("%d", &n);
//	while (a<=9) {
//		printf("%d * %d = %d\n", n, a, n*a);
//		a += 1;
//	}
//	system("pause");
//	return 0;
//
//}

//중첩된 반복문: 반복문 내부에 다른 반복문이 존재하는 형태
//중첩 될수록 연산 횟수는 제곱 형태로 늘어남

//전체 구구단 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n = 1, a = 1;
//	while (n<=9) {
//		while (a <= 9) {
//			printf("%d * %d = %d\n", n, a, n * a);
//			a++;
//		}
//		a = 1;
//		printf("\n");
//		n++;
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//함수: 입력을 받아 출력하는 구조(생산성)
//함수는 반복을 줄여준다
// 반환 자료형 함수명 (매개변수) { 수행명령; return 값;}
//어떤 값을 출력하기만 하는 함수는 매개변수와 return 값이 필요 없다(이때 반환 자료형 void)

//말 붙이기 함수
//#include <stdio.h>
//void dice(int input) {
//	printf("dice's number: %d\n", input);
//}
//
//int main(void) {
//	dice(3);
//	dice(4);
//	system("pause");
//	return 0;
//}

//더하기 함수 만들기

//#include <stdio.h>
//
//int add(int a, int b) {
//	
//	return a+b;
//}
//int main(void) {
//	printf("%d\n", add(3, 5));
//	printf("%d\n", add(6, 3));
//	
//	system("pause");
//	return 0;
//}


//사칙연산 함수
//#include <stdio.h>
//void calcular(int a, int b) {
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("\n");
//}
//
//int main(void) {
//	calcular(3, 4);
//	calcular(4, 5);
//	system("pause");
//	return 0;
//}
//함수를 묶어놓은 것들을 라이브러리라고 한다.
//헤더파일 또한 라이브러리이다.

//재귀함수: 자기자신을 포함하는 함수, 무한루프 주의
#include <stdio.h>
int fac(int a) {
	if (a == 1) return 1;
	else return a * fac(a - 1);
	
}
int main(void) {
	printf("%d", fac(5));
	system("pause");
	return 0;
}

//재귀함수는 자신을 끝없이 불러오기 때문에 연산 횟수가 급격하게 많아질 수 있다.




