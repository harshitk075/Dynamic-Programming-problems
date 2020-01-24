//this is a program to find the longest increasing subsequence in a given array
//this is a plain iterative approach with complexity O(n^2)
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
typedef  long long int ll;

int main()
{
  //SPEED
   int N;
   cin>>N;

   int arr[N];
   for(int i=1;i<=N;i++)
    cin>>arr[i];

   int mem[N];
   int path[N];
   for(int j=1;j<=N;j++)
    mem[j]=1;

   for(int j=2;j<=N;j++)
   {
       for(int i=1;i<j;i++)
       {
           if(arr[i]<arr[j])
           {
               mem[j]= max(mem[j],mem[i]+1);
           }
       }
   }
   int high=0;
   for(int m=1;m<=N;m++)
   {
       high= max(high,mem[m]);
   }

   cout<<high;
  return 0;
}
