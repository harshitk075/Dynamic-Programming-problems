
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

double dp[1009];
int loose(int n,int x,int y)
{
    if(n==0)
      return 1;

    else if(dp[n]==0)
    {
        dp[n]= (((y-n-1)*(1.0))/x+y-(n-1))*loose(n-1,x,y);
    }

    else
        return dp[n];
}

int main()
{
  //SPEED
   int t;
   cin>>t;
   int R,G;
   while(t--)
   {
       cin>>R>>G;

       double ans=0,x;
       for(int i=0;i<G;i+=2)
       {
           x= loose(i,R,G);
           x*= (R*(1.0))/(R+G-i);
           ans+=x;
       }

       printf("%.6f\n",ans);
   }

  return 0;
}
