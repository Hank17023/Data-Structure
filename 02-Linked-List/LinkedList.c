#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

LinkedList* createNode(int value){
	LinkedList *node = (LinkedList*)malloc(sizeof(LinkedList));
	node->value = value;
	node->next = NULL;
	return node;
}

void addNode(LinkedList *head, int value){
	LinkedList *node = createNode(value);
	LinkedList *temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = node;
}

int deleteNode(LinkedList *head, int value){
	LinkedList *current = head->next;
	LinkedList *prev = head;
	int found = 0;
	while(current!=NULL){
		if(current->value == value){
			prev->next = current->next;
			free(current);
			found = 1;
			break;
		}
		prev = current;
		current = current->next;
	}
	return found;
}

LinkedList *freeLinkedList(LinkedList *head){
	LinkedList *current = head;
	LinkedList *next;
	while(current!=NULL){
		next = current->next;
		free(current);
		current = next;
	}
	return NULL;
}

void displayLinkedList(LinkedList *head){
	LinkedList *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->value);
		temp = temp->next;
	}
}

LinkedList *reverseLinkedList(LinkedList *head){
	LinkedList *prev,*next,*current;
	current = prev = head;
	next = head->next;
	while(next!=NULL){
		current = next;
		next  = next->next;
		// reverse
		current->next = prev;
		prev = current;
	}
	head->next = NULL;
	head = current;
	return head;		
}

