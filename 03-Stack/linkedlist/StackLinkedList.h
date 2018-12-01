

typedef struct _linkedList{
	int value;
	struct _linkedList *next;
}LinkedList;

typedef struct _stackLinkedList{
	LinkedList *top;
}StackLinkedList;

StackLinkedList* createStackLinkedList();
void push(StackLinkedList* stack, int value);
void pop(StackLinkedList* stack);
int isEmpty(StackLinkedList* stack);
void displayStack(StackLinkedList* stack);
