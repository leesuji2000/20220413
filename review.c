//#include <stdio.h>
//int main(void) {
//    char* a = "hello world"; //������ ������ ���ڿ��� ���ó�� �ִ°� = ���ڿ� ���ͷ�(����Ұ���)
//    //�����ϰ� ������ ������ ���� a�� ����Ű�� ���ڿ��� �ٸ� ������ �ٲٸ� �ȴ�.
//    char** b = a;
//    //printf("%s\n", a); //���ڿ��� ���������� �迭�̰�, �����Ϳ� ġȯ�� �� �ֱ� ������ *a�� �Ⱦ����̴�.
//    //printf("%d\n", a);
//    //printf("%s\n", b);
//    //printf("%d\n", b);
//
//
//    printf("%d\n", &b);
//    printf("%d\n", &a);
//
//    //printf("%d\n", *a); //hello world���� ù���� h�� ��Ÿ���� �ƽ�Ű�ڵ尪
//    //printf("%d\n", 'h');
//    //printf("%d\n", **b);
//    
//    system("pause");
//    return 0;
//}
////a �� ���ڿ��� ��Ÿ����, &a�� a�� �ּҰ��� ��Ÿ������, *a�� ���ڿ��� ù��° ���ڸ� ��Ÿ����??
////�׷��� b�� ���ڿ��� ��Ÿ����, *b�� a�� �ּҰ��� ��Ÿ�����ϴ°� �ƴѰ�?


//�������� ���ڿ� ó���ϱ�
//�ϰ����� ������ �޸𸮸� ��� Ư���� ������ �����ϱ� ���ؼ� memset()�� ���
//memset(������, ��, ũ��);
//�� ����Ʈ �� ���� �����ϹǷ� ���ڿ� �迭�� ó����İ� ��� -> <string.h>�� ���ǵ�

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    int* a = malloc(100);
//    memset(a, 3, 100* sizeof(int));
//    for (int i = 0; i < 100; i++) {
//        printf("%d ", a[i]);
//    }
//  
//
//    system("pause");
//    return 0;
//}
//??�� 3�� ��� �ȵǸ� �ּҰ��� ��� �Ǵ°ž� *(a+i)�ص� �ּҰ� ��µȴٰ�
//memset()�Լ��� 1����Ʈ���� ó���ϱ� ������ ���ڿ� 0�� �ƴ� �̻� ó���� �� ��� �ּҰ��� ���´�.
//memset()�Լ��� �̿��� ������ ���� or 0���θ� �ʱ�ȭ �ؾ��Ѵ�




//�Լ�������
//�Լ��� �̸��� �̿��ؼ� Ư���� �Լ��� ȣ��, �Լ��̸��� �޸� �ּҸ� ��ȯ

//�Լ��� �̸��� ���������� �޸� �ּҰ��� ���� �ǽ�


//�Լ� ������: Ư���� �Լ��� ��ȯ �ڷ����� �����ϴ� ������� ����
//�Լ� �����͸� �̿��ϸ� ���°� ���� ���� �ٸ� ����� �Լ��� ���������� ����� �� �ִ�
//��ȯ �ڷ��� (*�Լ���) (�Ű�����) = �Լ���;
//Ư���� �Լ��� ����Ű�� �����͸� ���� �� �ִ°�


//�Ű����� �� ��ȯ �ڷ����� ���� �Լ� ������
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

//�Ű������� ��ȯ �ڷ����� �ִ� �Լ� ������
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

//�Լ������� ��ü�� ��ȯ�Ͽ� ����ϱ�
//#include <stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int (*process(char* a))(int, int) { //process��� �Լ� ��ü�� �Ű����� char*a�� ��ȯ�� �Լ��� �Ű����� 
//	printf("%s", a);
//	return add;
//}
//int main(void) {
//	printf("%d\n", process("10 + 20 = ")(10, 20));
//	system("pause");
//	return 0;
//}
//�Լ������͸� ���� ������� �ʱ� ������ ��ǻ���� ������ �̿��ϴµ� ������ �ȴ�
//c��� ���α׷��� ��� �Լ��� ���������� ������ ���·� ������ �� �ִ�.


//����ü�� ������ ������ ���Ǵ� ���) ���� ������ ������ �� ȭ��ǥ(->)�� ����Ѵ�

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

