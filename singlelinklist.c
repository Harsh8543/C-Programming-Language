// #include <stdio.h>
// #include <stdlib.h>
// // Singly Linked List structure
// struct Node {
//     int data;
//     struct Node* next;
// };
// // Global head pointer
// struct Node *head=NULL,*newNode,*temp ;
// // Function to insert a node at the end of the list
// void insert() {
//     // Create a new node
//     newNode = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter the data item");
//         scanf("%d", &newNode->data);	
//         newNode->next = NULL;
//     // Check if the list is empty
//     if (head == NULL) {
//         head = temp=newNode;
//     } else
//     {
//            temp->next = newNode;
//             temp = newNode;
//         }
//     }
// // Function to traverse and print the list
// void traverse() {
//     temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
// }
// int main() {
//     // Insert elements into the list
//     int n=1;
//     while (n==1)
//     {
//       insert();
//             printf("Enter do you insert more item press 1 else exit=\n");
//             scanf("%d", &n);
//     }
//     // Traverse and print the list
//     printf("List: ");
//     traverse();
//     return 0;
// }



//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

// Singly Linked List structure
struct Node {
    int data;
    struct Node* next;
};

// Global head pointer
struct Node *head=NULL,*newNode,*temp ;

// Function to insert a node at the end of the list
void create() {
    // Create a new node
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data item=");
        scanf("%d", &newNode->data);
   // newNode->data = value;
        newNode->next = NULL;
    // Check if the list is empty
    if (head == NULL) {
        head = temp=newNode;
    }
    else
    {
            temp->next = newNode;
            temp = newNode;
    }
        // Link the new node to the last node
   // }
}
// Function to traverse and print the list
void traverse() {
        temp = head;
    while (temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void beginsert()
    {
        int item;
        printf("\nEnter the item which you want to insert at beginning?\n");
        scanf("%d",&item);
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if(newNode == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            newNode->data = item;
            newNode->next = head;
            head = newNode;
            printf("\nNode inserted\n");
        }
    }
    int length()
    {
        int count=0;
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    void insertAfterPosition()
    {
        int item,loc,len,i=1;
        printf("\nEnter the location after which you want to insert ur item\n");
        scanf("%d",&loc);
        len=length();
        printf("%d",len);
        if(loc>len)
        {
             printf("\nInvalid location");
        }
        else
        {
         temp=head;
         while(i<(loc))
         {
             temp=temp->next;
             i++;
         }
        newNode = (struct Node *)malloc(sizeof(struct Node));
           printf("\nEnter the item which you want to insert at specified position\n");
            scanf("%d",&item);
            newNode->data = item;
            newNode->next = NULL;
            newNode->next=temp->next;
            temp->next=newNode;
            printf("\nNode inserted\n");
        }

    }
 void insertEnd()
 {
     int item;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if(newNode == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
        printf("\nEnter the item which you want to insert at End\n");
        scanf("%d",&item);
        newNode->data = item;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
           temp->next=newNode;
           newNode->next=NULL;
}
 }
int main() {
    // Insert elements into the list
    int n=1;

    while (n==1)
    {
            create();
            printf("Enter do you insert more item press 1 else exit=");
            scanf("%d", &n);
    }


    // Traverse and print the list
    printf("List: ");
    traverse();

    //beginsert();
    //traverse();
//insertAfterPosition();

printf("Insert at End of the List");
insertEnd();
    traverse();
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
// Singly Linked List structure
struct Node {
    int data;
    struct Node* next;
};
// Global head pointer
struct Node *head=NULL,*newNode,*temp ;
// Function to insert a node at the end of the list
void create() {
    // Create a new node
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data item=");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
    // Check if the list is empty
    if (head == NULL) {
        head = temp=newNode;
    } else
    {
           temp->next = newNode;
            temp = newNode;
        }
    }
    void deleteFirst()
    {
        temp=head;
        head=temp->next;
        temp->next=NULL;
            free(temp);
    }
// Function to traverse and print the list
int length()
    {
        int count=0;
        struct Node *temp;
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    void deleteAfterPosition()
    {
        int item,loc,len,i=1;
        struct Node *temp,*p;
         printf("\nEnter the location after which you want to delete ur item\n");
        scanf("%d",&loc);
        len=length();
        if(loc>len)
        {
             printf("\nInvalid location");
        }
        else
        {
         temp=head;
         while(i<(loc-1)) //Note if delete at the given location then use (loc-1)
         {
             temp=temp->next;
             i++;
         }

            p = temp->next;
            temp->next=p->next;
            p->next=NULL;
            free(p);
        }
    }
void deleteLast()
{
    struct Node *p;
    temp=head;

    if(temp == NULL)
        {
            printf("\nUndeflow\n");
        }
        else if (temp->next==NULL)          // only one Node
        {
            temp=head;
            temp=NULL;
            free (temp);
        }
        else
        {

        temp=head;
            while(temp->next!=NULL)  // More than one Node
            {
                p=temp;
                temp=temp->next;

            }
            p->next=NULL;
            free(temp);
        }
}
void traverse() {
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main() {
    // Insert elements into the list
    int n=1;
    while (n==1)
    {
      create();
            printf("Enter if you insert more item press 1 else exit=\n");
            scanf("%d", &n);
    }
    // Traverse and print the list
    printf("List: ");
    traverse();
   //printf("Delete first node\n");
   //deleteFirst();
    printf("Delete at after given loc node\n");
   deleteAfterPosition();
   // printf("Delete Last node\n");
    //deleteLast();
    traverse();
    return 0;
}












