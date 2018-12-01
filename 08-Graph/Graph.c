#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

void BFS(QueueLinkedList *queue, int adjMatrix[vertexNum][vertexNum]){
	int visited[vertexNum]={0};
	int i,j;
	for(i=0;i<vertexNum;i++){
		if(visited[i]==0){
			// insert start vertex 
			enQueue(queue,i);
			// vertex i is visited 
			visited[i] = 1;
			while(!isEmpty(queue)){
				// 取一個點出來 
				int k = deQueue(queue);
				printf("%d ",k);
				for(j=0;j<vertexNum;j++){
					if( adjMatrix[k][j]==1 && visited[j]==0 ){
						enQueue(queue,j);
						visited[j] = 1;
					}
				}
			}
		}
	}
}

void DFS(int adjMatrix[vertexNum][vertexNum],int vertex){
	int j;
	printf("%d ",vertex);
	if(visitedDFS[vertex] == 0){
		visitedDFS[vertex] = 1;
		for(j=0;j<vertexNum;j++){
			if(adjMatrix[vertex][j]==1 && visitedDFS[j]==0){
				DFS(adjMatrix,j);
			}
		}
	}
}

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

int deQueue(QueueLinkedList *queueLinkedList){
	if(isEmpty(queueLinkedList)){
		printf("queue is empty!!\n");
		return;
	}
	else{
		LinkedList *tmp = queueLinkedList->front;
		int value = queueLinkedList->front->value;
		queueLinkedList->front = queueLinkedList->front->next;
		// front == NULL
		if(!queueLinkedList->front){
			queueLinkedList->rear = NULL;
		}
		free(tmp);
		return value;
	}
	printf("dd\n");
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
