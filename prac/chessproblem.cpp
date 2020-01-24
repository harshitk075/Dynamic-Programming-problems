
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  for(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;

int res=0;
bool check(int a,int b)
{
    if((a>=1&& a<=10) && (b>=1&& b<=10))
      return true;
    else
      return false;
}

int config(int p,int q,int arr[][11],int n)
{
    if(arr[p][q]==1)
        return 0;

    if(!check(p,q))
        return 0;

    if(n==0)
    {
        res++;
        cout<<p<< " "<<q<<endl;
        arr[p][q]=1;
        return 0;
    }

       config(p-1,q-2,arr,n-1);
       config(p+1,q-2,arr,n-1);
       config(p-2,q-1,arr,n-1);
       config(p+2,q-1,arr,n-1);
       config(p-2,q+1,arr,n-1);
       config(p+2,q+1,arr,n-1);
       config(p-1,q+2,arr,n-1);
       config(p+1,q+2,arr,n-1);
}

int main()
{
  SPEED
  int N;
  int a,b;
  cin>>N>>a>>b;

   int mat[11][11];
   for(i,1,10)
    for(j,1,10)
     mat[i][j]=0;
    int h=0;
   config(a,b,mat,N);
   cout<< res;
  return 0;
}
