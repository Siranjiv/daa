#include<stdio.h>
int fact(int n);//recursive
void factorial(int n);//iterrative

int main()
{
    int n;
    printf("Enter the number to find factorial:");
    scanf("%d",&n);
    printf("\n Factorial of %d is %d",n,fact(n));
    factorial(n);
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}

void factorial(int n)
{
    int fac=1;
    for(int i=n;i>0;i--)
    {
        fac=fac*i;
    }
    printf("\nFactorial in iterative way:%d",fac);
}