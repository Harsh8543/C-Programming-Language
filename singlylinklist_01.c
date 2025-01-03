#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Free memory for a node
void deleteNodeMemory(Node* node) {
    if (node->next != NULL) {
        free(node->next);
        node->next = NULL;
    }
    printf("Memory is free for node with data %d\n", node->data);
}

// Insert node at the head of the list
void insertAtHead(Node** head, int data) {
    Node* temp = createNode(data);
    temp->next = *head;
    *head = temp;
}

// Insert node at the tail of the list
void insertAtTail(Node** tail, int data) {
    Node* temp = createNode(data);
    (*tail)->next = temp;
    *tail= temp;
}

// Print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert node at a specific position in the list
void insertAtPosition(Node** tail, Node** head, int position, int data) {
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = *head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = createNode(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Delete node at a specific position in the list
void deleteNode(int position, Node** head) {
    if (position == 1) {
        Node* temp = *head;
        *head = (*head)->next;
        deleteNodeMemory(temp);
        free(temp);
        return;
    }

    Node* curr = *head;
    Node* prev = NULL;
    int cnt = 1;

    while (cnt < position && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if (curr != NULL) {
        prev->next = curr->next;
        curr->next = NULL;
        deleteNodeMemory(curr);
        free(curr);
    }
}

int main() {
    Node* node1 = createNode(10);
    printf("%d\n", node1->data);

    Node* head = node1;
    Node* tail = node1;
//    insertAtHead(&tail,12);
//    printList(head);
    insertAtTail(&tail, 12);
    printList(head);

    insertAtTail(&tail, 15);
    printList(head);

    insertAtPosition(&tail, &head, 4, 22);
    printList(head);

    printf("Head: %d\n", head->data);
    printf("Tail: %d\n", tail->data);

    deleteNode(3, &head);
    printList(head);

    printf("Head: %d\n", head->data);
    printf("Tail: %d\n", tail->data);

    return 0;
}