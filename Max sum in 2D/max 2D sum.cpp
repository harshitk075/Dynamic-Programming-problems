//In this program we are given a matrix and we have to find a submatrix with maximum sum
//we do this using DP and it is done in O(n^4) complexity with max possible n=100
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
   int n,m;
   cin>>n>>m;

   int dp[n+1][m+1];

   //make 0th row and column 0
   for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }

    for(int j=0;j<=n;j++)
    {
        dp[0][j]=0;
    }

    //filling out dp matrix while taking input
      int X;
      for(int i=1;i<=n;i++)
      {
          for(int k=1;k<=m;k++)
          {
              cin>>X;
              dp[i][k]= dp[i][k-1]+ dp[i-1][k] - dp[i-1][k-1]+ X;
          }
      }
     cout<<endl;
    //generating tuples
    int mx=INT_MIN;
       for(int i=1;i<=n;i++)
          for(int k=1;k<=m;k++)
             for(int a=i;a<=n;a++)
                 for(int b=k;b<=m;b++)
                 {
                     int Y= dp[a][b]- dp[a][k-1]- dp[i-1][b]+ dp[i-1][k-1];
                     mx=max(mx,Y);
                 }
    cout<< mx<<endl;
  return 0;
}
