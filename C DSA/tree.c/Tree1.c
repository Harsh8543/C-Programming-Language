#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertleft(struct node* root, int data) {
    root->left = createNode(data);
    return root;
}

struct node* insertright(struct node* root, int data) {
    root->right = createNode(data);
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
    struct node* root = createNode(5);
    insertleft(root, 2);
    insertright(root, 3);
    insertleft(root->left, 10);
    insertright(root->left, 0);
    insertleft(root->right, 15);
    insertright(root->right, 20);

    printf("== Inorder Traversal ==\n");
    inorder(root);
    printf("\n");

    printf("== Preorder Traversal ==\n");
    preorder(root);
    printf("\n");

    printf("== Postorder Traversal ==\n");
    postorder(root);
    printf("\n");

    return 0;
}