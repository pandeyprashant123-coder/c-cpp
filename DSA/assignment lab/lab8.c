//sorting algorithms

#include<stdio.h>
#include<math.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int insetion_sort(int a[],int n){
    for (int i = 1; i <=n-1; i++)
    {
            int j,key;
            key=a[i];
            j=i-1;
            while(j>=0 && a[j]>key){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
    }
}

void selection_sort(int a[],int n){
    for (int i = 0; i <= n-2; i++)
    {
        int min_idx=i;
        for (int j = i+1; j <=n-1; j++)
        {
            if (a[j]<a[min_idx])
                min_idx=j;
        }
        swap(&a[min_idx],&a[i]);
    }
}

int bubble_sort(int a[],int n){
    for (int i = 0; i <= n-1; i++)
    {
        int isSort=1;
        for (int j = 0; j <= n-i-1; j++)
        {
            if (a[i]>a[i+1])
            {
                swap(&a[i],&a[i+1]);
                isSort=0;
            }
        }
        if (isSort==1)
        {
            break;
        }
    }
    
}

int main(){
    int a[]={4,2,6,5,9,7,10};
    int n =sizeof(a)/sizeof(a[0]);
    // insetion_sort(a,n);
    // selection_sort(a,n);
    bubble_sort(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}