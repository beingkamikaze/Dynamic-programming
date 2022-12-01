#include <bits/stdc++.h>
using namespace std;
int countsubsetsum(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=sum;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main()
{
    int arr[] = {1, 2, 3, 3}, sum = 6;
    int n=4;
    cout<<countsubsetsum(arr,n,sum)<<endl;
    return 0; 
}
