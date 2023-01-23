#include<iostream>
using namespace std;

int search(int nums[],int end, int target,bool FindStartIndex);

int* firstAndLastPosition(int nums[],int end, int target){
    int n=end;
    static int ans[]={-1,-1};
    int start = search(nums,n,target,true);
    int ending = search(nums,n,target,false);
    ans[0]=start;
    ans[1]=ending;
    return ans;
}
int search(int nums[],int end, int target,bool FindStartIndex){
    int ans =-1;
    int start = 0;
    while(start <=end)
        {
            int mid = start +(end-start)/2;
            if (target<nums[mid]){
                    end =mid-1;
                }
                else if(target>nums[mid]){
                    start = mid+1;
                }else{
                    ans = mid;
                    if(FindStartIndex){
                        end = mid -1;
                    }else{
                        start = mid + 1;
                    }
                }
        }
        return ans;
}

int main()
{
    int nums[]={5,7,7,7,7,8,8,20};//first and last position of the target
    int n = sizeof(nums) / sizeof(nums[0]);
    int target=7;
    int *ans;
    ans=firstAndLastPosition(nums,n,target);
    cout<<"{"<<*ans<<','<<*(ans+1)<<'}'<<endl;
    return 0;
}
