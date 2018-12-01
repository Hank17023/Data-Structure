#include <stdio.h>
#include <stdlib.h>
#include "StackLinkedList.h"

StackLinkedList* createStackLinkedList(){
	StackLinkedList *tmp =  (StackLinkedList*)malloc(sizeof(StackLinkedList));
	tmp->top = NULL;
	return tmp;
}

void push(StackLinkedList* stack, int value){
	LinkedList *node = (LinkedList*)malloc(sizeof(LinkedList));
	node->value = value;
	node->next = stack->top;
	stack->top = node;
}

void pop(StackLinkedList* stack){
	if(isEmpty(stack)){
		printf("stack is empty!!\n");
	}
	else{
		LinkedList *tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
}

int isEmpty(StackLinkedList* stack){
	return stack->top == NULL;
}

void displayStack(StackLinkedList* stack){
	if(isEmpty(stack)){
		printf("stack is empty!!\n");
	}
	else{
		LinkedList *tmp = stack->top;
		while(tmp!=NULL){
			printf("%d\n",tmp->value);
			tmp = tmp->next;
		}
	}
}
