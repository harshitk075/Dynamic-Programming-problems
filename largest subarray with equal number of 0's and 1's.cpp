//program to calculate largest subarray with equal number of 0's and 1's
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
   //input an array with 0's and 1's
   int n;
   cin>>n;

   int arr[n+1];
   mfor(i,1,n)
    cin>>arr[i];

   //we use dynamic programming and hash
    int mxlen=-1;//my ans

    int diff=0;//initial difference
    //0 has value 1 and 1 has value -1;

    //my hash to store position of1st occurrence of difference
    //*********space complexity is not taken into consideration(can be improved with max and min value of diff) *********
     int dppos[n+1]; // for positive differences
     int dpneg[n+1];// for negative differences
     memset(dppos,-1,sizeof(dppos));
     memset(dpneg,-1,sizeof(dpneg));
     dppos[0]=0;
    for(int k=1;k<=n;k++)
    {
        if(arr[k]==0)
            diff++;
        else
            diff--;

        if(diff>=0)
        {
            if(dppos[diff]==-1)
                dppos[diff]=k;
            else
            {
               if(k-dppos[diff]>mxlen)
               {
                   mxlen=k-dppos[diff];
               }
            }
        }

         if(diff<0)
        {
            if(dpneg[-diff]==-1)
                dpneg[-diff]=k;
            else
            {
               if(k-dpneg[-diff]>mxlen)
               {
                   mxlen=k-dpneg[diff];
               }
            }
        }

    }

    cout<<mxlen;
  return 0;
}
