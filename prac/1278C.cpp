#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;
ll check(stack<int> stkl,stack<int> stkr,int rc,int bc)
{
    cout<<rc<< " "<<bc<<endl;
    if(rc==bc)
        return 0;

    else if(stkl.empty() || stkl.empty())
         return INT_MAX;

    else{
        int x= stkl.top();
        stkl.pop();
         ll r1;
        (x==1)? r1=1+check(stkl,stkr,rc-1,bc) : r1=1+ check(stkl,stkr,rc,bc-1);

        int y= stkr.top();
        stkl.pop();
        ll r2;
        (y==1)? r2= 1+check(stkl,stkr,rc-1,bc) : r2=1+ check(stkl,stkr,rc,bc-1);

        return min(r1,r2);

    }
}
int main()
{
  //SPEED
   int t;
   cin>>t;
   int n;
   while(t--)
   {
       cin>>n;
       stack<int> left,right;
       int a,b;
       int redct=0,bluect=0;
       for(int i=1;i<=2*n;i++)
       {
           cin>>a;
           if(a==1)
            redct++;
           else
            bluect++;
           left.push(a);
       }

       for(int k=1;k<=n;k++)
       {
           right.push(left.top());
           left.pop();
       }

           ll ret= check(left,right,redct,bluect);
           cout<<ret<<endl;

   }
  return 0;
}
