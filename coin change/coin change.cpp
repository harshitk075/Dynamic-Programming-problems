//recursive program to calculate min coin change required for a given amount

#include<bits/stdc++.h>
using namespace std;

long int dp[10000];
long long int coinchange(vector<int> &coins,int amount)
{
    if(amount<0)
        return INT_MAX;
    else if(amount==0)
        return 0;

    else if(dp[amount]!=-1)
        return dp[amount];
    else
    {
        long long int mn= INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
           mn = min(mn,1+coinchange(coins,amount-coins[i]));
        }
        dp[amount]=mn;
        return dp[amount];
    }

}

int main()
{
    int amount;
    int n=1;
    vector<int> coins;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       coins.push_back(x);
    }

    cin>>amount;
    long long int ans= coinchange(coins,amount);
    if(ans==INT_MAX)
        cout<<-1;
    else
    {
        cout<<ans<<endl;
    }

    return 0;
}
