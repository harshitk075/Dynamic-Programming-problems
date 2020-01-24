#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

int main()
{
  //SPEED
   long int n;
   cin>>n;

   long int row1[n+1],row2[n+1];
   for(long int i=1;i<=n;i++)
    cin>>row1[i];

   for(long int j=1;j<=n;j++)
    cin>>row2[j];

   ll dp[n+1][2];
   dp[0][0]=0;
   dp[0][1]=0;
   for(long int p=1;p<=n;p++)
   {
       dp[p][0]= max(dp[p-1][0],row1[p]+ dp[p-1][1]);
       dp[p][1]= max(dp[p-1][1],row2[p]+ dp[p-1][0]);
   }

   cout<<max(dp[n][0],dp[n][1]);
  return 0;
}
