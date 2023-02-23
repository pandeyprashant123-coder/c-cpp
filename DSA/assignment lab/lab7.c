
//Tower of hanoi
#include<stdio.h>
#include<math.h>

void TOH(int n,char src,char dest,char aux)
{
    if(n==1){
        printf("move 1 disc from %c to %c\n",src,dest);
    }
    else{
        TOH(n-1,src,aux,dest);
        printf("move %d disc from %c to %c\n",n,src,dest);
        TOH(n-1,aux,dest,src);
    }
}

int main(){
    char src='A',dest='C',aux='B';
    int n=3;
    TOH(n,src,dest,aux);
    return 0;
}