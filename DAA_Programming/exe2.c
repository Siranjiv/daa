#include<stdio.h>
int fib(int n);
void fibonacci(int n);
int main()
{
    int n;
   printf("Number to find Fibonacci:\n");
   scanf("%d",&n);
   printf("[Rec.]Fibbonaci %d is %d.",n,fib(n));//recursive
   fibonacci(n); //interative

    return 0;
}

int fib(int n)
{
    if((n==0)||(n==1))
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
    

}

void fibonacci(int n)
{
    int u=0,v=1,t;//fibonacci value is sum of 2 previous values
    for(int i=1; i<n; i++)
    {
        t=v+u; 
        u=v;
        v=t;

    }
    printf("\n[iter.]Fibonacci %d is %d.",n,t); //can be v or t

}