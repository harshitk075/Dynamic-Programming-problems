
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
   int t;
   cin>>t;
   long int n,m;
   while(t--)
   {
       cin>>n>>m;
       vector<long int> a,b;
       map<long int,long int>mp;
       long int x,y;
       mfor(i,1,n)
         {
             cin>>x;
             a.push_back(x);
         }
        mfor(i,1,m)
        {
            cin>>y;
            mp[y]=1;
            b.push_back(y);
        }

        long long int ans=0;
        for(auto it=b.begin();it!=b.end();it++)
        {
            if(mp[*it]==1)
            {
                long int gift= *it;
                long int ct=0;
                for(auto ptr=a.begin();ptr!=a.end();ptr++)
                {
                       if(*ptr!=gift)
                         {
                            ct++;
                            if(mp[*ptr]==1)
                             {
                               ans++;
                               mp[*ptr]=0;
                               a.erase(ptr);
                               ptr--;
                              }
                         }

                     else
                       {
                          ans+=(2*ct+1);
                          mp[gift]=0;
                          a.erase(ptr);
                          ptr--;
                          break;
                       }
                }

               /*for(auto temp= it;temp!=b.end();temp++)
                {
                    if(mp[*temp]==0){
                        b.erase(temp);
                        temp--;
                    }
                }*/
            }
        }

        cout<<ans<<endl;
   }
  return 0;
}
