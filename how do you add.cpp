
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;
int ways(int n,int k)
{
    cout<<n<<" "<<k<<endl;
    if(k==1)
        return 1;
    else
    {
        int x=0;
        mfor(i,0,n-1)
        {
             x+=1+ways(n-i,k-1);
        }

    }
}
int main()
{
  SPEED
   int n,k;
   cin>>n>>k;

   cout<<ways(n,k);
  return 0;
}
