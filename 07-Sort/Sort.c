#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Sort.h"

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void insertionSort(int *array, int size){
	int i,j,key;
	for(i=1;i<size;i++){
		key = array[i];
		for(j=i-1;j>=0 && key < array[j];j--){
			array[j+1] = array[j];
			array[j] = key;
		}
	}
}

void quickSort(int *array, int size){
	int i, j, front, end, pivot;
	front = 0;
	end = size-1;
	pivot = array[end];
	// partition
	for(i=-1,j=0;j<end;j++){
		if(array[j] < pivot){
			swap(&array[++i],&array[j]);
		}
	}
	swap(&array[++i],&array[end]);
	// size == 0 -> when partition loaction == 0
	// size == 1 -> when partition location == end -1	
	if(!(i-front==0 || i-front==1)) quickSort(&array[front],i-front);
	if(!(end-i==0 || end-i==1)) quickSort(&array[i+1],end-i);
}

void selectionSort(int *array, int size){
	int i,j,min;
	for(i=0;i<size;i++){
		min = i;
		for(j=i+1;j<size;j++){
			if(array[min] > array[j]) min = j;
		}
		swap(&array[i],&array[min]);
	}
}

void bubbleSort(int *array, int size){
	int i,j,flag;
	for(i=0;i<size-1;i++){
		flag=0;
		for(j=0;j<size-i-1;j++){
			if(array[j] > array[j+1]){
				swap(&array[j],&array[j+1]);
				flag=1;
			}
		}
		if(flag==0) break; // no change, then break
	}
}

int* mergeSort(int *array, int front, int end){
	// data size == 1 , return data, don't divide ...
	if(front < end){
		int *sortedArray = (int*)malloc(sizeof(int)*(end-front+1));
		int mid = (front + end)/2;
		// left sub-array
		int* leftArray = mergeSort(array,front,mid);
		// right sub-array
		int* rightArray = mergeSort(array,mid+1,end);		
		// merge left array and right  
		int leftIndex=0, rightIndex=0;
		int leftLen=mid-front+1, rightLen=end-mid;
		int sortedIndex=0;
		while(1){
			// case 1 : leftArray's index != len , rightArray's index !=len
			if( leftIndex!=leftLen && rightIndex!=rightLen ){
				if(leftArray[leftIndex]<rightArray[rightIndex]){
					sortedArray[sortedIndex++] = leftArray[leftIndex++];
				}
				else{
					sortedArray[sortedIndex++] = rightArray[rightIndex++];
				}
			}
			// case 2 : leftArray's index == len , rightArray's index !=len
			else if( leftIndex==leftLen && rightIndex!=rightLen ){
				sortedArray[sortedIndex++] = rightArray[rightIndex++];
			}
			// case 3 : leftArray's index != len , rightArray's index ==len
			else if( leftIndex!=leftLen && rightIndex==rightLen ){
				sortedArray[sortedIndex++] = leftArray[leftIndex++];
			}
			// case 4 : leftArray's index == len , rightArray's index ==len
			else{
				break;
			}
		}
		free(leftArray);
		free(rightArray);		
		return sortedArray;
	}
	// front == end
	else{
		int *sortedArray = (int*)malloc(sizeof(int)*(end-front+1));
		sortedArray[0] = array[front];
	}

}

void radixSort(int *array, int size,int maxDigit){
	int i,j,n=1;
	int lsd[100][100] = {0};
	int lsdIndex[100] = {0};
	
	while(n<=(int)pow(10,maxDigit-1)){
		for(i=0;i<size;i++){
			int index = (array[i]/n)%10;
			lsd[index][lsdIndex[index]++] = array[i];
		}	
		int k=0;
		for(i=0;i<10;i++){
			for(j=0;j<lsdIndex[i];j++,k++){
				array[k] = lsd[i][j];
			}
			lsdIndex[i] = 0;
	}
		n*=10;
		
	}
	for(i=0;i<size;i++)
		printf("%d ",array[i]);
}

