//스택
//스택: 한쪽으로 들어가서 한쪽으로 나오는 자료구조
//이러한 특성 때문에 수식 계산 등의 알고리즘에서 다방면으로 활용된다.
//push(스택에 데이터 집어넣기) + pop(스택에서 데이터 빼내기)로 이루어져 있다.

//리스트 형태를 가지기 때문에 배열 또는 연결리스트로 구현할 수 있다.
//가장 기본적인 자료구조로 난이도가 낮다

//배열을 이용한 스택 구현
//#include <stdio.h>
//#define SIZE 10000
//#define INF 9999999
//
//int stack[SIZE];
//int top = -1; //스택의 최상단을 의미하는 변수//스택 입구(입구이면서 출구)
//
//void push(int data) {
//	if (top == SIZE - 1) {
//		printf("스택 오버플로우가 발생했습니다.\n"); //스택이 다 차서 들어갈 수 없는 상태
//		return;
//	}
//	stack[++top] = data;
//}
//void pop() {
//	if (top == -1) {
//		printf("스택 언더플로우가 발생했습니다.\n");
//		return -INF;
//	}
//	return stack[top--];//현재 top이 가지고 있는 값을 반환하면서 top의 값이 1 줄어든다.
//}
//
//void show() {
//	printf("---스택 최상단---\n");
//	for (int i = top; i >= 0; i--) {
//		printf("%d\n", stack[i]);
//	}
//	printf("---스택 최하단---\n");
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

//배열을 이용해서 스택을 만들면 배열의 크기를 미리 정해주기 때문에
//불필요한 메모리공간을 낭비할 수 있다.
//그래서 연결리스트(포인터)를 이용한 스택 구현

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
////연결리스트를 이용한 구현이기 때문에 위와 같이 연결리스트의 노드를 만들어준다.
//
//typedef struct {
//	Node* top;
//}Stack;
////모든 스택은 top이라는 노드를 갖고 있어야 한다. 포인터를 갖고 있기 때문에 일종의 배열형태라고 할 수 있다.
//
//// (data | next )_top -> ( data | next ) -> (data | next ) -> NULL
////삽입을 할때 top위치에 와야 한다.
//삽입할 next가 현재 top이 되도록 만들고, 삽입할 node를 top이 되도록 만든다
//
//void push(Stack *stack, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = stack->top;
//	stack->top = node;
//}
//현재 top이 가리키는 그 다음의 노드가 top이 되도록 한다 그 후에 할당 해제
//void pop(Stack *stack) {
//	if (stack->top == NULL) {
//		printf("스택 언더플로우가 발생했습니다.");
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
//	printf("---스택 최상단---\n");
//	while (cur != NULL) {
//		printf("%d\n", cur->data);
//		cur = cur->next;
//	}
//	printf("---스택 최하단");
//}
//
//int main(void) {
//	Stack s;
//	s.top = NULL;//꼭 넣어야한다. 언더플로우나 loop문을 막을 수 있다.
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

//연결리스트를 이용해서 메모리의 낭비 없이 스택을 구현할 수 있다.
//많이 활용되니 꼭 기억하길


//스택을 활용한 계산기 만들기
//중위 표기법을 후위 표기법으로 변환하는 방법을 이해할 수 있다.
//후위 표기법을 계산하여 결과 값을 도출하는 방법을 이해할 수 있다.
//결과적으로 스택 자료구조를 활용하여 '계산기'를 구현할 수 있다.

//중위표기법
//일반적으로 사람이 수식을 표기할 때, 사용하는 표기 방법
// 예를 들어 7 * 5 + 3

//후위표기법
//컴퓨터가 연산하기 편한 수식
//연산자는 뒤쪽에 위치함
// 예를 들어 7 5 * 3 +

//스택을 활용해 수식을 계산하는 방법
// 1. 수식을 후위표기법으로 변환한다. -> 2. 후위 표기법을 계산하여 결과를 도출한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char data[100]; //숫자는 길 수 있기때문에 문자열로 받음
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
		printf("스택 언더플로 발생\n");
		return NULL;

	}
	Node* node = stack->top;
	char* data = (char*)malloc(sizeof(char) * 100);
	strcpy(data, node->data);
	stack->top = node->next;
	free(node);
	return data;
}

//중위표기법을 후위표기법으로 바꾸는 방법
//1. 피연산작 들어오면 바로 출력
//2. 연산자가 들어오면 자기보다 우선순위가 높거나 같은 것들을 빼고 자신을 스택에 담기
//3. 여는 괄호 (를 만남녀 무조건 스택에 담기
//4. 닫는 괄호 )를 만날때까지 스택에서 출력

//후위 표기법으로 변환 - 우선순위 함수 만들기
int getPriority(char* i) {
	if (!strcmp(i, "(")) return 0;
	if (!strcmp(i, "+")) || !strcmp(i, "-") return 1;
	if (!strcmp(i, "*")) || !strcmp(i, "/") return 2;
	return 3;
}

