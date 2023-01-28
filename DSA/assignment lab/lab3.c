#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define size 20
//circular queue
int front=-1;
int rear=-1;
int data[size];

int enqueue(){
    int a;
    if(((rear+1)%size)==front){
        printf("queue is full\n");
    }
    else{
        printf("Enter the number: ");
        scanf("%d",&a);
        data[rear]=a;
        rear = (rear+1)%size;
    }
}
void dequeue(){
    if(rear==front){
        printf("queue is empty\n");
    }
    else{
        printf("%d is dequeued\n",data[front]);
        front=(front+1)%size;
    }
}
void display(){
    int i;
    if(rear==front)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        printf("Elements in queue are\n");
        int i = front;
        while(i!=rear)
        {
            printf("%d \n",data[i]);
            i=(i+1)%size;
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