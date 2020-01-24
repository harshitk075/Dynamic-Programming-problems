#include<bits/stdc++.h>
using namespace std;
int func(int ar[],int br[],int m,int idx,int n,int dp[][1001])
{
    if(idx>n-1)
    return 0;
    if(dp[idx][m]!=-1)
    {
        return dp[idx][m];
    }
    int ans;
    if(ar[idx]<=m)
    {
        ans=max(func(ar,br,m-ar[idx],idx+1,n,dp)+br[idx],func(ar,br,m,idx+1,n,dp));

    }
    else
    ans=func(ar,br,m,idx+1,n,dp);
    dp[idx][m]=ans;
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    int br[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>br[i];
    }
    int dp[1001][1001];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        dp[i][j]=-1;
    }
    int x=func(ar,br,m,0,n,dp);
    printf("%d\n",x);
}
