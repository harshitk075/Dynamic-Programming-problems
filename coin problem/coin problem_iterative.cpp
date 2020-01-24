//recursive DP to find minimum number of coins from a set of coins to reach a given amount
// The set of coins required to make the sum is also printed
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
typedef  long long int ll;


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
   ll value[amount+1];
    value[0]=0;
   int a[amount+1];
   for(int i=1;i<=amount;i++)
   {
       value[i]=INT_MAX;
       for(int j=0;j<3;j++)
       {
           if(i-coins[j]>=0)
           {
               if(value[i]>(value[i-coins[j]]+1))
                a[i]= coins[j];

                value[i]= min(value[i],value[i-coins[j]]+1);
           }
       }
   }

    cout<<value[amount]<<endl;

//code to print the set of coins selected

    cout<<"The coins picked are : ";


  int p=10;
   while(p>0)
   {
       cout<<a[p]<<" ";
       p = p- a[p];
   }

  return 0;
}

