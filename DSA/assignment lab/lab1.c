#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define size 10

int top=-1;
int data[size];

int push(){
    int a;
    if(top==size-1){
        printf("stack overflow\n");
    }
    else{
        printf("Enter the number: ");
        scanf("%d",&a);
        ++top;
        data[top] = a;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("%d is popped\n",data[top]);
        --top;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("stack is empty\n");
        return;
    }else{
        printf("Elements in stack are\n");
        for (i=top;i>=0; i--)
        {
            printf("%d\n",data[i]);
        }
    }
}
int main(){
    int c;
    printf("Enter\n 1. to push\n2. top pop\n 3. to display\n 4. to exit\n");
    while(1)
    {
    printf("Enter the operation: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
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