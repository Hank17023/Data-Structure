

typedef struct _stackArray{
	int top;
	int capacity;
	int *stack;
}StackArray;

StackArray* createStackArray(int size);
void push(StackArray *stackArray,int value);
void pop(StackArray *stackArray);
int top(StackArray *stackArray);
int isFull(StackArray *stackArray);
int isEmpty(StackArray *stackArray);
int getSize(StackArray *stackArray);
