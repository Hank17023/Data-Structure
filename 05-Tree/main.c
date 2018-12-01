#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"


int main(int argc, char *argv[]) {
	
	TreeNode *root = createTree(8);
	
	// insert tree
	insertTreeNode(root,3);
	insertTreeNode(root,1);
	insertTreeNode(root,6);
	insertTreeNode(root,9);
	insertTreeNode(root,4);
	insertTreeNode(root,5);
	insertTreeNode(root,7);
	insertTreeNode(root,2);
	insertTreeNode(root,10);


	deleteTreeNode(root,10);
	deleteTreeNode(root,9);
	
	deleteTreeNode(root,6);
	
	deleteTreeNode(root,4);
	
	deleteTreeNode(root,5);
	deleteTreeNode(root,2);
	deleteTreeNode(root,7);

	// 1 3 8
	insertTreeNode(root,7);
	insertTreeNode(root,2);
	insertTreeNode(root,10);
	// 1 2 3 7 8 10
	deleteTreeNode(root,10);
	// 1 2 3 7 8 
	deleteTreeNode(root,8);
	deleteTreeNode(root,2);
	deleteTreeNode(root,7);
	deleteTreeNode(root,1);

	insertTreeNode(root,7);
	insertTreeNode(root,2);
	insertTreeNode(root,10);

	deleteTreeNode(root,3);
	insertTreeNode(root,5);
	insertTreeNode(root,20);
	insertTreeNode(root,31);
	insertTreeNode(root,16);
	
	
	deleteTreeNode(root,20);
	deleteTreeNode(root,31);
	deleteTreeNode(root,16);
	deleteTreeNode(root,2);
	deleteTreeNode(root,7);
	deleteTreeNode(root,5);
	
	inorderTraversal(root);
	
	
	return 0;
}




