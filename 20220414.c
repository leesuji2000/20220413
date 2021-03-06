//함수포인터
//함수의 이름을 이용해서 특정한 함수를 호출, 함수이름은 메모리 주소를 반환

//함수의 이름이 내부적으로 메모리 주소값을 갖는 실습
//#include <stdio.h>

//void function() {
//	printf("It's my funciton");
//}
//int main(void) {
//	printf("%d\n", function);
//	system("pause");
//	return 0;
//}

//함수 포인터: 특정한 함수의 반환 자료형을 지정하는 방식으로 선언
//함수 포인터를 이용하면 형태가 같은 서로 다른 기능의 함수를 선택적으로 사용할 수 있다
//반환 자료형 (*함수명) (매개변수) = 함수명;
//특정한 함수를 가리키는 포인터를 만들 수 있는것

//매개변수 및 반환 자료형이 없는 함수 포인터
//#include <stdio.h>
//void Myfunction() {
//	printf("It's my funciton");
//}
//void Yourfunction() {
//	printf("It's your funciton");
//}
//int main(void) {
//	void (*fp)() = Myfunction;
//	fp();
//	fp = Yourfunction;
//	fp();
//	system("pause");
//	return 0;
//}

//매개변수와 반환 자료형이 있는 함수 포인터
//#include <stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int main(void) {
//	int (*fp)(int, int) = add;
//	printf("%d\n", fp(10, 3));
//	fp = sub;
//	printf("%d\n", fp(10, 3));
//
//	system("pause");
//	return 0;
//}

//함수포인터 자체를 반환하여 사용하기
//#include <stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int (*process(char* a))(int, int) { //process라는 함수 자체의 매개변수 char*a와 반환할 함수의 매개변수 
//	printf("%s", a);
//	return add;
//}
//int main(void) {
//	printf("%d\n", process("10 + 20 = ")(10, 20));
//	system("pause");
//	return 0;
//}
//함수포인터를 자주 사용하지 않기 때문에 컴퓨터의 구조를 이용하는데 도우미 된다
//c언어 프로그램의 모든 함수는 내부적으로 포인터 형태로 관리할 수 있다.

//구조체: 여러개의 변수를 묶어서 하나의 객체를 표현할 수 있다.
//배열과는 다르게 다른 자료형의 변수를 묶어서, 다양한 객체를 표현할 수 있다.
// struct 구조체명 { 자료형1 변수명; ...}
//구조체의 변수 선언와 접근(.을 이용해서 구조체변수에 접근한다)
//struct 구조체변수명 구조체변수; //구조체 변수 선언
//string 함수를 이용해서 복사(strcpy)한다.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//struct student {
//	char name[10];
//	int age;
//	char grade[10];
//};
//int main(void) {
//	struct student s; //struct student s = {"leesuji", 23, "A"} 차례대로 넣어 초기화할 수 있음
//	strcpy(s.name, "leesuji");
//	s.age = 23;
//	strcpy(s.grade, "A");
//	printf("%s\n %d\n%s", s.name, s.age);
//	printf("%s\n", s.grade);
//	
//	system("pause");
//	return 0;
//}
//
//
//struct student {
//	char name[10];
//	int age;
//	char grade[10];
//} s; //이렇게 쓰면 구조체 선언과 동시에 전역변수(구조체변수) s도 선언할 수 있다
//
//
//typedef struct student {
//	char name[10];
//	int age;
//	char grade[10];
//} student; //typedef를 사용하면 나중에 구조체 선언할때 student s;라고 선언한면 된다. struct를 안붙여도됨


//구조체가 포인터 변수로 사용되는 경우) 내부 변수에 접근할 때 화살표(->)를 사용한다

//#include <stdio.h>
//typedef struct
//{
//	char studentID[10];
//	char name[10];
//	int grade;
//	char major[10];
//} student;
//
//int main(void) {
//	student* s = malloc(sizeof(student));
//	strcpy(s->studentID, "20193149");
//	strcpy(s->name, "leesuji");
//	s->grade = 2;
//	strcpy(s->major, "computer");
//	printf("%s\n", s->studentID);
//	printf("%s\n", s->name);
//	printf("%d\n", s->grade);
//	printf("%s\n", s->major);
//	system("pause");
//	return 0;
//}

//파일 입출력의 필요성: 프로그램이 꺼진 이후에도 데이터를 저장하기 위해
//파일 입출력 변수 FILE형식의 포인터 변수로 선언 fopen(), fcloe()함수
//FILE* fp;
//fp = fopen(파일경로, 접근방식);
//fclose(fp);

//fopen(): 파일경로와 접근방식을 설정
//r: read, w: write(기록, 이미 존재하면 덮어쓰기), a: add(데이터를 뒤에서부터 기록)

//파일 입출력
//fprintf(파일포인터, 서식, 형식지정자);
//fscanf(파일포인터, 서식, 형식지정자);

