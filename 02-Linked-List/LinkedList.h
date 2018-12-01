

typedef struct _linkedlist{
	int value;
	struct _linkedlist *next;
} LinkedList;

LinkedList* createNode(int value);

void addNode(LinkedList *head, int value);
int deleteNode(LinkedList *head, int value);
LinkedList *reverseLinkedList(LinkedList *head);
void displayLinkedList(LinkedList *head);
LinkedList *freeLinkedList(LinkedList *head);

