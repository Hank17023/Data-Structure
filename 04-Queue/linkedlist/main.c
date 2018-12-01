#include <stdio.h>
#include <stdlib.h>
#include "QueueLinkedList.h"


int main(int argc, char *argv[]) {

	QueueLinkedList* queueLinkedList = createQueueLinkedList();

	

	enQueue(queueLinkedList,10);
	enQueue(queueLinkedList,20);
	enQueue(queueLinkedList,30);
	enQueue(queueLinkedList,40);
	enQueue(queueLinkedList,50);
	enQueue(queueLinkedList,60);
	enQueue(queueLinkedList,70);
	enQueue(queueLinkedList,80);
	deQueue(queueLinkedList);
	deQueue(queueLinkedList);
	enQueue(queueLinkedList,90);
	enQueue(queueLinkedList,100);
	deQueue(queueLinkedList);
	displayQueueLinkedList(queueLinkedList);

	return 0;
}
