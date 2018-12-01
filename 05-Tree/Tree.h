
typedef struct _treeNode{
	struct _treeNode *right;
	struct _treeNode *left;
	struct _treeNode *parent;
	int value;
}TreeNode;

TreeNode* createTree(int value);

TreeNode* SearchTreeNode(TreeNode *root, int target);
void insertTreeNode(TreeNode *root, int value);
void deleteTreedNode(TreeNode *root, int target);

void inorderTraversal(TreeNode *root);
void preorderTraversal(TreeNode *root);
void postorderTraversal(TreeNode *root);
