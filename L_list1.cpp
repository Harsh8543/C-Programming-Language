#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
struct Node* head=NULL;
struct Node* temp;
struct Node *newNode;
void insert(){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
printf("enter the data item");
scanf("%d",&newNode->data);
newNode->next=NULL;
if(head==NULL){
    head=newNode;
    temp=newNode;
}
else{
    temp->next=newNode;
    temp=newNode;
}
}
void traverse(){
    struct Node *temp;
    temp=head;
    // printf("\nLinked list:");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
  printf("NULL\n");
}

int main(){
    int n=1;
    while(n==1){
        insert();
        printf("if you want to insert the more element print 1 else ");
        scanf("%d",&n);
    }
    traverse();
}


