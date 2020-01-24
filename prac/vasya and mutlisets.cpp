
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
   int n;
   cin>>n;
   int arr[n+4];

    for(int i=1;i<=n;i++)
        cin>>arr[i];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        mp[arr[i]]++;
    }

    int ct=0,cttwos=0,ctgt=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==1)
            ct++;

        else if(it->second==2)
            cttwos++;

        else
            ctgt++;
    }


    if(ct%2==0)
    {
        int temp=0;
        cout<<"YES"<<endl;
        for(int k=1;k<=n;k++)
        {
            if(temp<ct/2 && mp[arr[k]]==1)
            {
                cout<<'A';
                temp++;
            }

            else if(temp>=ct/2 && mp[arr[k]]==1)
            {
                cout<<'B';
                temp++;
            }

            else
                cout<<'A';
        }
    }

    else
    {

        if(ctgt==0)
            cout<<"NO";

        else{
            int flag=0,temp=0;
            for(int k=1;k<=n;k++)
            {
             if(temp<ct/2 && mp[arr[k]]==1)
             {
                cout<<'A';
                temp++;
             }

            else if(flag==0 && mp[arr[k]]>2)
            {
                cout<<'A';
                flag=1;
            }

            else if(temp>=ct/2 && mp[arr[k]]==1)
            {
                cout<<'B';
                temp++;
            }

            else
                cout<<'B';
            }
        }
    }

  return 0;
}
