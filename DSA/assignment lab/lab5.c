#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Circular linked list in C
struct node
{
    int info;
    struct node *next;
};
struct node *nodeptr=NULL,*ptr,*newptr;

struct node *getnode(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->info);
    
    newnode->next=NULL;
    return newnode;
}

void create()
{
    struct node *last;
    char c;
    while(1)
    {
        newptr=getnode();
        if(nodeptr==NULL){
            nodeptr=newptr;
        }else{
            last->next = newptr;
        }
        newptr->next = nodeptr;
        last=newptr;
        printf("Enter y to add and n for stop add: ");
        scanf(" %c",&c);
        if(c=='n'){
            break;
        }else if(c=='y'){
            continue;
        }
    }
}
void display(){
    ptr = nodeptr;
    do
    {
        printf("%d ",ptr->info);
        ptr = ptr->next;
    }while(ptr!=nodeptr);
}

void insert(){
    int key;
    printf("Enter the number after which the new node is to be inserted\n");
    scanf("%d",&key);
    newptr=getnode();
    ptr=nodeptr;
    do{
        ptr=ptr->next;
    }while (ptr!=nodeptr && ptr->info!=key);
    if(ptr->info!=key)
        printf("node doesnot exists");
    else{
        newptr->next=ptr->next;
        ptr->next=newptr;
    }
}
void deletion(){
    struct node *prevptr;
    int key;
    printf("Enter the number of which the node is to be deleted\n");
    scanf("%d",&key);
    if(nodeptr==NULL){
        printf("linked list is empty");
    }
    else{
        ptr=nodeptr;
        do{
            prevptr=ptr;
            ptr=ptr->next;
        }while(ptr!=nodeptr && ptr->info!=key);

        if(ptr->info!=key){
            printf("node doesnot exists");
        }
        else{
            prevptr->next=ptr->next;
            free(ptr);  
            printf("freed..");
        }
    }
}

int main(){
    int c;
    printf(" 1 for creation\n2 for display\n3 for insertion at any where\n 4 for deletion at anywhere \n any other key for exitting\n");
    while(1)
    {
        printf("\nEnter the choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            deletion();
            break;
        default:
            printf("invalid input");
            exit(1);
            break;
        }
    }
    return 0;
}