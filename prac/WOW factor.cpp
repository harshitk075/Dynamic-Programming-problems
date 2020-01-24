
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
   string s;
   cin>>s;
   s+='o';
   map<ll,ll>mp;
   ll twc=0;
   ll temp=0;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]=='v')
         temp++;

       else if(s[i]=='o')
       {
           if(temp==0)
             mp[i]= twc;

           else{
             twc+= (temp-1);
             mp[i]= twc;
             temp=0;
           }

       }
   }
   //evaluation
   long long int res=0;
   for(ll j=0;j<s.length()-1;j++)
   {
       if(s[j]=='o')
       {
           res+= mp[j]*(twc-mp[j]);
       }
   }

   cout<<res;
  return 0;
}
