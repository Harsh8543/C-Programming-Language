#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data) {
    struct node* newNode =malloc(sizeof(struct node));
    newNode->data =data;
    newNode->left =NULL;
    newNode->right =NULL;
    return newNode;
}
struct node* insertBST(struct node* root, int data) {
    if(root==NULL) {
        return createNode(data);
    }
    if(data<root->data) {
        root->left=insertBST(root->left, data);
    } 
    else{
        root->right=insertBST(root->right, data);
    }
    return root; 
}
void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main() {
    struct node* root = NULL;
    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    printf("Inorder Traversal of BST: ");
    inorder(root);
    printf("\n");

    printf("Inorder Traversal of BST: ");
    preorder(root);
    printf("\n");

    printf("Inorder Traversal of BST: ");
    postorder(root);
    printf("\n");

    return 0;
}