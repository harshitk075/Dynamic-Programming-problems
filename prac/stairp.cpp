
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
//#define  for(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

//using dp to find total solutions
int solve(int n,int arr[])
{
    if(n<0)
    return 0;

    if(n==0)
    return 1;

    if(arr[n]!=-1)
    return arr[n];

    int ans;
    ans= solve(n-1,arr) + solve(n-2,arr) + solve(n-3,arr);
    arr[n]= ans;
    return ans;
}
int main()
{
  SPEED
  int N;
  cin>>N;

  int dp[N];
  for(int i=1;i<=N;i++)
  dp[i]=-1;
  cout<<solve(N,dp);
  return 0;
}
