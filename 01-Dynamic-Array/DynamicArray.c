#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

DynamicArray* createDunamicArray(){
	DynamicArray *array = (DynamicArray*)malloc(sizeof(DynamicArray));
	array->capacity = 1;
	array->size = 0;
	array->array = (int*)malloc(sizeof(int)*array->capacity);
	return array;
}

void insertItem(DynamicArray* dynamicArr, int value){
	// dynamicArr;
	if(dynamicArr->size+1 > dynamicArr->capacity){
		// realloc dynamicArr->array
		int *temp = (int*)malloc(sizeof(int)*dynamicArr->capacity*2);
		dynamicArr->capacity*=2;
		int i;
		for(i=0;i<dynamicArr->size;i++){
			temp[i] = dynamicArr->array[i];
		}
		temp[dynamicArr->size++] = value;
		free(dynamicArr->array);
		dynamicArr->array = temp;
	}
	else{
		dynamicArr->array[dynamicArr->size++] = value;
	}
}
