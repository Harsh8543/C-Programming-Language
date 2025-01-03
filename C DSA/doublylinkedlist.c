#include<stdio.h>
#include<stdlib.h>

// Doubly Linked List structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;  // New previous pointer
};

// Global head pointer
struct Node *head = NULL, *newNode, *temp;

// Function to insert a node at the end of the list
void create() {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data item = "); 
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;  // Initialize the prev pointer as NULL

    if (head == NULL) {
        head = temp = newNode;
    } else {
        temp->next = newNode;
        newNode->prev = temp;  // Set the prev pointer to the current last node
        temp = newNode;
    }
}

// Function to traverse and print the list
void traverse() {
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to insert at the beginning of the list
void beginsert() {
    int item;
    printf("Enter the item you want to insert at the beginning: ");
    scanf("%d", &item);
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("\nOverflow\n");
    } else {
        newNode->data = item;
        newNode->next = head;
        newNode->prev = NULL;  // New node becomes the first node, so prev is NULL
        
        if (head != NULL) {
            head->prev = newNode;  // Set the previous head's prev to the new node
        }
        head = newNode;
        printf("\nNode is inserted\n");
    }
}

// Function to return the length of the list
int length() {
    int count = 0;
    temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert after a specific position
void insertAfterPosition() {
    int item, loc, len, i = 1;
    printf("\nEnter the location after which you want to insert your item: ");
    scanf("%d", &loc);
    len = length();
    
    if (loc > len) {
        printf("Invalid location\n");
    } else {
        temp = head;
        while (i < loc) {
            temp = temp->next;
            i++;
        }
        
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the item which you want to insert: ");
        scanf("%d", &item);
        
        newNode->data = item;
        newNode->next = temp->next;
        newNode->prev = temp;  // Set newNode's prev to temp

        if (temp->next != NULL) {
            temp->next->prev = newNode;  // Update the next node's prev to newNode
        }
        temp->next = newNode;
        
        printf("\nNode is inserted\n");
    }
}

// Function to insert at the end of the list
void insertEnd() {
    int item;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("Overflow\n");
    } else {
        printf("Enter the item which you want to insert: ");
        scanf("%d", &item);
        newNode->data = item;
        newNode->next = NULL;

        if (head == NULL) {
            newNode->prev = NULL;  // If list is empty, this will be the first node
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;  // Set the prev pointer of newNode
        }
        printf("\nNode is inserted at the end\n");
    }
}

int main() {
    // Insert elements into the list
    int n = 1;

    while (n == 1) {
        create();
        printf("Do you want to insert more data? Press 1 for Yes, any other key for No: ");
        scanf("%d", &n);
    }
    
    // Traverse and print the list
    printf("List: ");
    traverse();

    // Insert at the end of the list
    printf("Insert at the end of the list\n");
    insertEnd();
    traverse();

    // Insert at the beginning
    // printf("Insert at the beginning of the list\n");
    // beginsert();
    // traverse();

    // Insert after a specific position
    // printf("Insert after a specific position\n");
    // insertAfterPosition();
    // traverse();

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

// Doubly Linked List structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Global head pointer
struct Node *head = NULL, *newNode, *temp;

// Function to insert a node at the end of the list
void create() {
    // Create a new node
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data item = ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    
    // Check if the list is empty
    if (head == NULL) {
        head = temp = newNode;
    } else {
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
}

// Function to delete the first node
void deleteFirst() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
}

// Function to traverse and return the length of the list
int length() {
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to delete a node after a given position
void deleteAfterPosition() {
    int loc, len, i = 1;
    struct Node *p;
    printf("\nEnter the location after which you want to delete your item\n");
    scanf("%d", &loc);
    len = length();
    
    if (loc > len) {
        printf("\nInvalid location\n");
    } else {
        temp = head;
        while (i < loc && temp != NULL) {  // Traverse to the location
            temp = temp->next;
            i++;
        }
        
        if (temp != NULL && temp->next != NULL) {
            p = temp->next;
            temp->next = p->next;
            if (p->next != NULL) {
                p->next->prev = temp;
            }
            free(p);
        } else {
            printf("\nNo node exists at this position to delete\n");
        }
    }
}

// Function to delete the last node
void deleteLast() {
    if (head == NULL) {
        printf("\nUnderflow\n");
    } else if (head->next == NULL) {  // Only one node
        temp = head;
        head = NULL;
        free(temp);
    } else {  // More than one node
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
}

// Function to traverse and print the list
void traverse() {
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    // Insert elements into the list
    int n = 1;
    while (n == 1) {
        create();
        printf("Enter if you want to insert more items press 1 else exit: ");
        scanf("%d", &n);
    }
    
    // Traverse and print the list
    printf("List: \n");
    traverse();
    
    printf("Delete a node after a given location\n");
    deleteAfterPosition();
    
    traverse();
    
    return 0;
}
