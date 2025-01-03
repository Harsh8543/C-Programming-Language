#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int d) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = d;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void deleteNodeMemory(struct Node* node) {
    int val = node->data;
    if (node->next != NULL) {
        free(node->next);
        node->next = NULL;
    }
    printf("Memory free for node data: %d\n", val);
}

// Traversing a linked list
void printList(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int getLength(struct Node* head) {
    int len = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(struct Node** tail, struct Node** head, int d) {
    struct Node* temp = createNode(d);
    if (*head == NULL) {
        *head = temp;
        *tail = temp;
    } else {
        temp->next = *head;
        (*head)->prev = temp;
        *head = temp;
    }
}
void insertAtTail(struct Node** tail, struct Node** head, int d) {
    struct Node* temp = createNode(d);
    if (*tail == NULL) {
        *head = temp;
        *tail = temp;
    } else {
        (*tail)->next = temp;
        temp->prev = *tail;
        *tail = temp;
    }
}
void insertAtLocation(struct Node** tail, struct Node** head, int position, int d) {
    if (position == 1) {
        insertAtHead(tail, head, d);
        return;
    }
    struct Node* temp = *head;
    int cnt = 1;
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }
    struct Node* nodeToInsert = createNode(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(int position, struct Node** head) {
    if (position == 1) {
        struct Node* temp = *head;
        (*head) = (*head)->next;
        if (*head != NULL) (*head)->prev = NULL;
        free(temp);
    } else {
        struct Node* curr = *head;
        struct Node* prev = NULL;
        int cnt = 1;

        while (cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        if (curr->next != NULL) {
            curr->next->prev = prev;
        }
        free(curr);
    }
}
int main() {
    struct Node* head = NULL; // Head pointer
    struct Node* tail = NULL; // Tail pointer

    // printList(head);
    // printf("Length: %d\n", getLength(head));

    insertAtHead(&tail, &head, 13);
    printList(head);
    printf("Head: %d\n", head->data);
    printf("Tail: %d\n", tail->data);

    insertAtHead(&tail, &head, 11);
    printList(head);

    insertAtTail(&tail, &head, 25);
    printList(head);

    insertAtLocation(&tail, &head, 2, 100);
    printList(head);

    deleteNode(3, &head);
    printList(head);

    return 0;
}
