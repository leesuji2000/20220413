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

//����Լ��� �ڽ��� ������ �ҷ����� ������ ���� Ƚ���� �ް��ϰ� ������ �� �ִ�.




