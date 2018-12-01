#include <stdio.h>
#include <stdlib.h>
#include "Random.h"

// change method !
int *getRandom(int min,int max,int random_size){
	int i,j,size=max-min+1;
	int temp[size];
	int *array = (int*)malloc(sizeof(int)*random_size);
	// init
	for(i=0;i<size;i++) temp[i]=i+min;
	
	// random range : rand()%(max-min+1) + min
	srand(time(NULL));
	for(i=0;i<max-min+1;i++){
		int index = rand()%size;
		// printf("index:%d size=%d\n",index,size);
		int x = temp[index];
		temp[index] = temp[--size];
		temp[size] = x;
	}
	for(i=0;i<random_size;i++) array[i] = temp[i];
	return array;
}
