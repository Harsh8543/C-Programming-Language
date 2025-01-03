#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Initialize the queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to check if the queue is empty
bool isEmpty(struct Queue* queue) {
    return (queue->front == NULL);
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int data) {
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

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if(isEmpty(queue)) {
        return -1;
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

// Function to get the front element of the queue
int front(struct Queue* queue) {
    if(isEmpty(queue)) {
        return -1;
    }
    return queue->front->data;
}
int main() {
    // Create a queue
    struct Queue* queue = createQueue();
    
    // Enqueue elements into the queue
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    
    // Display the front element
    printf("Front element: %d\n", front(queue));  // Output: 10
    
    // Dequeue elements and display them
    printf("Dequeued: %d\n", dequeue(queue));  // Output: 10
    printf("Dequeued: %d\n", dequeue(queue));  // Output: 20
    
    // Check the front element again
    printf("Front element after dequeuing: %d\n", front(queue));  // Output: 30
    
    // Check if the queue is empty
    if(isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
    
    // Dequeue the last element
    printf("Dequeued: %d\n", dequeue(queue));  // Output: 30
    
    // Check if the queue is empty after all operations
    if(isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }

    return 0;
}



// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// // Queue structure using array
// struct Queue {
//     int* arr;
//     int front;
//     int rear;
//     int size;
//     int capacity;
// };

// // Initialize the queue
// struct Queue* createQueue(int capacity) {
//     struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
//     queue->capacity = capacity;
//     queue->front = 0;
//     queue->size = 0;
//     queue->rear = capacity - 1;  // Rear is initialized to the end of the array
//     queue->arr = (int*)malloc(capacity * sizeof(int));
//     return queue;
// }

// // Function to check if the queue is full
// bool isFull(struct Queue* queue) {
//     return (queue->size == queue->capacity);
// }

// // Function to check if the queue is empty
// bool isEmpty(struct Queue* queue) {
//     return (queue->size == 0);
// }

// // Function to enqueue an element into the queue
// void enqueue(struct Queue* queue, int data) {
//     if (isFull(queue)) {
//         printf("Queue is Full\n");
//         return;
//     }
//     queue->rear = (queue->rear + 1) % queue->capacity;
//     queue->arr[queue->rear] = data;
//     queue->size = queue->size + 1;
//     printf("%d enqueued to queue\n", data);
// }

// // Function to dequeue an element from the queue
// int dequeue(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         printf("Queue is Empty\n");
//         return -1;
//     }
//     int data = queue->arr[queue->front];
//     queue->front = (queue->front + 1) % queue->capacity;
//     queue->size = queue->size - 1;
//     return data;
// }

// // Function to get the front element of the queue
// int front(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         return -1;
//     }
//     return queue->arr[queue->front];
// }

// // Function to get the rear element of the queue
// int rear(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         return -1;
//     }
//     return queue->arr[queue->rear];
// }

// int main() {
//     // Create a queue with a capacity of 5
//     struct Queue* queue = createQueue(5);
    
//     // Enqueue elements into the queue
//     enqueue(queue, 10);
//     enqueue(queue, 20);
//     enqueue(queue, 30);
//     enqueue(queue, 40);
    
//     // Display the front element
//     printf("Front element: %d\n", front(queue));  // Output: 10
    
//     // Dequeue elements and display them
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 10
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 20
    
//     // Check the front element again
//     printf("Front element after dequeuing: %d\n", front(queue));  // Output: 30
    
//     // Enqueue another element
//     enqueue(queue, 50);
    
//     // Check if the queue is full
//     if (isFull(queue)) {
//         printf("Queue is full\n");
//     } else {
//         printf("Queue is not full\n");
//     }
    
//     // Dequeue the remaining elements
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 30
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 40
//     printf("Dequeued: %d\n", dequeue(queue));  // Output: 50
    
//     // Check if the queue is empty after all operations
//     if (isEmpty(queue)) {
//         printf("Queue is empty\n");
//     } else {
//         printf("Queue is not empty\n");
//     }

//     return 0;
// }
