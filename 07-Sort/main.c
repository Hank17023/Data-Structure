#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

int main(int argc, char *argv[]) {
	int i;
	//int array[ARRAY_SIZE] = {9,4,1,6,7,3,8,2,5,10,21,15,13,76};
	int array[ARRAY_SIZE] = {29,35,49,241,45,1,38,27,321,5,20,21,33,36,19,48,25,46,12,7,22,26,16,32,8,15,132,28,23,2,43,14,50,37,9,42,24,30,31,4,3,44,17,39,11,13,40,6,41,18,34,47,10};
	// int array[ARRAY_SIZE] = {5,3,8,6,2,7,1,4};
	// int array[ARRAY_SIZE] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
	// int *p_array = (int*)malloc(sizeof(int)*ARRAY_SIZE);
	// p_array = array;
	
	// insertionSort(array,ARRAY_SIZE);
	
	// quickSort(array,ARRAY_SIZE);
	
	// selectionSort(array,ARRAY_SIZE);
	
	// bubbleSort(array,ARRAY_SIZE);
	
	// p_array = mergeSort(p_array,0,ARRAY_SIZE-1);

	// maxDigit -> ´X¦ì¼Æ
	radixSort(array,ARRAY_SIZE,3);
	



	return 0;
}
