#include <iostream>

using namespace std;
//program for knapsack problem using dynamic programming
//recursive function
int arr[5][6];
int kp(int n,int w,int wt[],int val[])
{
    //write the base case
    if(w==0 || n==0)
        return 0;
    //condition if weight of selected item is greater than max weight
    else if(wt[n-1]>w)
         arr[n][w]=kp(n-1,w,wt,val);

    else
          arr[n][w]= max(val[n-1]+kp(n-1,w-wt[n-1],wt,val), kp(n-1,w,wt,val));

        return arr[n][w];
}
int main()
{
    int val[] ={100, 20, 60, 40};
    int wt[] = {3, 2, 4, 1};
    int  W = 5;
    int n = sizeof(val)/sizeof(val[0]);
    int b = sizeof(wt)/sizeof(wt[0]);
    cout<< kp(n,W,wt, val)<<endl;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
