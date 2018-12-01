#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

TreeNode* createTree(int value){
	TreeNode* treeNode = (TreeNode*)malloc(sizeof(TreeNode));
	treeNode->left = treeNode->right = treeNode->parent = NULL;
	treeNode->value = value;
	return treeNode;
}

TreeNode *SearchTreeNode(TreeNode *root, int target){
	while(root!=NULL){
		if(root->value == target){
			break;
		}
		else{
			root = (target < root->value) ? root->left : root->right;
		}
	}
	return root;
}

void insertTreeNode(TreeNode *root, int value){
	TreeNode *parent;
	while(root!=NULL){
		parent = root;
		// insert to left / right
		root = (value < root->value) ? root->left : root->right;
	}
	if(value < parent->value){
		parent->left = createTree(value);
		parent->left->parent = parent;
	}
	else{
		parent->right = createTree(value);
		parent->right->parent = parent;
	}
}

void deleteTreeNode(TreeNode *root, int target){
	TreeNode *targetNode = SearchTreeNode(root,target);
	if(root->right==NULL&&root->left==NULL&&root->parent==NULL){
		printf("root can't be delete\n");
		return;
	}
	if(targetNode){
		// case 1 : targetNode has not sub-node
		if(!targetNode->left && !targetNode->right){
			if(targetNode->parent->left == targetNode){
				targetNode->parent->left = NULL;
			}
			else{
				targetNode->parent->right = NULL;	
			}
			free(targetNode);
		}
		// case 2 : targetNode has left node only
		else if( !targetNode->right && targetNode->left ){
			if(targetNode->parent){
				if(targetNode->parent->left == targetNode){
					//printf("case2\n");
					targetNode->parent->left = targetNode->left;
					targetNode->left->parent = targetNode->parent;
				}
				else{
					//printf("case2-1\n");
					targetNode->parent->right = targetNode->left;
					targetNode->left->parent = targetNode->parent;
				}
				free(targetNode);				
			}
			else{
				// target == root && root has left node only
				TreeNode *largestNode = targetNode->left;
				while(largestNode->right) largestNode = largestNode->right;
				targetNode->value = largestNode->value;
				deleteTreeNode(targetNode->left,largestNode->value);
			}
		}
		// case 3 : targetNode has right node only
		else if(!targetNode->left && targetNode->right){
			if(targetNode->parent){
				if(targetNode->parent->left == targetNode){
					// printf("case3\n");
					targetNode->parent->left = targetNode->right;
					targetNode->right->parent = targetNode->parent;
				}
				else{
					// printf("case3-1\n");
					targetNode->parent->right = targetNode->right;
					targetNode->right->parent = targetNode->parent;
				}
				free(targetNode);
			}
			else{
				// target == root && root has right node only
				TreeNode *largestNode = targetNode->right;
				while(largestNode->left) largestNode = largestNode->left;
				targetNode->value = largestNode->value;
				deleteTreeNode(targetNode->right,largestNode->value);
			}
		}
		// case 4 : targetNode has right and left node
		else{
			// find right sub tree the smallest value
			// or 
			// find left sub tree the largest value
			TreeNode *largestNode = targetNode->left;
			while(largestNode->right) largestNode = largestNode->right;
			targetNode->value = largestNode->value;
			deleteTreeNode(targetNode->left,largestNode->value);
		}
	}
	else{
		printf("not found\n");
	}
}

void inorderTraversal(TreeNode *root){
	if(root){
		inorderTraversal(root->left);
		printf("%d ",root->value);
		inorderTraversal(root->right);
	}
}

void preorderTraversal(TreeNode *root){
	if(root){
		printf("%d ",root->value);
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}

void postTraversal(TreeNode *root){
	if(root){
		postTraversal(root->left);
		postTraversal(root->right);
		printf("%d ",root->value);
	}	
}

