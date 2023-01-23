#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define size 20

int front=0;
int rear=-1;
int data[size];

int enqueue(){
    int a;
    if(rear==size-1){
        printf("queue is full\n");
    }
    else{
        printf("Enter the number: ");
        scanf("%d",&a);
        ++rear;
        data[rear] = a;
    }
}
void dequeue(){
    if(rear<front){
        printf("queue is empty\n");
    }
    else{
        printf("%d is dequeued\n",data[front]);
        ++front;
    }
}
void display(){
    int i;
    if(rear==-1){
        printf("queue is empty\n");
        return;
    }else{
        printf("Elements in queue are\n");
        for (i=front;i<=rear; i++)
        {
            printf("%d ",data[i]);
        }
    }
}
int main(){
    int c;
    printf("Enter\n 1. to enqueue\n2. top dequeue\n 3. to display\n 4. to exit\n");
    while(1)
    {
    printf("Enter the operation: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;
    
    default:
    printf("invalid input\n");
        break;
    }
        
    }
    
    return 0;
}