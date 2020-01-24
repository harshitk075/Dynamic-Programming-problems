#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

int dp[5][6];
int n=4;
int knap(int idx,int weight,int v[],int w[])
{
    if(idx==n|| weight<=0)
        return 0;

    else if(weight>=w[idx])
    {
        dp[idx][weight]= max(knap(idx+1,weight,v,w),knap(idx+1,weight-w[idx],v,w)+v[idx]);
    }

    else
        dp[idx][weight]= knap(idx+1,weight,v,w);

    return dp[idx][weight];
}
int main()
{
  //SPEED
    int val[] ={100, 20, 60, 40};
    int wt[] = {3, 2, 4, 1};
    int  W = 5;

    int n = sizeof(val)/sizeof(val[0]);

    cout<<knap(0,W,val,wt)<<endl;

     for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
  return 0;
}
