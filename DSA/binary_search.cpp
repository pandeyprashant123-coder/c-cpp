#include<iostream>
using namespace std;

    int OrderAgnosticbinarySearch(int a[],int end, int target)
    {
        int start = 0; 
        bool isAsc=a[start]<a[end];
        while(start <=end)
        {
            int mid = start +(end-start)/2;
            if (a[mid]==target)
            {
                return mid;
            }
            if(isAsc){
                if (target<a[mid]){
                    end =mid-1;
                }
                else if(target>a[mid]){
                    start = mid+1;
                }
            }else{
                if (target>a[mid]){
                    end =mid-1;
                }
                else if(target<a[mid]){
                    start = mid+1;
                }
            }
        }
        return -1;
    }

int main()
{
    //  int a[] = {2,4,6,9,11,12,14,36,38};
     int a[] = {99,89,75,69,50,30,5,-1};
     int n = sizeof(a) / sizeof(a[0]);
     int target=5;
     int ans=OrderAgnosticbinarySearch(a,n,target);
     cout<<ans;
    return 0;
}