//파일입출력을 할때 열고, 읽고/쓰고, 닫기 순서를 지켜야한다.
//파일을 열때, 파일 포인터가 사용되고, 동적으로 할당된다.
//파일처리가 끝난 후에 꼭 닫아주어야 메모리 누수를 막을 수 있다.

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	char s[20] = "hello world leesuji";
//	FILE* fp;
//	fp = fopen("text.txt", "w");
//	fprintf(fp, "%s\n", s);
//	fclose(fp);
//	return 0;
//}


//파일에서 학생의 이름과 나이를 불러오는 파일 입출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct {
//	char name[10];
//	int age;
//} student;
//
//int main(void) {
//	int n, sum = 0;
//	FILE* fp;
//	fp = fopen("input.txt", "r");
//	fscanf(fp, "%d", &n);
//	student* students = (student*)malloc(sizeof(student) * n);
//	for (int i = 0; i < n; i++) {
//		fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->age));
//		printf("name: %s, age: %d\n", ((students + i)->name), ((students + i)->age));
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct {
//	char name[10];
//	int age;
//} student;
//
//int main(void) {
//	int n, sum = 0;
//	FILE* fp;
//	fp = fopen("input.txt", "r");
//	fscanf(fp, "%d", &n);
//	student* students = (student*)malloc(sizeof(student) * n);
//	for (int i = 0; i < n; i++) {
//		fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->age));
//		
//	}
//	for (int i = 0; i < n; i++) {
//		sum += (students + i)->age;
//	}
//	free(students);
//	fclose(fp);
//	printf("%.2f\n", (double)sum / n);
//	system("pause");
//	return 0;
//}

//전처리기: 다른 프로그램 영역과 독립적으로 처리된다, 소스코드 파일 단위로 효력 존재

//파일 포함 전처리기
//#include 는 전처리기에서 가장 많이 사용되는 문법, 라이브러리로 포함시킨다
//#include를 이용하면 어떤 파일도 가져올 수 있다.
//#include <파일이름> : 시스템 디렉토리에서 파일을 검색, 운영체제마다 시스템 디렉토리가 존재하는 경로가 다를 수 있다
//#include "파일이름" : 현재 폴더에서 파일을 먼저 검색후, 없다면 시스템 디렉토리에서 파일을 검색

//#include <stdio.h>
//#include "temp.h"
//
//int main(void) {
//	printf("%d\n", add(2, 3));
//	system("pause");
//	return 0;
//}

//매크로 전처리기: 프로그램 내에서 사용되는 상수나 함수를 매크로 형태로 저장하기 위해 사용
//일반적으로 자주 사용한는 상수나 함수를 매크로 전처리기(#define)를 이용해서 나타낸다.

//#include <stdio.h>
//#define PI 3.14
//int main(void) {
//	int r = 3;
//	printf("%.2f\n", 2*PI*r);
//	system("pause");
//	return 0;
//}

//인자를 가지는 매크로 전처리기: 함수와 같은 형태로 인자를 받을 수 있다.
//#include <stdio.h>
//#define POW(x) (x*x)
//int main(void) {
//	int r = 3;
//	printf("%d\n", POW(r));
//	system("pause");
//	return 0;
//}

//전처리기 #define 은 코드를 쓰는 시간을 획기적으로 줄여준다.
//#include <stdio.h>
//#define ll long long
//#define ld long double
//int main(void) {
//	ll a = 2324642677;
//	ld b = 31515.3466;
//	printf("%.2f\n", a * b);
//	system("pause");
//	return 0;
//}

//조건부 컴파일: 컴파일이 이루어지는 영역을 지정하는 기법
//일반적으로 디버깅과 소스코드 이식을 목적으로 작성
//c언어로 시스템 프로그램을 작성할때, 운영체제에 따라서 소스코드가 달라질 수 있다.
//이떄 운영체제에 따라서 컴파일이 수행되는 소스코드를 다르게 할 수 있다.
//하드웨어에 가까운 운영체제를 다룰때, 각각에 맞는 소스파일을 넣어야 할 때 사용한다.

//조건부 컴파일 #ifndef ~ #endif 문법
//헤더 파일의 내용이 중복되어 사용되지 않도록 주의


//#include <stdio.h>
//#include "temp.h"
//#include "temp.h"//temp.h파일에 있는 조건부 컴파일 #ifndef ~ #endif에 의해서 중복해서 작성해도 오류 안뜬다.
//
//int main(void) {
//	printf("%d\n", add(2, 3));
//	system("pause");
//	return 0;
//}

//파일 분할 컴파일
//일반적으로 자신이 직접 라이브러리를 만들때, c언어 파일과, 헤더파일을 모두 작성해야 한다.
//분할을 통해서 좀 더 효율적이고 체계적인 관리를 할 수 있다

#include <stdio.h>
#include "temp1.h"


int main(void) {
	printf("%d\n", add(2, 3));
	system("pause");
	return 0;
}

