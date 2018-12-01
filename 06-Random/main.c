#include <stdio.h>
#include <stdlib.h>
#include "Random.h"

int main(int argc, char *argv[]) {
	int* randomArr;
	randomArr = getRandom(5,300,RANDOM_SIZE);
	int i;
	for(i=0;i<RANDOM_SIZE;i++)
		printf("[%d]%d\n",i,randomArr[i]);
	
	return 0;
}
