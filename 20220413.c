////���׿�����: ������ ���� �̿��ؼ� ���ǹ��� �����ϴ� ������
//#include <stdio.h>
//int main(void) {
//	int a = 7, b = 7;
//	printf("%d\n", (a == b) ? 100 : -100);
//	system("pause");
//	return 0;
//}

//��Ʈ ������
// ~ ����
// & �׸���
// | �Ǵ� 
// ^ ��Ÿ�� (�ΰ��� �� �߿��� �ϳ��� 1�϶� 1���)
// << ���� ����Ʈ 2�� ����� ����(���� ���)
//>> ������ ����Ʈ 2�� ����� ������

//�������� �켱����: ������ �켱������ ���
//++, -- > ! ~ > * / % > + - > << >> > �񱳿����� > ��Ʈ, ��, ���׿����� 

//���ǹ�: ���α׷��� �帧�� �����ϴ� ���
// if �� switch ��

//if ��: ������ ������ ������ ���, ���� ���� �˻� �� ���α׷� ���� ��� ����
// if (���� 1) {} else if (���� 2) {} else {} ����

//if �� ����
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

//if �� ����-���� �޸��� ũ�⸦ �Է� �޾Ƽ�, ��� ���
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

//if �� �ι� �������� �������� ������ ������ ��ġ�� �ʴ��� Ȯ���ؾ��Ѵ�.

//switch��: �پ��� ������ ���� �� ���
//switch (Ȯ�δ��) { case value1: ....case value2: ... Default: ...}

//switch �ǽ�
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

//switch ������ ���� ����ã��
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

//�ݺ���: Ư�� ���ǿ� �����Ҷ� �ݺ�
//for ��
//for (�ʱ�ȭ; ����; �ݺ� �� ��ɾ�) {}

//1 ~ 100 ���
//#include <stdio.h>
//int main(void) {
//	for (int i = 1; i <= 100; i++) { // �������� c���� �ʱ�ȭ�� �ۿ��� ���ִ� ���� �Ϲ���(�߿�X)
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//
//}

//1 ~ n �� ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n, sum = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) { // �������� c���� �ʱ�ȭ�� �ۿ��� ���ִ� ���� �Ϲ���(�߿�X)
//		sum += i;
//	}
//	printf("%d\n", sum);
//	printf("�������� ������ �̿��� ��: %d\n", (n * (n + 1)) / 2);
//	system("pause");
//	return 0;
//
//}

//���ѷ���(infinite loop): ������ �׻� ���̰ų� ���� �κ��� ��������� �߻�

//-1 �Էµɶ����� ���ϱ�
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

//while��: ���ǿ� ������ ��, �ݺ��Ǹ� break�� ���� Ż�� ���ؾ���
//while (����) {}

//Ư������ n�� ����ϱ�
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

//������ ���
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

//��ø�� �ݺ���: �ݺ��� ���ο� �ٸ� �ݺ����� �����ϴ� ����
//��ø �ɼ��� ���� Ƚ���� ���� ���·� �þ

//��ü ������ ���
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

//�Լ�: �Է��� �޾� ����ϴ� ����(���꼺)
//�Լ��� �ݺ��� �ٿ��ش�
// ��ȯ �ڷ��� �Լ��� (�Ű�����) { ������; return ��;}
//� ���� ����ϱ⸸ �ϴ� �Լ��� �Ű������� return ���� �ʿ� ����(�̶� ��ȯ �ڷ��� void)

//�� ���̱� �Լ�
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

//���ϱ� �Լ� �����

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


//��Ģ���� �Լ�
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
//�Լ��� ������� �͵��� ���̺귯����� �Ѵ�.
//������� ���� ���̺귯���̴�.

//����Լ�: �ڱ��ڽ��� �����ϴ� �Լ�, ���ѷ��� ����
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

//����Լ��� �ڽ��� ������ �ҷ����� ������ ���� Ƚ���� �ް��ϰ� ������ �� �ִ�.


