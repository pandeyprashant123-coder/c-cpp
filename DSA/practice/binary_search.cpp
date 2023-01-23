#include<iostream>
using namespace std;

class binarySearch{
    public:
        int calculation(int a[],int n,int target){
            int start =0;
            int end = n;
            
            while(start<=end)
            {
                int mid = start +(end-start)/2;
                if (target<a[mid]){
                    end =mid-1;
                }
                else if(target>a[mid]){
                    start = mid+1;
                }
                else{
                    return mid;
                }
            }
            return -1;
        }
};
int main()
{
    int a[] = {1,2,4,9,11,15};
    int n = sizeof(a) / sizeof(a[0]);
    binarySearch b1;
    int target =11;
    int ans=b1.calculation(a,n,target);
    cout<<ans<<endl;
    return 0;
}