#define vertexNum 8

typedef struct _linkedList{
	int value;
	struct _linkedList* next;
}LinkedList;

typedef struct _queueLinkedList{
	LinkedList *front;
	LinkedList *rear;
}QueueLinkedList;

int visitedDFS[vertexNum];

QueueLinkedList* createQueueLinkedList();
void enQueue(QueueLinkedList *queueLinkedList,int value);
int deQueue(QueueLinkedList *queueLinkedList);
int isEmpty(QueueLinkedList *queueLinkedList);
void displayQueueLinkedList(QueueLinkedList *queueLinkedList);

void BFS(QueueLinkedList *queue, int adjMatrix[vertexNum][vertexNum]);
void DFS(int adjMatrix[vertexNum][vertexNum],int vertex);