//�迭: �ڷ����� ���� ���� �ڷḦ ȿ�������� ó���ϱ� ���� ����Ѵ�.
//�ε����� �����ͷ� �̷���� �ִ�.
//�ڷ��� �迭��[�迭�� ũ��]  = {�ʱ�ȭ ��}; //�ʱ�ȭ���� ���� ���� �ִ�.
// int a[10] = {0, }��� ���� ��� ���� 0���� �ʱ�ȭ�Ѵ�.
//�迭��[�ε���]�� ���ؼ� �迭�� ������ �� �ִ�

//#include <stdio.h>
//int main(void) {
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int i = 0; i <= 10; i++) {
//		printf("%d\n", a[i]);
//	}
//	system("pause");
//	return 0;
//}

//�迭�� ���� �߿��� �ִ� ã��

//#include <stdio.h>
//#include <limits.h> //�پ��� �ڷ��������� �Ѱ谪(�ִ� �ּҰ�)�� ������ �ش�����
//int main(void) {
//	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
//	int maxValue = INT_MIN; //INT_MIN -�� �̽ʾ� ���� �ȴ�. �׳� ���� ���� ���̶�� ����
//	for (int i = 0; i < 10; i++) {
//		if (a[i] >= maxValue) {
//			maxValue = a[i];
//		}
//	}
//	printf("%d", maxValue);
//	system("pause");
//	return 0;
//}

//INT_MIN : �ִ밪�� ���� �� ���� ����ϴ� ���, <limits.h>������Ͽ� ���ǵǾ������� ������ �ּڰ� ��ȯ

//���ڿ��� �迭
//c������ �⺻������ ���ڿ��� �ڷ����� �������� �ʴ´�.
//���ڿ��� ���ڸ� �������� �������(�迭)�����̴�.
//�� �������� �ذ��ϰ��� c++������ string �ڷ����� �����Ѵ�

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	char a[20];
//	scanf("%s", &a);
//	printf("%s", a);
//	system("pause");
//	return 0;
//}

//c���� ���ڿ��� ������ �迭�� ���ٴ� ���� ó�� ���� ������ �� �ִ�.
//������ c������ Ư�����ڿ� �ε����� �̿��ؼ� �ٷ� ������ �� �ִ�.


//#include <stdio.h>
//int main(void) {
//	char a[20] = "Hello World";
//	a[5] = '?';
//	printf("%s", a);
//	system("pause");
//	return 0;
//}

//���ڿ��� ���ѵ� l ���� ����ϱ�

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

//�������� ����� Ȱ�� ���
//���ݱ����� ������ �� ��ü�� �ڽ��� �ڷ����� �´� ���� �����ߴ�
//������ ������ Ư���� ������, �޸� �ּҰ� ��ü(�ڷ����� �԰�)�� �����Ѵ�.//� ������ ��ġ���� �����Ѵ�
//�޸� �ּ� ��ü�� ��� ������
//��ǻ�� �޸𸮿� �ٷ� ������ �� �ִ�.
//int *b = &a;�� ���� �����ϴµ�, �����Ҷ� *�� ������ �������� �˷��ֱ� ���� �����̴�
//���� ���Ŀ� ����ϴ� *b ���� *�� ������ ����b�� ����Ű�� �ּ��� ��(�ּ� �ƴϰ� �ּҿ� ��� ��)�� �ǹ��Ѵ�.
//���� ���Ŀ� ���� *�� �������������ڶ�� �θ���. �����Ϳ� ����ִ� �ּ��� ���� �����Ѵٰ� �ؼ� �ٿ��� �̸�

//������ ���� ������
//& : �ּҿ����� - ���� �տ� �ٿ��� ������ �޸� ���� �ּҰ��� �ǹ�
//������ *(����): ������ �����Ҷ� ���
//�������������� *: ����� ������ ������ ����Ű�� ������ ���Ѵ�.

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

//�迭�� �� ������ �ּҰ� ����ϱ�

//#include <stdio.h>
//int main(void) {
//	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for (int i = 1; i < 10; i++) printf("%d\n", &a[i]); 
//
//	system("pause");
//	return 0;
//}

//�������� 4����Ʈ�� �����ϱ� ������ �ּҰ��� 4�� ���̳���.

//�������� ������ ���
//�����ʹ� ��ǻ�� �ý����� Ư�� �޸𸮿� �ٷ� ������ �� �̚�.
//���� ������ �����ϴ� �߿��� �޷θ� ���� �������� �ʵ��� �ؾ��Ѵ�.
//int *a = 0X334; *a = 0; �� ���� ���� �ּҿ� �����ϴ� ����� ������ �ڵ��̴�.

//���� ������(�����͸� ������ ��ġ�°� ���� ���鶧 ���)

//#include <stdio.h>
//int main(void) {
//	int a = 5;
//	int *b = &a;
//	int **c = &b;
//	printf("a ��: %d\n", a);
//	printf("a�� �ּҰ�: %d\n", b);
//	printf("a ��: %d\n", *b);
//	printf("a�� �ּҰ�: %d\n", *c);
//	printf("b�� �ּҰ�: %d", c);
//	printf("a�� ��: %d\n", **c);
//	system("pause");
//	return 0;
//}

//�迭�� �����ʹ� ��� �����ϴ�
//�迭�� ������ ���Ŀ�, �迭 �̸� �� ��ü�� ������ ������ �����ϴ�.
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

//c���� ���ڸ� ó���ϴ� ����� ����&������ ���� ����
//c���α׷��� ���ڴ� �ƽ�Ű�ڵ带 ������. 1byte�� �����Ǿ� 0~127���� ���ڸ� ǥ���Ѵ�.
//������ ���ڴ� ���ڸ� ������ �ִ�.���� 0�� �ƽ�Ű�ڵ�� 48�� �ǹ��ϰ�, ���� A�� �ƽ�Ű�ڵ� 65�� �ǹ� a�� 97
//�ѱ��� ǥ���Ҷ��� �����ڵ带 ����Ѵ�.

//�ƽ�Ű�ڵ� �ǽ�
//#include <stdio.h>
//int main(void) {
//	char a = 65;
//	printf("%c\n", a+1);
//	system("pause");
//	return 0;
//}

//���� ����� �Լ�
//getchar()�� �̿��ؼ� ���� �Ѱ��� �Է¹��� �� �ִ�.
//#include <stdio.h>
//int main(void) {
//	char a = getchar();
//	printf("%c\n", a);
//	system("pause");
//	return 0;
//}

//���ڸ� ó���Ҷ�, ������ ������ ���� ���ȴ�.
//����(buffer)�� �ӽ������� Ư���� �����͸� �����ϱ� ���� �������� ���ȴ�.
//c���α׷��� �ڵ������� ���۸� �̿��� ������� ó���Ѵ�.
//���� ��û ���� ���� �Է��Ѵٸ� ��ǻ�ʹ� ��� �����͸� �����ص� ��Ұ� �ʿ��ϴ�. �̰��� �����̴�.

//�Է� ���۷� ���� ���� �߻��ϴ� ����
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

//���� ���� ���α׷��� �ٹٲ��� ���ڷ� �ν��ؼ� ���ڸ� �Է��ϱ� ���� ���α׷��� ����ȴ�.
//���� �ٹٲ��� ���ڷ� ������� �ʵ��� �ϴ� ��ġ�� �ʿ��ϴ�.

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a;
//	char c;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	int temp;  //��� ���ڴ� �ƽ�Ű�ڵ忡 ���� ���ڷ� ǥ���ǹǷ� int���� ���
//	//�� ���ھ� �޾Ƽ� ������ ��(EOF)�̰ų� ���๮��(\n)�� ������ �Է��� ���߹Ƿ� �׻� �Է� ���۸� ����.
//	//getchar()�Լ��� �̿��ؼ� �����ִ� ���۸� ���� ���̴�.
//	while ((temp = getchar()) != EOF && temp != '\n') {}
//	scanf("%c", &c);
//	printf("%c\n", c);
//	system("pause");
//	return 0;
//}
//Ű����� ���ڸ� �Է��ϸ� �� ���ڰ� �Է¹��ۿ� �ԷµǾ��ٰ�
//����\n�� ������ ������ ������ ���ڰ� �� ���۴� �������
//ȭ���� ��¹��ۿ� ���ڰ� ����Ǿ��ٰ�
//Ư�� ���ǿ� ���� ���۰� ������� ȭ�鿡 ��µȴ�.
//��, ���α׷��� �ü���� �����͸� ȿ�������� ó���ϱ�����
//����� ���۸� �̿��Ѵ�.
//���� ���۰� ���� 1����Ʈ�� ó���ϸ� cpu ���Ƚ���� �޸� ���� Ƚ���� ��������.
//���۸�: ����� ���ۿ� �����͸� �����ϴ� �ൿ


//���ڿ� ���� �Լ�
//���ڿ��� ��ǻ�� �޸� ������ �������� null(\0)���� �����ϰ� �ִ�.
//���ڿ��� ���� �˸��� ���� null���� ��Ÿ����.(null���� ������ ���Ӿ��� ���ڿ� ���)
 

// ���ڿ� ���·� �����͸� ����ϸ� �����Ϳ� Ư���� ���ڿ��� �ּҸ� �ְ� �ȴ�.
//�Ʒ� �ڵ�� "hello world"���ڿ��� �б� �������� �޸� ������ ���� �ڿ� �� ��ġ�� ó���Ѵ�.
//�̷��� ���ڿ��� '���ڿ� ���ͷ�'�̶�� �Ѵ�. �̴� �����Ϸ��� �˾Ƽ� �޸� �ּҸ� �����Ѵ�.

//#include <stdio.h>
//int main(void) {
//    char* a = "hello world"; //������ ������ ���ڿ��� ���ó�� �ִ°� = ���ڿ� ���ͷ�(����Ұ���)
//    //�����ϰ� ������ ������ ���� a�� ����Ű�� ���ڿ��� �ٸ� ������ �ٲٸ� �ȴ�.
//    printf("%s\n", a); //���ڿ��� ���������� �迭�̰�, �����Ϳ� ġȯ�� �� �ֱ� ������ *a�� �Ⱦ����̴�.
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

//���ڿ� ����� �Լ�
//scanf()�Լ��� ������ ���������� �Է¹�����, gets()�Լ��� ������� �����Ͽ� ������ �Է¹޴´�.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//    char a[100];
//    gets(a); //gets() �迭�� ��ü ������ ������� �ʾ� ������ �����
//    //�ǹ������� gets()��� gets_s()�� �̿��Ѵ�. Ư���� ������ŭ�� �Է¹޴´�.
//    printf("%s\n", a);
//    system("pause");
//    return 0;
//}

//gets()�Լ��� ������ ũ�⸦ ����� �Է��� �޾ƹ�����.
//������ ���� ������ ������ ����� gets_s()�Լ�, �Ű������� �ΰ� �޴´�. -> ������ ũ�⸦ ����� ��Ÿ�� ������ ����.(���ȿ� ����)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//    char a[100];
//    gets_s(a, sizeof(a));
//    system("pause");
//    return 0;
//}

//c����� ���ڿ� ó�� �Լ�
//���߿� c++�� �̿��ϸ� ���� ���ϰ� �پ��� �Լ� ��밡��
//<string.h> ������Ͽ� ��� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void) {
//    char a[20] = "leesuji";
//    char b[10] = "suji";
//
//
//    printf("%d\n", strlen(a)); //���ڿ� ���� ��ȯ
//    printf("%d\n", strcmp(a, b)); //���ڿ�1�� ���ڿ� 2���� ���������� ���̸� -1, �ڸ� 1 ��ȯ
//    strcpy(a, b);  //���ڿ� ����
//    printf("%s\n", a);
//    strcat(a, b); //���ڿ�1�� ���ڿ� 2�� ����
//    printf("%s\n", a); 
//    printf("%s\n", strstr(a, b)); //�� ���ڿ����� ª�� ���ڿ��� ã�Ƽ� �� ��ġ�� ��ȯ
//    
//    system("pause");
//    return 0;
//}

//c���� ���ڿ� ��, ����, Ž�� ���� �˰����� ������� ���� �Լ� ���·� �����ȴ�.
//strlen(): ���� ��ȯ %d
//strcmp(a, b): ������ a�� ���̸� -1, ���̸� 1��ȯ %d
//strcpy(a, b): a�� b�� ����
//strcat(a, b): a�� b�� ����
//strstr(a, b): �乮�ڿ��� ���� ���ڿ��� �����ϴ��� Ȯ����, �� ��ġ���� ������ ��ȯ

