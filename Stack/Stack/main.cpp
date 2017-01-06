#include <iostream>
#include <stdlib.h>

// ARRAY BASED IMPLEMENTATION
//typedef struct ArrayStack {
//	int capacity;
//	int size;
//	int *elements;
//};
//
//ArrayStack* createStack(int maxElements) {
//	ArrayStack *s;
//	s = (ArrayStack *)malloc(sizeof(ArrayStack));
//
//	s->elements = (int *)malloc(sizeof(int)*maxElements);
//	s->size = 0;
//	s->capacity = maxElements;
//
//	return s;
//}
//
//void pop(ArrayStack *s) {
//	if (s->size == 0) {
//		std::cout << "Stack Empty" << std::endl;
//		return;
//	}
//	else{
//		s->size--;
//	}
//	return;
//}
//
//int top(ArrayStack *s) {
//	if (s->size == 0) {
//		std::cout << "Stack Empty" << std::endl;
//		exit(0);
//	}
//	return s->elements[s->size - 1];
//}
//
//void push(ArrayStack *s, int element) {
//	if (s->size == s->capacity){
//		std::cout << "Stack Empty" << std::endl;
//	}
//	else{
//		s->elements[s->size++] = element;
//	}
//	return;
//}

// LIST BASED IMPLEMENTATION
//struct node{
//	int element;
//	struct node *next;
//}*top;
//
//int topElement() {
//	if (top == NULL) {
//		std::cout << "Stack Empty" << std::endl;
//		exit(0);
//	}
//	return top->element;
//}
//
//void push(int item) {
//	node * newNode = (struct node*)malloc(sizeof(struct node));
//	newNode->element = item;
//
//	if (top==NULL){
//		top = newNode;
//		newNode->next = NULL;
//	}
//	else{
//		newNode->next = top;
//		top = newNode;
//	}
//}
//
//void pop() {
//	top = top->next;
//}

int main() {
	//push(1);
	//push(2);
	//push(3);
	//push(4);
	//push(9001);
	//std::cout << topElement() << std::endl;
	//pop();
	//std::cout << topElement() << std::endl;
	//std::cout << topElement() << std::endl;
	//pop();
	//std::cout << topElement() << std::endl;
	//pop();
	//std::cout << topElement() << std::endl;
	//system("PAUSE");
}