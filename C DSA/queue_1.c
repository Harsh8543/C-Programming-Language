#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
     struct Node* next;
     struct Node* front;
     struct Node* rear;

};
 struct Node* createQueue(){
   struct Node* queue = (struct Node*)malloc(sizeof(struct Node));
   queue->front=queue->rear=NULL;
   return queue;
 }


 bool isEmpty(struct Node* queue){
    if(queue->front=NULL);

 }

 void enqueue(struct Node* queue , int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;


if(queue->rear=NULL){
    queue->rear=queue->front=newNode;
    return;
}

queue->rear->next=newNode;
queue->rear=newNode;

 }
 