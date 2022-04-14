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