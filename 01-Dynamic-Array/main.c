#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

int main(int argc, char *argv[]) {
	int i;
	DynamicArray *array = createDunamicArray();	

	printf("size=%d\n",array->size);
	printf("capacity=%d\n",array->capacity);
	printf("===========================\n");
	
	insertItem(array,1);
	insertItem(array,2);
	insertItem(array,3);
	insertItem(array,4);
	insertItem(array,5);
	insertItem(array,6);
	insertItem(array,7);
	insertItem(array,8);
	insertItem(array,9);
	
	printf("size=%d\n",array->size);
	printf("capacity=%d\n",array->capacity);

	for(i=0;i<array->size;i++){
		printf("%d\n",array->array[i]);
	}
	
	
	return 0;
}
\
