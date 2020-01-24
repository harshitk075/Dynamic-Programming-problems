//we are give a matrix and we have to find the minimum cost to reach from
//upper left corner to lower right corner

//this a little complex recursion solution see iterative in other
#include <bits/stdc++.h>

using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define mod 1000000007
typedef  long long int ll;

//calculate function to find the minimum cost path
const int n=5;
const int m=4;

int calculate(int x,int y,int mat[][m],int path[][m])
{
    if((x)<0 || (y)<0)
        return INT_MAX;
    if(x==0 && y==0)
        return mat[x][y];

    if(path[x][y]!=0)
        return path[x][y];

     path[x][y]= min(calculate(x,y-1,mat,path),calculate(x-1,y,mat,path))+ mat[x][y];

     return path[x][y];
}

int main()
{
  SPEED
  //input is of the form of matrix ie 2D-array
  int value[n][m];
  int path[n][m];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
       {
           cin>>value[i][j];
           path[i][j]=0;
       }

  cout<<"Minimum cost of path is :"<< calculate(n-1,m-1,value,path);
  return 0;
}
