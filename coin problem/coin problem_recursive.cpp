//recursive DP to find minimum number of coins from a set of coins to reach a given amount

#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
typedef  long long int ll;

//solve function
ll solve(ll x,int coin[],int N,ll value[])
{

     if(x<0)
        return INT_MAX;

     else if(x==0)
        return 0;

     else if(value[x]!=-1)
        return value[x];

      ll temp= INT_MAX;
       for(int i=0;i<N;i++)
         {
             temp = min(temp,solve(x-coin[i],coin,N,value)+1);
             //cout<<temp<<endl;
         }
        value[x] = temp;
        return temp;
}

int main()
{
  SPEED
   //input in form types of coin ,number of coins, next the total amount
   //we have to find minimum number of coins required to make the sum
   int amount;
   cin>>amount;
   int coins[]= {1,3,4,5};
   int n= sizeof(coins)/sizeof(coins[0]);
   ll value[amount+1];
   for(int i=0;i<=amount;i++)
    value[i]=-1;
    value[0]=0;
   //calling the solve function
   cout << solve(amount,coins,n,value)<<endl;
   //for(int i=0;i<=amount;i++)
    //cout<<value[i]<<" ";
  return 0;
}

