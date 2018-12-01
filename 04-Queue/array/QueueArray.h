
typedef struct _queueArray{
	int front;
	int rear;
	int *queue;
	int capacity;
}QueueArray;


QueueArray* createQueueArray(int size);
void enQueue(QueueArray *queueArray,int value);
void deQueue(QueueArray *queueArray);
int getRear(QueueArray *queueArray);
int getFront(QueueArray *queueArray);
int isFull(QueueArray *queueArray);
int isEmpty(QueueArray *queueArray);
int getSize(QueueArray *queueArray);
