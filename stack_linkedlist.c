// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };
// struct Node* top = NULL;
// void push(int value) {
//     struct Node* newNode;
//     newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     if (top == NULL) {
//         newNode->next = NULL;
//     } else {
//         newNode->next = top;
//     }
//     top = newNode;
//     printf("Node is inserted\n");
// }
// int pop() {
//     if (top == NULL) {
//         printf("\nStack underflow\n");
//         return -1;  
//     } else {
//         struct Node* temp = top;
//         int temp_data = top->data;
//         top = top->next;
//         free(temp);
//         return temp_data;
//     }
// }
// void display() {
//     if (top == NULL) {
//         printf("\nStack underflow\n");
//     } else {
//         printf("The stack is:\n");
//         struct Node* temp = top;
//         while (temp != NULL) {
//             printf("%d ", temp->data);
//             temp = temp->next;
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int choice, value;
//     printf("Implementation of the stack using the linked list\n");
//     while (1) {
//         printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the value to insert: ");
//                 scanf("%d", &value);
//                 push(value);
//                 break;
//             case 2:
//                 printf("Popped element is: %d\n", pop());
//                 break;

//             case 3:
//                 display();
//                 break;

//             case 4:
//                 exit(0);

//             default:
//                 printf("\nWrong Choice\n");
//         }
//     }
//     return 0;
// }











#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node* top = NULL;

// Push function
void push(int value) {
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (top == NULL) {
        newNode->next = NULL;
    } else {
        newNode->next = top;
    }
    top = newNode;
    printf("Node is inserted\n");
}

// Pop function
int pop() {
    if (top == NULL) {
        printf("\nStack underflow\n");
        return -1;  
    } else {
        struct Node* temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
}

// Peek function to return the top element
int peek() {
    if (top == NULL) {
        printf("\nStack is empty\n");
        return -1;
    } else {
        return top->data;
    }
}

// Display function
void display() {
    if (top == NULL) {
        printf("\nStack underflow\n");
    } else {
        printf("The stack is:\n");
        struct Node* temp = top;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Main function
int main() {
    int choice, value;
    printf("Implementation of the stack using the linked list\n");
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                printf("Popped element is: %d\n", pop());
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Top element is: %d\n", peek());
                break;
            case 5:
                exit(0);
            default:
                printf("\nWrong Choice\n");
        }
    }
    return 0;
}

