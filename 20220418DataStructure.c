//����
//����: �������� ���� �������� ������ �ڷᱸ��
//�̷��� Ư�� ������ ���� ��� ���� �˰��򿡼� �ٹ������ Ȱ��ȴ�.
//push(���ÿ� ������ ����ֱ�) + pop(���ÿ��� ������ ������)�� �̷���� �ִ�.

//����Ʈ ���¸� ������ ������ �迭 �Ǵ� ���Ḯ��Ʈ�� ������ �� �ִ�.
//���� �⺻���� �ڷᱸ���� ���̵��� ����

//�迭�� �̿��� ���� ����
//#include <stdio.h>
//#define SIZE 10000
//#define INF 9999999
//
//int stack[SIZE];
//int top = -1; //������ �ֻ���� �ǹ��ϴ� ����//���� �Ա�(�Ա��̸鼭 �ⱸ)
//
//void push(int data) {
//	if (top == SIZE - 1) {
//		printf("���� �����÷ο찡 �߻��߽��ϴ�.\n"); //������ �� ���� �� �� ���� ����
//		return;
//	}
//	stack[++top] = data;
//}
//void pop() {
//	if (top == -1) {
//		printf("���� ����÷ο찡 �߻��߽��ϴ�.\n");
//		return -INF;
//	}
//	return stack[top--];//���� top�� ������ �ִ� ���� ��ȯ�ϸ鼭 top�� ���� 1 �پ���.
//}
//
//void show() {
//	printf("---���� �ֻ��---\n");
//	for (int i = top; i >= 0; i--) {
//		printf("%d\n", stack[i]);
//	}
//	printf("---���� ���ϴ�---\n");
//}
//
//int main(void) {
//	push(7);
//	push(5);
//	push(4);
//	pop();
//	push(6);
//	pop();
//	show();
//	system("pause");
//	return 0;
//}

//�迭�� �̿��ؼ� ������ ����� �迭�� ũ�⸦ �̸� �����ֱ� ������
//���ʿ��� �޸𸮰����� ������ �� �ִ�.
//�׷��� ���Ḯ��Ʈ(������)�� �̿��� ���� ����

//#include<stdio.h>
//#include <stdlib.h>
//#define INF 9999999
//
//typedef struct {
//	int data;
//	struct Node* next;
//
//}Node;
//
////���Ḯ��Ʈ�� �̿��� �����̱� ������ ���� ���� ���Ḯ��Ʈ�� ��带 ������ش�.
//
//typedef struct {
//	Node* top;
//}Stack;
////��� ������ top�̶�� ��带 ���� �־�� �Ѵ�. �����͸� ���� �ֱ� ������ ������ �迭���¶�� �� �� �ִ�.
//
//// (data | next )_top -> ( data | next ) -> (data | next ) -> NULL
////������ �Ҷ� top��ġ�� �;� �Ѵ�.
//������ next�� ���� top�� �ǵ��� �����, ������ node�� top�� �ǵ��� �����
//
//void push(Stack *stack, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = stack->top;
//	stack->top = node;
//}
//���� top�� ����Ű�� �� ������ ��尡 top�� �ǵ��� �Ѵ� �� �Ŀ� �Ҵ� ����
//void pop(Stack *stack) {
//	if (stack->top == NULL) {
//		printf("���� ����÷ο찡 �߻��߽��ϴ�.");
//		return -INF;
//	}
//	Node* node = stack->top;
//	int data = node->data;
//	stack->top = node->next;
//	free(node);
//	return node->data;
//}
//
//void show(Stack*stack) {
//	Node* cur = stack->top;
//	printf("---���� �ֻ��---\n");
//	while (cur != NULL) {
//		printf("%d\n", cur->data);
//		cur = cur->next;
//	}
//	printf("---���� ���ϴ�");
//}
//
//int main(void) {
//	Stack s;
//	s.top = NULL;//�� �־���Ѵ�. ����÷ο쳪 loop���� ���� �� �ִ�.
//
//	push(&s, 7);
//	push(&s, 5);
//	push(&s, 4);
//	pop(&s);
//	push(&s, 6);
//	pop(&s );
//	show(&s);
//	system("pause");
//	return 0;
//}

//���Ḯ��Ʈ�� �̿��ؼ� �޸��� ���� ���� ������ ������ �� �ִ�.
//���� Ȱ��Ǵ� �� ����ϱ�


//������ Ȱ���� ���� �����
//���� ǥ����� ���� ǥ������� ��ȯ�ϴ� ����� ������ �� �ִ�.
//���� ǥ����� ����Ͽ� ��� ���� �����ϴ� ����� ������ �� �ִ�.
//��������� ���� �ڷᱸ���� Ȱ���Ͽ� '����'�� ������ �� �ִ�.

//����ǥ���
//�Ϲ������� ����� ������ ǥ���� ��, ����ϴ� ǥ�� ���
// ���� ��� 7 * 5 + 3

//����ǥ���
//��ǻ�Ͱ� �����ϱ� ���� ����
//�����ڴ� ���ʿ� ��ġ��
// ���� ��� 7 5 * 3 +

//������ Ȱ���� ������ ����ϴ� ���
// 1. ������ ����ǥ������� ��ȯ�Ѵ�. -> 2. ���� ǥ����� ����Ͽ� ����� �����Ѵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char data[100]; //���ڴ� �� �� �ֱ⶧���� ���ڿ��� ����
	struct Node* next;
	
}Node;

typedef struct Stack {
	Node* top;
}Stack;

void push(Stack* stack, char *data) {
	Node* node = (Node*)malloc(sizeof(Node));
	strcpy(node->data, data);
	node->next = stack->top;
	stack->top = node;
}

char* getTop(Stack* stack) {
	Node* top = stack->top;
	return top->data;
}

char* pop(Stack* stack) {
	if (stack->top == NULL) {
		printf("���� ����÷� �߻�\n");
		return NULL;

	}
	Node* node = stack->top;
	char* data = (char*)malloc(sizeof(char) * 100);
	strcpy(data, node->data);
	stack->top = node->next;
	free(node);
	return data;
}

//����ǥ����� ����ǥ������� �ٲٴ� ���
//1. �ǿ����� ������ �ٷ� ���
//2. �����ڰ� ������ �ڱ⺸�� �켱������ ���ų� ���� �͵��� ���� �ڽ��� ���ÿ� ���
//3. ���� ��ȣ (�� ������ ������ ���ÿ� ���
//4. �ݴ� ��ȣ )�� ���������� ���ÿ��� ���

//���� ǥ������� ��ȯ - �켱���� �Լ� �����
int getPriority(char* i) {
	if (!strcmp(i, "(")) return 0;
	if (!strcmp(i, "+")) || !strcmp(i, "-") return 1;
	if (!strcmp(i, "*")) || !strcmp(i, "/") return 2;
	return 3;
}

