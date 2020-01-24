#include <stdio.h>
#include <stdlib.h>

//program to find fibonacci number using dynamic programming
int fibbo[10000];
//function to find fibonacci number

int Fib(int n)
{
       if(fibbo[n]==0)
       {
          if(n<=1)
                fibbo[n]=n;
          else
                fibbo[n]=Fib(n-1)+Fib(n-2);
       }
        return fibbo[n];


}

int main()
{
    printf("%ld\n",Fib(6));
    for(int i=0;i<=6;i++)
        printf("%d ",fibbo[i]);
    return 0;
}
