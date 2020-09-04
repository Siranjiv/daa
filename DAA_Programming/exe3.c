#include<stdio.h>
int fun(int n);

int main()
{
    int n;
        printf("Number to find:\n");
        scanf("%d",&n);
        printf("[rec.] The value of %d is %d ",n,fun(n));
    return 0;
}

int fun(int n)
{
    if(n<=1)
    {
        return n;
    }
    else if(n%2==0)
    {   
        return n + fun(n/2);

    }
    else if(n%2!=0)
    {
        return fun((n+1)/2)+fun((n-1)/2);
    }

}