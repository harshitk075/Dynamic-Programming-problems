#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
typedef  long long int ll;

int check(int len,int a,int b,int c,int n)
{
    bool ans=false;
    int p1,p2;

     if(len==a+a)
     {
         p1=a;
         p2=a;
         ans=true;
     }
     else if(len==a+b)
     {
         p1=a;
         p2=b;
         ans=true;
     }
       else if(len==a+c)
     {
         p1=a;
         p2=c;
         ans=true;
     }
       else if(len==b+b)
     {
         p1=b;
         p2=b;
         ans=true;
     }
       else if(len==b+c)
     {
         p1=b;
         p2=c;
         ans=true;
     }
       else if(len==c+c)
     {
         p1=c;
         p2=c;
         ans=true;
     }

    if(ans==false && len==n)
        return 1;
    else if(ans==false)
        return 0;
    else
        return 2+check(p1,a,b,c,n)+check(p2,a,b,c,n);
}
int main()
{
  SPEED
   int n,a,b,c;
   cin>>n>>a>>b>>c;

   int y=check(n,a,b,c,n);
   cout<<y;
  return 0;
}
