//this is code to print the shortest cost path in an

#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
#define  mfor(i,a,b)  for(int i=a;i<=b;i++)
typedef  long long int ll;
const int x = 5;
const int y=4;

int fpath(int a,int b,int arr[][y],int prr[][y])
{
  if(a==0 && b==0)


  else if(a<0 || b<0)
      return INT_MAX;

   else
   {
       cout<< min(fpath(a-1,b,arr,prr),fpath(a,b-1,arr,prr))<<" ->";
   }


}

int main()
{
  SPEED

   int mat[x][y];

   int dp[x][y];
   mfor(i,0,x-1)
     mfor(j,0,y-1)
     {
        cin>>mat[i][j];
        dp[i][j]=0;
     }
      dp[0][0]=mat[0][0];
    //fill first row
    for(int k=1;k<y;k++)
        dp[0][k]= dp[0][k-1]+mat[0][k];


     //now fill ur second row
    for(int p=1;p<x;p++)
        dp[p][0]= dp[p-1][0]+mat[p][0];

    //now fill the remaining matrix

     mfor(i,1,x-1)
       mfor(j,1,y-1){
           dp[i][j]= min(dp[i-1][j],dp[i][j-1])+mat[i][j];
       }
     cout<<endl;

    cout<<"The min cost to reach lower right corner is :"<<dp[x-1][y-1]<<endl;
    cout<<"We took the path :"<<endl;
    fpath(x-1,y-1,mat,dp);



  return 0;
}


