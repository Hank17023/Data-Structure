

typedef struct _linkedList{
	int value;
	struct _linkedList* next;
}LinkedList;

typedef struct _queueLinkedList{
	LinkedList *front;
	LinkedList *rear;
}QueueLinkedList;


QueueLinkedList* createQueueLinkedList();

void enQueue(QueueLinkedList *queueLinkedList,int value);
void deQueue(QueueLinkedList *queueLinkedList);
int isEmpty(QueueLinkedList *queueLinkedList);
void displayQueueLinkedList(QueueLinkedList *queueLinkedList);
