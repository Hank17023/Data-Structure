#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// LinkedList

int main(int argc, char** argv) {
	
	int i=0;
	// create node
	LinkedList *head = createNode(-1);
	
	// add node
	for(i;i<10;i++){
		addNode(head,i);
	}
	
	// delete node
	deleteNode(head,8);
	deleteNode(head,4);
	deleteNode(head,9);
	
	// add node
	addNode(head,10);
	
	// display node
	displayLinkedList(head);
	
	// reverse node
	printf("=====reverse=====\n");
	head = reverseLinkedList(head);
	displayLinkedList(head);
	
	// add node
	printf("=====addNode=====\n");
	addNode(head,10);
	addNode(head,13);
	addNode(head,15);
	displayLinkedList(head);
	
	// free node
	printf("=====free=====\n");
	head = freeLinkedList(head);
	displayLinkedList(head);
	return 0;
}
