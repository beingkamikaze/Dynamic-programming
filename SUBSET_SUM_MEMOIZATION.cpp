#include<bits/stdc++.h>
using namespace std;
//
int dp[2000][2000];
bool fn(int arr[],int n,int sum)
{
    if(sum==0)
    return true;
    if(n==0)
    return true;

    if(dp[n-1][sum]!=-1)
    return dp[n-1][sum];

    if(arr[n-1]>sum)
    return dp[n-1][sum]=fn(arr,n-1,sum);
    
    return dp[n-1][sum]=fn(arr,n-1,sum-arr[n-1])|| fn(arr,n-1,sum);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int arr[]={3,4,5,2};
    int n=4;
    int sum=9;
    cout<<fn(arr,n,sum);
    return 0;
}
