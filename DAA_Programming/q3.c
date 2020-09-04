#include<stdio.h>
int fun(int n);
int main()
{
    int n;
    printf("Enter value required:");
    scanf("%d",&n);
    printf("The value is %d",fun(n));
    return 0;
}

int fun(int n)
{
    if (n<=1)
    {
        return n;
    }
    else if(n%2==0)
    {
        return n+fun(n/2);
    }
    else
    {
        return fun((n+1)/2)+fun((n-1)/2);
    }
    

}