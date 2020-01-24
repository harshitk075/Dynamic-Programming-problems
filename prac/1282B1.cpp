
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int lli;
typedef  long int li;

int main()
{
  //SPEED

   long int t;
   cin>>t;
   lli n,p,k;
   while(t--)
   {
       cin>>n>>p>>k;
       int arr[n+2];
       for(int i=0;i<n;i++)
         cin>>arr[i];

        sort(arr,arr+n);
       li mx=0,temp=0,sum=0,ct=0;
       for(int i=0;i<=k;i++)
       {
           sum = temp;
           if(sum>p)
            break;
            ct=i;

            for(int m=i+k-1;m<n;m+=k)
            {
                if(sum+arr[m]<=p)
                {
                    sum+=arr[m];
                    ct+=k;
                }
                else{
                    break;
                }
            }
             temp+=arr[i];
             mx= max(mx,ct);
       }

       cout<<mx<<endl;
   }
  return 0;
}
