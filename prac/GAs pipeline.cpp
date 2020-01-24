
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

int main()
{
  SPEED
  int T;
  cin>>T;
  ll n,a,b;
  string s;
  while(T--)
  {
      cin>>n>>a>>b;
      cin>>s;

      unsigned long long int dp[n+1][2];
    for(long int i=0;i<=n;i++)
        for(int j=0;j<=1;j++)
             dp[i][j]= 99999999999999999;

        //cout<<dp[2][1]<<endl;
      //dp[pos+1][height-1];
      dp[0][0]=b;
      for(long int i=0;i<s.length();i++)
      {
          long int pos=i;
          if(s[pos]=='0')
          {
              //i have four options for pipe 1->2 1->1 2->1 2->2
              dp[pos+1][0]= min(dp[pos+1][0],dp[pos][0]+a+b);
              dp[pos+1][1]= min(dp[pos+1][1],dp[pos][0]+2*a+2*b);

              dp[pos+1][1]= min(dp[pos+1][1],dp[pos][1]+a+2*b);
              dp[pos+1][0]= min(dp[pos+1][0],dp[pos][1]+2*a+b);

          }
          else{
              dp[pos+1][1]= min(dp[pos+1][1],dp[pos][1]+a+2*b);
          }
      }
      cout<<dp[n][0]<<endl;
  }
  return 0;
}
