//�Լ�������
//�Լ��� �̸��� �̿��ؼ� Ư���� �Լ��� ȣ��, �Լ��̸��� �޸� �ּҸ� ��ȯ

//�Լ��� �̸��� ���������� �޸� �ּҰ��� ���� �ǽ�
//#include <stdio.h>

//void function() {
//	printf("It's my funciton");
//}
//int main(void) {
//	printf("%d\n", function);
//	system("pause");
//	return 0;
//}

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
//�Լ������͸� ���� ������� �ʱ� ������ ��ǻ���� ������ �̿��ϴµ� ����� �ȴ�
//c��� ���α׷��� ��� �Լ��� ���������� ������ ���·� ������ �� �ִ�.

//����ü: �������� ������ ��� �ϳ��� ��ü�� ǥ���� �� �ִ�.
//�迭���� �ٸ��� �ٸ� �ڷ����� ������ ���, �پ��� ��ü�� ǥ���� �� �ִ�.
// struct ����ü�� { �ڷ���1 ������; ...}
//����ü�� ���� ����� ����(.�� �̿��ؼ� ����ü������ �����Ѵ�)
//struct ����ü������ ����ü����; //����ü ���� ����
//string �Լ��� �̿��ؼ� ����(strcpy)�Ѵ�.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//struct student {
//	char name[10];
//	int age;
//	char grade[10];
//};
//int main(void) {
//	struct student s; //struct student s = {"leesuji", 23, "A"} ���ʴ�� �־� �ʱ�ȭ�� �� ����
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
//} s; //�̷��� ���� ����ü ����� ���ÿ� ��������(����ü����) s�� ������ �� �ִ�
//
//
//typedef struct student {
//	char name[10];
//	int age;
//	char grade[10];
//} student; //typedef�� ����ϸ� ���߿� ����ü �����Ҷ� student s;��� �����Ѹ� �ȴ�. struct�� �Ⱥٿ�����


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