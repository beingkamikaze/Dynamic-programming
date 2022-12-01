#include<bits/stdc++.h>
using namespace std;
//BASIC RECURSIVE APPROACH
bool fn(int arr[],int n,int sum)
{
    if(sum==0)
    return true;
    if(n==0)
    return true;
    if(arr[n-1]>sum)
    return fn(arr,n-1,sum);
    
    return fn(arr,n-1,sum-arr[n-1])|| fn(arr,n-1,sum);
}
int main()
{
    int arr[]={3,4,5,2};
    int n=4;
    int sum=9;
    cout<<fn(arr,n,sum);
    return 0;
}
