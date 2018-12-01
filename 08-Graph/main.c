#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

 

int main(int argc, char *argv[]) {
/*
	int adjMatrix[vertexNum][vertexNum]={
		{0,1,1,0,0,0,0},
		{1,0,1,1,0,0,0},
		{1,1,0,0,1,0,0},
		{0,1,0,0,1,0,0},
		{0,0,1,1,0,1,0},
		{0,0,0,0,1,0,1},
		{0,0,0,0,0,1,0}};
	
*/
/*
	int adjMatrix[vertexNum][vertexNum]={
		{0,1,0,0,0,1,0},
		{1,0,1,0,0,0,0},
		{0,1,0,1,0,0,0},
		{0,0,1,0,1,0,0},
		{0,0,0,1,0,1,0},
		{1,0,0,0,1,0,0},
		{0,0,0,0,0,0,0}};
*/	

	// DFS : 0 1 2 3 4 5 6 7
	// BFS : 0 1 5 2 7 6 3 4
	/*
	int adjMatrix[vertexNum][vertexNum]={
		{0,1,1,1,1,0,0,0},
		{1,0,0,0,0,1,0,0},
		{1,0,0,0,0,1,0,0},
		{1,0,0,0,0,0,1,0},
		{1,0,0,0,0,0,1,0},
		{0,1,1,0,0,0,0,1},
		{0,0,0,1,1,0,0,1},
		{0,0,0,0,0,1,1,0}};
	*/

	// DFS : 0 1 2 3 4 5 7 6
	// BFS : 0 1 5 2 7 3 6 4
	int adjMatrix[vertexNum][vertexNum]={
		{0,1,1,1,1,0,0,0},
		{1,0,0,0,0,1,0,0},
		{1,0,0,0,0,1,0,0},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0},
		{0,1,1,0,0,0,0,1},
		{0,0,0,0,1,0,0,1},
		{0,0,0,1,0,1,1,0}};
	
	int i;
	for(i=0;i<vertexNum;i++)
		visitedDFS[i] = 0;
	

	QueueLinkedList* queue = createQueueLinkedList();	
	// BFS(queue,adjMatrix);

	DFS(adjMatrix,0);
	
}
