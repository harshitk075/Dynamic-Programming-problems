// program to find max range sum in a given array using DP

#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  for(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

int main()
{
  SPEED
  int N;
  cin>>N;
   int arr[N];

   for(i,1,N)
    cin>>arr[i];

    int sum=0;
    int ms=0;
    for(j,1,N)
    {
        sum+=arr[j];
        ms= max(ms,sum);   //we keep track of our maximum sum(ms)
        if(sum<0)
            sum=0;
    }

    cout<<ms;
  return 0;
}
