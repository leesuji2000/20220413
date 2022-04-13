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
//#include <stdio.h>
//int fac(int a) {
//	if (a == 1) return 1;
//	else return a * fac(a - 1);
//	
//}
//int main(void) {
//	printf("%d", fac(5));
//	system("pause");
//	return 0;
//}

//재귀함수는 자신을 끝없이 불러오기 때문에 연산 횟수가 급격하게 많아질 수 있다.


//배열: 자료형이 같은 여러 자료를 효율적으로 처리하기 위해 사용한다.
//인덱스와 데이터로 이루어져 있다.
//자료형 배열명[배열의 크기]  = {초기화 값}; //초기화값은 없을 수도 있다.
// int a[10] = {0, }라고 쓰면 모든 수를 0으로 초기화한다.
//배열명[인덱스]를 통해서 배열에 접근할 수 있다

//#include <stdio.h>
//int main(void) {
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int i = 0; i <= 10; i++) {
//		printf("%d\n", a[i]);
//	}
//	system("pause");
//	return 0;
//}

//배열의 원소 중에서 최댓값 찾기

//#include <stdio.h>
//#include <limits.h> //다양한 자료형값들의 한계값(최대 최소값)을 포함한 해더파일
//int main(void) {
//	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
//	int maxValue = INT_MIN; //INT_MIN -만 이십억 정도 된다. 그냥 가장 작은 값이라고 생각
//	for (int i = 0; i < 10; i++) {
//		if (a[i] >= maxValue) {
//			maxValue = a[i];
//		}
//	}
//	printf("%d", maxValue);
//	system("pause");
//	return 0;
//}

//INT_MIN : 최대값을 구할 때 많이 사용하는 기능, <limits.h>헤더파일에 정의되어있으며 정수의 최솟값 반환

//문자열과 배열
//c언어에서는 기본적으로 문자열의 자료형을 제공하지 않는다.
//문자열은 문자를 여러개로 묶어놓은(배열)형태이다.
//이 불편함을 해결하고자 c++에서는 string 자료형을 제공한다

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	char a[20];
//	scanf("%s", &a);
//	printf("%s", a);
//	system("pause");
//	return 0;
//}

//c언어에서 문자열로 문자의 배열을 쓴다는 것을 처음 배우면 귀찮을 수 있다.
//하지만 c언어에서는 특정문자에 인덱스를 이용해서 바로 접근할 수 있다.


//#include <stdio.h>
//int main(void) {
//	char a[20] = "Hello World";
//	a[5] = '?';
//	printf("%s", a);
//	system("pause");
//	return 0;
//}

//문자열에 포한된 l 개수 출력하기

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	char a[20];
//	scanf("%s", &a);
//	int number = 0;
//	for (int i = 0; i <= 10; i++) {
//		if (a[i] == 'l') {
//			number++;
//		}
//	}
//	printf("%d", number);
//	system("pause");
//	return 0;
//}

//포인터의 개념과 활용 방법
//지금까지의 변수는 그 자체로 자신의 자료형에 맞는 값을 저장했다
//포인터 변수는 특이한 변수로, 메모리 주소값 자체(자료형과 함계)를 저장한다.//어떤 변수의 위치값을 저장한다
//메모리 주소 자체를 담기 때문에
//컴퓨터 메모리에 바로 접근할 수 있다.
//int *b = &a;와 같이 선언하는데, 선언할때 *는 포인터 변수임을 알려주기 위한 목적이다
//선언 이후에 사용하는 *b 에서 *는 포인터 변수b가 가리키는 주소의 값(주소 아니고 주소에 담긴 값)을 의미한다.
//선언 이후에 쓰는 *는 간접참조연산자라고 부른다. 포인터에 들어있는 주소의 값을 참조한다고 해서 붙여진 이름

//포인터 관련 연산자
//& : 주소연산자 - 변수 앞에 붙여서 변수의 메모리 시작 주소값을 의미
//포인터 *(선언): 포인터 선언할때 사용
//간접참조연산자 *: 선언된 포인터 변수가 가리키는 변수를 구한다.

//#include <stdio.h>
//int main(void) {
//	int a = 5;
//	int* b = &a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", *b);
//	system("pause");
//	return 0;
//}

//배열의 각 원소의 주소값 출력하기

//#include <stdio.h>
//int main(void) {
//	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for (int i = 1; i < 10; i++) printf("%d\n", &a[i]); 
//
//	system("pause");
//	return 0;
//}

//정수형은 4바이트씩 차지하기 때문에 주소값이 4씩 차이난다.

//포인터의 강력한 기능
//포인터는 컴퓨터 시스템의 특정 메모리에 바로 접근할 수 이싿.
//따라서 기존에 존재하던 중요한 메로리 영어 접근하지 않도록 해야한다.
//int *a = 0X334; *a = 0; 와 같이 직접 주소에 접근하는 방법은 위험한 코드이다.

//다중 포인터(포인터를 여러개 곂치는건 게임 만들때 사용)

//#include <stdio.h>
//int main(void) {
//	int a = 5;
//	int *b = &a;
//	int **c = &b;
//	printf("a 값: %d\n", a);
//	printf("a의 주소값: %d\n", b);
//	printf("a 값: %d\n", *b);
//	printf("a의 주소값: %d\n", *c);
//	printf("b의 주소값: %d", c);
//	printf("a의 값: %d\n", **c);
//	system("pause");
//	return 0;
//}

//배열과 포인터는 사실 동일하다
//배열을 선언한 이후에, 배열 이름 그 자체가 포인터 변수와 동일하다.
//#include <stdio.h>
//int main(void) {
//	int a[] = {1, 2, 3, 4};
//	int* b = a;
//	printf("%d\n", a);
//	printf("%d\n", &a[0]);
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}

