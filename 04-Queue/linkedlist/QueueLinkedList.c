#include <stdio.h>
#include <stdlib.h>
#include "QueueLinkedList.h"

QueueLinkedList* createQueueLinkedList(){
	QueueLinkedList *tmp;
	tmp = (QueueLinkedList*)malloc(sizeof(QueueLinkedList));
	tmp->front = NULL;
	tmp->rear = NULL;
	return tmp;
}

void enQueue(QueueLinkedList *queueLinkedList,int value){
	LinkedList *tmp = (LinkedList*)malloc(sizeof(LinkedList));
	tmp->value = value;
	tmp->next = NULL;
	if(isEmpty(queueLinkedList)){
		queueLinkedList->front = queueLinkedList->rear = tmp;
	}
	else{
		queueLinkedList->rear->next = tmp;
		queueLinkedList->rear = tmp;
	}
}

void deQueue(QueueLinkedList *queueLinkedList){
	if(isEmpty(queueLinkedList)){
		printf("queue is empty!!\n");
		return;
	}
	else{
		LinkedList *tmp = queueLinkedList->front;
		queueLinkedList->front = queueLinkedList->front->next;
		// front == NULL
		if(!queueLinkedList->front){
			queueLinkedList->rear = NULL;
		}
		free(tmp);
	}
}

int isEmpty(QueueLinkedList *queueLinkedList){
	return !queueLinkedList->front;
}

void displayQueueLinkedList(QueueLinkedList *queueLinkedList){
	LinkedList *tmp = queueLinkedList->front;
	while(tmp!=NULL){
		printf("%d\n",tmp->value);
		tmp = tmp->next;
	}
}
