// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// // Node structure for the linked list
// struct Node {
//     int data;
//     struct Node* next;
    
// };

// // Queue structure
// struct Queue {
//     struct Node* front;
//     struct Node* rear;
// };

// // Initialize the queue
// struct Queue* createQueue() {
//     struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
//     queue->front = queue->rear = NULL;
//     return queue;
// }

// // Function to check if the queue is empty
// bool isEmpty(struct Queue* queue) {
//     return (queue->front == NULL);
// }

// // Function to enqueue an element into the queue
// void enqueue(struct Queue* queue, int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
    
//     if(queue->rear == NULL) {
//         queue->front = queue->rear = newNode;
//         return;
//     }
    
//     queue->rear->next = newNode;
//     queue->rear = newNode;
// }

// // Function to dequeue an element from the queue
// int dequeue(struct Queue* queue) {
//     if(isEmpty(queue)) {
//         return -1;
//     }
    
//     struct Node* temp = queue->front;
//     int ans = temp->data;
//     queue->front = queue->front->next;
    
//     if(queue->front == NULL) {
//         queue->rear = NULL;
//     }
    
//     free(temp);
//     return ans;
// }

// // Function to get the front element of the queue
// int front(struct Queue* queue) {
//     if(isEmpty(queue)) {
//         return -1;
//     }
//     return queue->front->data;
// }
// int main() {
//     // Create a queue
//     struct Queue* queue = createQueue();
    
//     // Enqueue elements into the queue
//     enqueue(queue, 10);
//     enqueue(queue, 20);
//     enqueue(queue, 30);
    
//     // Display the front element
//     printf("Front element: %d\n", front(queue));  // Output: 10
    
//     // Dequeue elements and display them
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 10
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 20
    
//     // Check the front element again
//     printf("Front element after dequeuing: %d\n", front(queue));  // Output: 30
    
//     // Check if the queue is empty
//     if(isEmpty(queue)) {
//         printf("Queue is empty\n");
//     } else {
//         printf("Queue is not empty\n");
//     }
    
//     // Dequeue the last element
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 30
    
//     // Check if the queue is empty after all operations
//     if(isEmpty(queue)) {
//         printf("Queue is empty\n");
//     } else {
//         printf("Queue is not empty\n");
//     }

//     return 0;
// }


/////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct Node {
    int data;
    struct Node* next;
        struct Node* front;
    struct Node* rear;
};
struct Node* createQueue() {
    struct Node* queue = (struct Node*)malloc(sizeof(struct Node));
    queue->front = queue->rear = NULL;
    return queue;
}
void enqueue(struct Node* queue, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if(queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }
    
    queue->rear->next = newNode;
    queue->rear = newNode;
}

int dequeue(struct Node* queue) {
    if(queue->rear==NULL){
        printf("underflow");
    }
    struct Node* temp = queue->front;
    int ans = temp->data;
    queue->front = queue->front->next;
    
    if(queue->front == NULL) {
        queue->rear = NULL;
    }
    
    free(temp);
    return ans;
}

int main() {
    
    struct Node* queue = createQueue();
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    printf("Front element: %d\n", front(queue));  
    
    printf("Dequeued: %d\n", dequeue(queue));  
    printf("Dequeued: %d\n", dequeue(queue));  
    
    printf("Front element after dequeuing: %d\n", front(queue));  
    
    if(isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
    printf("Dequeued: %d\n", dequeue(queue)); 
    return 0;
}