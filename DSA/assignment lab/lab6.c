#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Doubly linked list in C
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*ptr,*newptr;

struct node *getnode(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->info);
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

void create()
{
    struct node *last;
    char c;
    while(1)
    {
        newptr=getnode();
        if(head==NULL){
            head=newptr;
        }else{
            last->next = newptr;
            newptr->prev = last;
        }
        last = newptr;
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
    ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr = ptr->next;
    }
}

void insertF(){
    newptr = getnode();
    newptr->next=head;
    head->prev=newptr;
    head=newptr;
}
void insertL(){
    newptr = getnode();
    ptr = head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newptr;
    newptr->prev=ptr;
}
void insertAnywhere(){
    int key;
    printf("Enter the number after which the new node is to be inserted\n");
    scanf("%d",&key);
    newptr=getnode();
    ptr=head;
    while (ptr!=NULL && ptr->info!=key)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
        printf("node doesnot exists");
    else{
        newptr->next=ptr->next;
        newptr->prev=ptr;
        (ptr->next)->prev=newptr;
        ptr->next=newptr;
    }
}
void deletionF(){
    
    if(head==NULL)
        printf("linked list is empty");
    else{
        ptr=head;
        head=ptr->next;
        free(ptr);
        head->prev=NULL;
    }
}
void deletionL(){
    if(head==NULL)
        printf("linked list is empty");
    else{
        ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        (ptr->prev)->next=NULL;
        free(ptr);
    }
}

void deletionAnywhere(){
    struct node *prevptr;
    int key;
    printf("Enter the number of which the node is to be deleted\n");
    scanf("%d",&key);
    if(head==NULL){
        printf("linkeda list is empty");
    }
    else{
        ptr=head;
        while(ptr!=NULL && ptr->info!=key)
        {
            ptr=ptr->next;
        }
        if(ptr==NULL){
            printf("node doesnot exists");
        }
        else{
            (ptr->prev)->next =ptr->next;
            (ptr->next)->prev=ptr->prev;
            free(ptr);  
            printf("freed..");
        }
    }
}

int main(){
    int c;
    printf(" 1 for creation\n2 for display\n3 for insertion at fornt \n 4 for insertion at last\n 5 for insertion at any where\n 6 for deletion at front \n 7 for deletion at last \n 8 for deletion at anywhere \n any other key for exitting\n");
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
            insertF();
            break;
        case 4:
            insertL();
            break;
        case 5:
            insertAnywhere();
            break;
        case 6:
            deletionF();
            break;
        case 7:
            deletionL();
            break;
        case 8:
            deletionAnywhere();
            break;
        default:
            printf("invalid input");
            exit(1);
            break;
        }
    }
    return 0;
}