//c언어에서 문자를 처리하는 방법과 문자&버퍼의 관계 이해
//c프로그램의 문자는 아스키코드를 따른다. 1byte로 구성되어 0~127가지 문자를 표현한다.
//각각의 문자는 숫자를 가지고 있다.숫자 0은 아스키코드로 48을 의미하고, 문자 A는 아스키코드 65를 의미 a는 97
//한글을 표현할때는 유니코드를 사용한다.

//아스키코드 실습
//#include <stdio.h>
//int main(void) {
//	char a = 65;
//	printf("%c\n", a+1);
//	system("pause");
//	return 0;
//}

//문자 입출력 함수
//getchar()를 이용해서 문자 한개를 입력받을 수 있다.
//#include <stdio.h>
//int main(void) {
//	char a = getchar();
//	printf("%c\n", a);
//	system("pause");
//	return 0;
//}

//문자를 처리할때, 버퍼의 개념이 많이 사용된다.
//버퍼(buffer)란 임시적으로 특정한 데이터를 저장하기 위한 목적으로 사용된다.
//c프로그램은 자동적으로 버퍼를 이용해 입출력을 처리한다.
//만일 엄청 많은 양을 입력한다면 컴퓨터는 잠시 데이터를 저장해둘 장소가 필요하다. 이것이 버퍼이다.

//입력 버퍼로 인해 흔히 발생하는 오류
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int a;
//	char c;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%c", &c);
//	printf("%c\n", c);
//	
//	system("pause");
//	return 0;
//}

//위와 같은 프로그램은 줄바꿈을 문자로 인식해서 문자를 입력하기 전에 프로그램이 종료된다.
//따라서 줄바꿈을 문자로 취급하지 않도록 하는 장치가 필요하다.

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a;
//	char c;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	int temp;  //모든 문자는 아스키코드에 의해 숫자로 표현되므로 int형을 사용
//	//한 문자씩 받아서 파일의 끝(EOF)이거나 개행문자(\n)를 만나면 입력을 멈추므로 항상 입력 버퍼를 비운다.
//	//getchar()함수를 이용해서 남아있는 버퍼를 지울 것이다.
//	while ((temp = getchar()) != EOF && temp != '\n') {}
//	scanf("%c", &c);
//	printf("%c\n", c);
//	system("pause");
//	return 0;
//}
//키보드로 문자를 입력하면 그 문자가 입력버퍼에 입력되었다가
//엔터\n를 누르면 지정된 변수로 문자가 들어가 버퍼는 비워진다
//화면은 출력버퍼에 문자가 저장되었다가
//특정 조건에 의해 버퍼가 비워지면 화면에 출력된다.
//즉, 프로그램과 운영체제는 데이터를 효율적으로 처리하기위해
//입출력 버퍼를 이용한다.
//만일 버퍼가 없이 1바이트씩 처리하면 cpu 사용횟수와 메모리 접근 횟수가 많아진다.
//버퍼링: 입출력 버퍼에 데이터를 저장하는 행동


