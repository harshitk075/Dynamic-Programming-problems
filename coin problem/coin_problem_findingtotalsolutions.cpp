//this code outputs the possible solutions for generation amount from set of coins
#include<bits/stdc++.h>
using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
typedef  long long int ll;

int solve(int x,int coin[],int n,int mem[])
{
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(mem[x]!=-1)
        return mem[x];
    int temp=0;
     for(int i=0;i<n;i++)
     {
         temp+=solve(x-coin[i],coin,n,mem);
     }
     mem[x]=temp;
     return mem[x];
}
int main()
{
   SPEED
   //input in form types of coin ,number of coins, next the total amount
   //we have to find minimum number of coins required to make the sum
   int amount;
   cin>>amount;
   int  n;
   cin>>n;
   int coins[]= {1,3,4};
   int mem[amount+1];
   for(int i=0;i<=amount;i++)
    mem[i]=-1;
    mem[0]=0;
    cout<<"possible no of solutions are :"<<solve(amount,coins,n,mem);

  return 0;
}
