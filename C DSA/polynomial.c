#include<stdio.h>
#include<stdlib.h>
struct Node{
    int coef;
    int exp;
    struct Node*next;
};
struct Node *newNode,*temp;
void insert(struct Node**p,int coef,int exp){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->coef=coef;
    newNode->exp=exp;
    newNode->next=NULL;

    if(*p == NULL){
      *p=newNode;
    }
    else{
        temp=*p;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void traverse(struct Node *p){
    if(p==NULL){
        printf("0\n");
        return;
    }
    temp = p;

    while (temp != NULL)
        {
        printf("%dx^%d", temp->coef, temp->exp);
        if (temp->next !=NULL)
        {
            printf(" + ");
        }
        temp = temp->next;
    }

    printf("\n");
}

struct Node *add(struct Node *p1,struct Node *p2)
{
    struct Node *result = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->exp == p2->exp)
        {
            insert(&result, p1->coef + p2->coef, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        } 
        else if (p1->exp > p2->exp) {
            insert(&result, p1->coef, p1->exp);
            p1 = p1->next;
        } 
        else {
            insert(&result, p2->coef, p2->exp);
            p2 = p2->next;
        }
    }

    while (p1 != NULL) {
        insert(&result, p1->coef, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insert(&result, p2->coef, p2->exp);
        p2 = p2->next;
    }

    return result;
}

int main() {
    struct Node *p1 = NULL;
    struct Node *p2=NULL;
    insert(&p1, 5, 4);
    insert(&p1, 3, 2);
    insert(&p1, 1, 0);


    insert(&p2, 4, 4);
    insert(&p2, 2, 2);
    insert(&p2, 1, 1);

    printf("First polynomial: ");
    traverse(p1);

    printf("Second polynomial: ");
    traverse(p2);

    struct Node *r = add(p1, p2);
    printf("Result: ");
    traverse(r);
    return 0;
}
