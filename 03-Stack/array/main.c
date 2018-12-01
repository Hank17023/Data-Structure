#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=0;
	StackArray *stackArray = createStackArray(10);
	
	printf("=====PUSH=====\n");
	push(stackArray,10);
	push(stackArray,20);
	push(stackArray,30);
	push(stackArray,40);
	push(stackArray,50);
	push(stackArray,60);
	push(stackArray,70);
	push(stackArray,80);
	push(stackArray,90);
	push(stackArray,100);
	
	
	for(i;i<=stackArray->top;i++){
		printf("%d\n",stackArray->stack[i]);
	}
	
	printf("top:%d\n",top(stackArray));
	printf("getSize:%d\n",getSize(stackArray));
	
	printf("=====POP=====\n");
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	pop(stackArray);
	
	push(stackArray,100);
	
	printf("top:%d\n",top(stackArray));
	
	printf("getSize:%d\n",getSize(stackArray));
	
	return 0;
}
