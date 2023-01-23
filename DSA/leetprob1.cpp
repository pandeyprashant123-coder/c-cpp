#include<iostream>
#include<string>
using namespace std;

string smallestLetter(string letters[],int n, string target)
{
    int start = 0; 
    int end=n;
        while(start <=end)
        {
            int mid = start +(end-start)/2;
            if (target<letters[mid]){
                end =mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return letters[start%n];
}
int main()
{
    string letters[]={"c","f","j"};//Find smallest letter greater than target
    int n = sizeof(letters) / sizeof(letters[0]);
    string target = "a";
    string ans = smallestLetter(letters,n,target);
    cout<<ans<<endl;
    return 0;
}