//���� ������� �ʿ伺: ���α׷��� ���� ���Ŀ��� �����͸� �����ϱ� ����
//���� ����� ���� FILE������ ������ ������ ���� fopen(), fcloe()�Լ�
//FILE* fp;
//fp = fopen(���ϰ��, ���ٹ��);
//fclose(fp);

//fopen(): ���ϰ�ο� ���ٹ���� ����
//r: read, w: write(���, �̹� �����ϸ� �����), a: add(�����͸� �ڿ������� ���)

//���� �����
//fprintf(����������, ����, ����������);
//fscanf(����������, ����, ����������);

//����������� �Ҷ� ����, �а�/����, �ݱ� ������ ���Ѿ��Ѵ�.
//������ ����, ���� �����Ͱ� ���ǰ�, �������� �Ҵ�ȴ�.
//����ó���� ���� �Ŀ� �� �ݾ��־�� �޸� ������ ���� �� �ִ�.

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


//���Ͽ��� �л��� �̸��� ���̸� �ҷ����� ���� �����
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

//��ó����: �ٸ� ���α׷� ������ ���������� ó���ȴ�, �ҽ��ڵ� ���� ������ ȿ�� ����

//���� ���� ��ó����
//#include �� ��ó���⿡�� ���� ���� ���Ǵ� ����, ���̺귯���� ���Խ�Ų��
//#include�� �̿��ϸ� � ���ϵ� ������ �� �ִ�.
//#include <�����̸�> : �ý��� ���丮���� ������ �˻�, �ü������ �ý��� ���丮�� �����ϴ� ��ΰ� �ٸ� �� �ִ�
//#include "�����̸�" : ���� �������� ������ ���� �˻���, ���ٸ� �ý��� ���丮���� ������ �˻�

//#include <stdio.h>
//#include "temp.h"
//
//int main(void) {
//	printf("%d\n", add(2, 3));
//	system("pause");
//	return 0;
//}

//��ũ�� ��ó����: ���α׷� ������ ���Ǵ� ����� �Լ��� ��ũ�� ���·� �����ϱ� ���� ���
//�Ϲ������� ���� ����Ѵ� ����� �Լ��� ��ũ�� ��ó����(#define)�� �̿��ؼ� ��Ÿ����.

//#include <stdio.h>
//#define PI 3.14
//int main(void) {
//	int r = 3;
//	printf("%.2f\n", 2*PI*r);
//	system("pause");
//	return 0;
//}

//���ڸ� ������ ��ũ�� ��ó����: �Լ��� ���� ���·� ���ڸ� ���� �� �ִ�.
//#include <stdio.h>
//#define POW(x) (x*x)
//int main(void) {
//	int r = 3;
//	printf("%d\n", POW(r));
//	system("pause");
//	return 0;
//}

//��ó���� #define �� �ڵ带 ���� �ð��� ȹ�������� �ٿ��ش�.
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

//���Ǻ� ������: �������� �̷������ ������ �����ϴ� ���
//�Ϲ������� ������ �ҽ��ڵ� �̽��� �������� �ۼ�
//c���� �ý��� ���α׷��� �ۼ��Ҷ�, �ü���� ���� �ҽ��ڵ尡 �޶��� �� �ִ�.
//�̋� �ü���� ���� �������� ����Ǵ� �ҽ��ڵ带 �ٸ��� �� �� �ִ�.
//�ϵ��� ����� �ü���� �ٷ궧, ������ �´� �ҽ������� �־�� �� �� ����Ѵ�.

//���Ǻ� ������ #ifndef ~ #endif ����
//��� ������ ������ �ߺ��Ǿ� ������ �ʵ��� ����


//#include <stdio.h>
//#include "temp.h"
//#include "temp.h"//temp.h���Ͽ� �ִ� ���Ǻ� ������ #ifndef ~ #endif�� ���ؼ� �ߺ��ؼ� �ۼ��ص� ���� �ȶ��.
//
//int main(void) {
//	printf("%d\n", add(2, 3));
//	system("pause");
//	return 0;
//}

//���� ���� ������
//�Ϲ������� �ڽ��� ���� ���̺귯���� ���鶧, c��� ���ϰ�, ��������� ��� �ۼ��ؾ� �Ѵ�.
//������ ���ؼ� �� �� ȿ�����̰� ü������ ������ �� �� �ִ�

//#include <stdio.h>
//#include "temp1.h"
//
//
//int main(void) {
//    printf("%d\n", add(2, 3));
//    system("pause");
//    return 0;
//}
