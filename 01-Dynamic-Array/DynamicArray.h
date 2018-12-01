
typedef struct _dynamicArray{
	int *array;
	int capacity; // total
	int size; // content
}DynamicArray;

DynamicArray* createDunamicArray();
