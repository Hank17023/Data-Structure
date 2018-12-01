#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	QueueArray* queueArray = createQueueArray(5);
	
	enQueue(queueArray,10);
	enQueue(queueArray,20);
	enQueue(queueArray,30);
	enQueue(queueArray,40);
	deQueue(queueArray);
	enQueue(queueArray,50);
	
	displayQueue(queueArray);
	
	return 0;
}
