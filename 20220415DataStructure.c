//자료구조의 필요성: 데이터를 효과적으로 저장하고 처리하는 방법(불필요한 낭비 줄임)
//자료구조의 종류
//선형구조: 배열, 연결리스트, 스택, 큐
//비선형구조: 트리, 그래프


//프로그램 성능 측정 방법론
//시간복잡도(time complexity): 알고리즘에 사용되는 연산횟수
//공간복잡도(space complexity): 알고리즘에 사용되는 메모리의 양


//시간복잡도를 표현할 때, 최악의 경우를 나타내는 Big-O 표기법을 사용
//O(n) -> 하나의 반복문 , O(n^2) -> 이중 반복문
//n = 1000번 연산, nlonn = 10000번 연산, n^2 = 1000000의 연산, ..
//보통 10억연산이 넘어가면 1초 이상이 걸린다.

//공간복잡도는 MB단위
//int a[1000]: 4KB, int a[1000000]: 4MB, int a[2000][2000]: 16MB

//연결리스트 필요성, 쓰임새 
//연결리스크 필요성: 배열을 사용하여 데이터를 순차적으로 저장하고 나열할 수 있는데
//배열을 사용하는 경우 메모리공간이 불필요하게 낭비될 수 있다.

//배열 기반의 리스트
//데이터를 순차적으로 저장하고, 처리할 떄는 배열 기반의 리스트를 간단히 이용할 수 있다
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

//배열 기반 리스트 특징
//배열로 만들었으므로 특정한 위치의 원소에 즉시 접근할 수 있다.
//데이터가 들어갈 공간을 미리 메모리에 할당해야 한다는 단점
//원하는 위치로의 삽입이나 삭제가 비효율적

//일반적으로 연결리스트는 구조체와 포인터를 함께 사용하여 구현
//연결리스트는 리스트 중간지점에 노드를 추가하거나 삭제할 수 있어야 한다.
//필요한 때마다 메모리 공간을 할당 받는다.(동적할당 이용)

//단일 연결 리스트 (data | next) -> (data | next) -> (data | next)
//하나의 구조체에 data와 다음 노드를 가리키는 next가 존재
//포인터를 이용해서 단방향적으로 다음 노드를 가리킴
//일반적으로 연결리스트의 시작 노드를 head라고 부르고 별도로 관리
//마지막 노드의 next가 가리키는 값은 없으므로 null값을 넣는다.

//연결리스트 구조체 만들기
//#define _CRT_SECURE_NO_WARNINGS_
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int data;
//	struct Node* next; //그 다음 변수를 가리키는 next 구조체 변수 선언
//} Node;
//Node* head;//항상 연결리스트는 head로 시작하기 때문에 head 노드를 만들어줘야한다.(동적할당을 할것이기 때문에 포인터 사용)
//////연결리스트 구조체 사용하기


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
////연결리스트 삽입과정
//void add(Node*root, int data) {
//	Node *node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = root->next;
//	root->next = node;
//}
//
//
////연결리스트 삭제과정
//void del(Node* root) {
//	Node* front = root->next;
//	root->next = front->next;
//	free(front);
//}
//
////연결 리스트 메모리 해제 함수
//void freeAll(Node* root) {
//	Node* cur = head->next;
//	while (cur != NULL) {
//		Node* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}
////연결리스트 전체 출력 함수
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
//연결리스트 구현 주의점
//소스코드에 덧붙여서 삽입, 삭제 기능에서의 예외상항을 처리할 필요가 있다.
//삭제할 원소가 없는데 삭제하는 경우, head노드 자체를 잘못 넣는 경우 등을 체크해야한다

//연결리스트의 특징
//삽입과 삭제가 배열에 비해 간단
//배열과 다르게 특정 인덱스에 접근하지 못하고, 원소를 차례대로 검색
//추가적인 포인터 변수가 사용되어 메모리 공간 낭비
//연결리스트는 데이터를 선형적으로 저장하고 처리하는 방법
//기존에 배열을 이용했을때보다 삽입과 삭제가 많은 경우에서 효율적
//특정 인덱스에 바로 참조해야할때가 많다면 배열을 이용하는 것이 효율적


//양방향 연결리스트: 머리와 꼬리를 모두 가진다
//각 노드는 앞노드와 뒤 노드의 정보를 모두 저장하고 있다.
//데이터를 '오름차순'으로 저장하는 양방향 연결리스트 구현
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

//양방향 연결 리스트 삽입과정

void insert(int data) {
	/*Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	root->next = node->prev;
	node->prev = root->next;
	Node* back = root->next;
	back->prev = node->next;
	node->next = back->prev;*/ //내가 혼자 만든거다..맞는지는 잘 모르겠다ㅜㅜ
	//root의 next가 node(삽입할것)을 가리키고, node의 pre가 root의 next를 가리키도록 한다.
	//그 후에 back(기존의 root앞)의 pre가 node의 pre를 가리키고, node의 next가 back의 pre를 가리킴
	//순서를 잘 지켜야한다.
	
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
//양방향 연결 리스트 구현에 있어서 주의점
//위 소스코드에 덧붙여서 삽입 및 삭제 기능에서의 예외 상항을 처리할 필요가 있다.
//더이상 삭제할 원소가 없는데 삭제하는 경우를 주의해야 한다.

//양방향 연결 리스트 장점: 리스트의 앞에서 또는 뒤에서 모두 접근 가능하다(메모리 공간 단일연결보다 2배 차지)