//문자열 관련 함수
//문자열은 컴퓨터 메모리 구조상 마지막에 null(\0)값을 포함하고 있다.
//문자열의 끝을 알리기 위해 null값을 나타낸다.(null값이 없으면 끊임없이 문자열 출력)
 

// 문자열 형태로 포인터를 사용하면 포인터에 특정한 문자열의 주소를 넣게 된다.
//아래 코드는 "hello world"문자열을 읽기 전용으로 메모리 공간에 넣은 뒤에 그 위치를 처리한다.
//이러한 문자열을 '문자열 리터럴'이라고 한다. 이는 컴파일러가 알아서 메모리 주소를 결정한다.

//#include <stdio.h>
//int main(void) {
//    char* a = "hello world"; //포인터 변수에 문자열을 상수처럼 넣는것 = 문자열 리터럴(변경불가능)
//    //변경하고 싶으면 포인터 변수 a가 가르키는 문자열을 다른 것으로 바꾸면 된다.
//    printf("%s\n", a); //문자열은 내부적으로 배열이고, 포인터와 치환될 수 있기 때문에 *a를 안쓴것이다.
//    printf("%d\n", a);
//    printf("%d\n", *a);   
//    printf("%d\n", 'h');
//    system("pause");
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char* a = "hello world";
//    printf("%c\n", a[1]);
//    printf("%c\n", a[2]);
//    system("pause");
//    return 0;
//}

//문자열 입출력 함수
//scanf()함수는 공백을 만날때까지 입력받지만, gets()함수는 공백까지 포함하여 한줄을 입력받는다.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//    char a[100];
//    gets(a); //gets() 배열의 전체 범위를 고려하지 않아 보안의 취약점
//    //실무에서는 gets()대신 gets_s()를 이용한다. 특정한 범위만큼만 입력받는다.
//    printf("%s\n", a);
//    system("pause");
//    return 0;
//}

//gets()함수는 버퍼의 크기를 벗어나도 입력을 받아버린다.
//보안을 위해 버퍼의 범위를 고려한 gets_s()함수, 매개변수를 두개 받는다. -> 버퍼의 크기를 벗어나면 런타임 오류를 낸다.(보안에 좋음)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//    char a[100];
//    gets_s(a, sizeof(a));
//    system("pause");
//    return 0;
//}

//c언어의 문자열 처리 함수
//나중에 c++을 이용하면 더욱 편리하고 다양한 함수 사용가능
//<string.h> 헤더파일에 담겨 있음
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void) {
//    char a[20] = "leesuji";
//    char b[10] = "suji";
//
//
//    printf("%d\n", strlen(a)); //문자열 길이 반환
//    printf("%d\n", strcmp(a, b)); //문자열1이 문자열 2보다 사전적으로 앞이면 -1, 뒤면 1 반환
//    strcpy(a, b);  //문자열 복사
//    printf("%s\n", a);
//    strcat(a, b); //문자열1에 문자열 2를 더함
//    printf("%s\n", a); 
//    printf("%s\n", strstr(a, b)); //긴 문자열에서 짧은 문자열을 찾아서 그 위치를 반환
//    
//    system("pause");
//    return 0;
//}

//c언어에서 문자열 비교, 연산, 탐색 등의 알고리즘의 사용방법은 각각 함수 형태로 제공된다.
//strlen(): 길이 반환 %d
//strcmp(a, b): 사전상 a가 앞이면 -1, 뒤이면 1반환 %d
//strcpy(a, b): a에 b를 복사
//strcat(a, b): a에 b를 붙임
//strstr(a, b): 긴문자열이 작은 문자열을 포함하는지 확인후, 그 위치부터 끝까지 반환

