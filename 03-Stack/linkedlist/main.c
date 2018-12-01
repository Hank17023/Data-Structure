#include <stdio.h>
#include <stdlib.h>
#include "StackLinkedList.h"

int main(int argc, char *argv[]) {
	
	StackLinkedList *stack;
	stack = createStackLinkedList();
	
	printf("=====push=====\n");
	push(stack,10);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	push(stack,50);
	displayStack(stack);
	
	printf("=====pop=====\n");
	pop(stack);
	pop(stack);
	pop(stack);
	push(stack,60);
	push(stack,70);
	pop(stack);
	displayStack(stack);
	
	return 0;
}
