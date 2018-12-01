#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"


QueueArray* createQueueArray(int size){
	QueueArray *tmp = (QueueArray*)malloc(sizeof(QueueArray));
	tmp->queue = (int*)malloc(sizeof(int)*size);
	tmp->front = tmp->rear = -1;
	tmp->capacity = size;
	return tmp;
}

void enQueue(QueueArray *queueArray,int value){
	if(isFull(queueArray)){
		printf("queue is full!!\n");
		return;
	}
	else{
		queueArray->queue[++queueArray->rear] = value;
	}
}

void deQueue(QueueArray *queueArray){
	if(isEmpty(queueArray)){
		printf("queue is empty\n");
		return;
	}
	else{
		queueArray->queue[++queueArray->front];
	}
}

int getRear(QueueArray *queueArray){
	return queueArray->rear;
}

int getFront(QueueArray *queueArray){
	return queueArray->front;
}

int isFull(QueueArray *queueArray){
	return queueArray->rear == queueArray->capacity-1;
}

int isEmpty(QueueArray *queueArray){
	return queueArray->front == queueArray->rear;
}

int getSize(QueueArray *queueArray){
	return queueArray->rear - queueArray->front;
}

void displayQueue(QueueArray *queueArray){
	if(isEmpty(queueArray)){
		return;
	}
	int i = queueArray->front+1;
	for(i;i<=queueArray->rear;i++){
		printf("%d\n",queueArray->queue[i]);
	}
}
