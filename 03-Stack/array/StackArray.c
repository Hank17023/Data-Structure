#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"

StackArray* createStackArray(int size){
	StackArray *tmp = (StackArray*)malloc(sizeof(StackArray));
	tmp->capacity = size;
	tmp->stack = (int*)malloc(sizeof(int)*size);
	tmp->top = -1;
	return tmp;
}

void push(StackArray *stackArray,int value){
	if(isFull(stackArray)){
		printf("stack is full!!\n");
		return;
	}
	else{
		stackArray->top+=1;
		stackArray->stack[stackArray->top] = value;
	}
}

void pop(StackArray *stackArray){
	if(isEmpty(stackArray)){
		printf("stack is empty!!\n");
		return;
	}
	else{
		printf("%d\n",stackArray->stack[stackArray->top]);
		stackArray->top -= 1;
	} 
}

int top(StackArray *stackArray){
	return stackArray->top;
}

int isFull(StackArray *stackArray){
	return (stackArray->top+1 >= stackArray->capacity);
}

int isEmpty(StackArray *stackArray){
	// top == -1 -> stack is empty
	return (stackArray->top == -1);
}

int getSize(StackArray *stackArray){
	return stackArray->top+1;
}


