//implementation of Jay Kadane's algoritm on 1-D array
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
  int n;
  cin>>n;

  int arr[n];

  for(int i=1;i<=n;i++)
    cin>>arr[i];

   int sum=0;
   int l=1;
   for(int k=1;k<=n;k++)
   {
       if(sum<0){
          sum=0;
          continue;
       }
       else
       {
           sum+=arr[k];
           sum=max(sum,sum+arr[k]);
       }
   }

   cout<<sum<<endl;
  return 0;
}
