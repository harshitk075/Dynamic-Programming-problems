//calculate the length of the longest common subsequence
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
   string a,b;
   cin>>a>>b;

   int al=a.length();
   int bl=b.length();
   int dp[al+1][bl+1];

   for(int i=0;i<=al;i++)
   {
       for(int j=0;j<=bl;j++)
       {
           if(i==0 || j==0)
                dp[i][j]=0;

           else if(a[i-1]==b[j-1])
           {
               dp[i][j]= 1+ dp[i-1][j-1];
           }

           else if(a[i-1]!=b[j-1])
           {
               dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
           }
       }
   }

   cout<<dp[al][bl];
  return 0;
}
