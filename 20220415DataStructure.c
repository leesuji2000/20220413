//�ڷᱸ���� �ʿ伺: �����͸� ȿ�������� �����ϰ� ó���ϴ� ���(���ʿ��� ���� ����)
//�ڷᱸ���� ����
//��������: �迭, ���Ḯ��Ʈ, ����, ť
//��������: Ʈ��, �׷���


//���α׷� ���� ���� �����
//�ð����⵵(time complexity): �˰��� ���Ǵ� ����Ƚ��
//�������⵵(space complexity): �˰��� ���Ǵ� �޸��� ��


//�ð����⵵�� ǥ���� ��, �־��� ��츦 ��Ÿ���� Big-O ǥ����� ���
//O(n) -> �ϳ��� �ݺ��� , O(n^2) -> ���� �ݺ���
//n = 1000�� ����, nlonn = 10000�� ����, n^2 = 1000000�� ����, ..
//���� 10�￬���� �Ѿ�� 1�� �̻��� �ɸ���.

//�������⵵�� MB����
//int a[1000]: 4KB, int a[1000000]: 4MB, int a[2000][2000]: 16MB

//���Ḯ��Ʈ �ʿ伺, ���ӻ� 
//���Ḯ��ũ �ʿ伺: �迭�� ����Ͽ� �����͸� ���������� �����ϰ� ������ �� �ִµ�
//�迭�� ����ϴ� ��� �޸𸮰����� ���ʿ��ϰ� ����� �� �ִ�.

//�迭 ����� ����Ʈ
//�����͸� ���������� �����ϰ�, ó���� ���� �迭 ����� ����Ʈ�� ������ �̿��� �� �ִ�
//#include <stdio.h>
//#define INF 1000
//
//int arr[INF];
//int count = 0;
//
//void addBack(int data) {
//	arr[count] = data;
//	count++;
//}
//void addFirst(int data) {
//	for (int i = count; i > 0; i--) {
//		arr[i] = arr[i - 1];
//
//	}
//	arr[0] = data;
//	count++;
//}
//void removeAt(int index) {
//	for (int i = index; i < count - 1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	count--;
//}
//void show() {
//	for (int i = 0; i < count; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main(void) {
//	addFirst(4);
//	addFirst(5);
//	addBack(7);
//	addBack(7);
//	addFirst(9);
//	addFirst(10);
//	removeAt(5);
//	show();
//	system("pause");
//	return 0;
//}

//�迭 ��� ����Ʈ Ư¡
//�迭�� ��������Ƿ� Ư���� ��ġ�� ���ҿ� ��� ������ �� �ִ�.
//�����Ͱ� �� ������ �̸� �޸𸮿� �Ҵ��ؾ� �Ѵٴ� ����
//���ϴ� ��ġ���� �����̳� ������ ��ȿ����

//�Ϲ������� ���Ḯ��Ʈ�� ����ü�� �����͸� �Բ� ����Ͽ� ����
//���Ḯ��Ʈ�� ����Ʈ �߰������� ��带 �߰��ϰų� ������ �� �־�� �Ѵ�.
//�ʿ��� ������ �޸� ������ �Ҵ� �޴´�.(�����Ҵ� �̿�)

//���� ���� ����Ʈ (data | next) -> (data | next) -> (data | next)
//�ϳ��� ����ü�� data�� ���� ��带 ����Ű�� next�� ����
//�����͸� �̿��ؼ� �ܹ��������� ���� ��带 ����Ŵ
//�Ϲ������� ���Ḯ��Ʈ�� ���� ��带 head��� �θ��� ������ ����
//������ ����� next�� ����Ű�� ���� �����Ƿ� null���� �ִ´�.

//���Ḯ��Ʈ ����ü �����
//#define _CRT_SECURE_NO_WARNINGS_
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int data;
//	struct Node* next; //�� ���� ������ ����Ű�� next ����ü ���� ����
//} Node;
//Node* head;//�׻� ���Ḯ��Ʈ�� head�� �����ϱ� ������ head ��带 ���������Ѵ�.(�����Ҵ��� �Ұ��̱� ������ ������ ���)
//////���Ḯ��Ʈ ����ü ����ϱ�


//int main(void) {
//	head = (Node*)malloc(sizeof(Node));
//	Node* node1 = (Node*)malloc(sizeof(Node));
//	node1->data = 1;
//	Node* node2 = (Node*)malloc(sizeof(Node));
//	node2->data = 2;
//	head->next = node1;
//	node1->next = node2;
//	node2->next = NULL;
//	Node* cur = head->next;
//	while (cur != NULL) {
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	system("pause");
//	return 0;
//}
////���Ḯ��Ʈ ���԰���
//void add(Node*root, int data) {
//	Node *node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = root->next;
//	root->next = node;
//}
//
//
////���Ḯ��Ʈ ��������
//void del(Node* root) {
//	Node* front = root->next;
//	root->next = front->next;
//	free(front);
//}
//
////���� ����Ʈ �޸� ���� �Լ�
//void freeAll(Node* root) {
//	Node* cur = head->next;
//	while (cur != NULL) {
//		Node* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}
////���Ḯ��Ʈ ��ü ��� �Լ�
// 
//void showAll(Node* root) {
//	Node* cur = head->next;
//	while (cur != NULL) {
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
//
//int main(void) {
//	head = (Node*)malloc(sizeof(Node));
//	head->next = NULL;
//	add(head, 1);
//	add(head, 0);
//	add(head, -1);
//	del(head);
//	showAll(head);
//	freeAll(head);
//	system("pause");
//	return 0;
//}
//���Ḯ��Ʈ ���� ������
//�ҽ��ڵ忡 ���ٿ��� ����, ���� ��ɿ����� ���ܻ����� ó���� �ʿ䰡 �ִ�.
//������ ���Ұ� ���µ� �����ϴ� ���, head��� ��ü�� �߸� �ִ� ��� ���� üũ�ؾ��Ѵ�

//���Ḯ��Ʈ�� Ư¡
//���԰� ������ �迭�� ���� ����
//�迭�� �ٸ��� Ư�� �ε����� �������� ���ϰ�, ���Ҹ� ���ʴ�� �˻�
//�߰����� ������ ������ ���Ǿ� �޸� ���� ����
//���Ḯ��Ʈ�� �����͸� ���������� �����ϰ� ó���ϴ� ���
//������ �迭�� �̿����������� ���԰� ������ ���� ��쿡�� ȿ����
//Ư�� �ε����� �ٷ� �����ؾ��Ҷ��� ���ٸ� �迭�� �̿��ϴ� ���� ȿ����


//����� ���Ḯ��Ʈ: �Ӹ��� ������ ��� ������
//�� ���� �ճ��� �� ����� ������ ��� �����ϰ� �ִ�.
//�����͸� '��������'���� �����ϴ� ����� ���Ḯ��Ʈ ����
//(prev | data | next) <-> (prev | data | next) ...
#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* prev;
	struct Node* next;
}Node;

Node* head, * tail;

//����� ���� ����Ʈ ���԰���

void insert(int data) {
	/*Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	root->next = node->prev;
	node->prev = root->next;
	Node* back = root->next;
	back->prev = node->next;
	node->next = back->prev;*/ //���� ȥ�� ����Ŵ�..�´����� �� �𸣰ڴ٤̤�
	//root�� next�� node(�����Ұ�)�� ����Ű��, node�� pre�� root�� next�� ����Ű���� �Ѵ�.
	//�� �Ŀ� back(������ root��)�� pre�� node�� pre�� ����Ű��, node�� next�� back�� pre�� ����Ŵ
	//������ �� ���Ѿ��Ѵ�.
	
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	Node* cur;
	cur = head->next;
	while (cur->data < data && cur != tail) {
		cur = cur->next;
	}
	Node* prev = cur->prev;
	prev->next = node;
	node->prev = prev;
	cur->prev = node;
	node->next = cur;
}

void removeFront() {
	Node* node = head->next;
	head->next = node->next;
	Node* next = node->next;
	next->prev = head;
	free(node);
}
void show() {
	Node* cur = head->next;
	while (cur != tail) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

int main(void) {
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));
	head->next = tail;
	head->prev = head;
	tail->next = tail;
	tail->prev = head;
	insert(2);
	insert(1);
	insert(3);
	insert(9);
	insert(7);
	removeFront();
	show();
	system("pause");
	return 0;
}
//����� ���� ����Ʈ ������ �־ ������
//�� �ҽ��ڵ忡 ���ٿ��� ���� �� ���� ��ɿ����� ���� ������ ó���� �ʿ䰡 �ִ�.
//���̻� ������ ���Ұ� ���µ� �����ϴ� ��츦 �����ؾ� �Ѵ�.

//����� ���� ����Ʈ ����: ����Ʈ�� �տ��� �Ǵ� �ڿ��� ��� ���� �����ϴ�(�޸� ���� ���Ͽ��Ẹ�� 2�� ����)