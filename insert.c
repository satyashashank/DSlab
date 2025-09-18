#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node*left;
	int data;
	struct Node*right;
};
struct Node *newNode(int value)
{
	struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
struct Node *insert(struct Node *root, int val){
	if (root == NULL){
		return newNode(val);
	}
	if (val < root -> data){
		root -> left = insert(root -> left, val);
	}
	else if (val > root -> right){
		root -> right = insert(root -> right, val);
	}
	return root;
	}
	int main() {
		struct Node *root = NULL;
		root = insert(root,60);
		insert(root, 40);
		insert(root, 20);
		insert(root, 50);
		insert(root, 80);
		insert(root, 70);
		insert(root, 90);
		return 0;
	}

