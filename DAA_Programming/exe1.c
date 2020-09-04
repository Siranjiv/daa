#include<stdio.h>
int fact(int n);
void factorial(int n);

int main()
{
    int n;
    printf("Number to find the Factorial :\n");
    scanf("%d",&n);
    printf("[Rec.]Factorial %d is %d.",n,fact(n));//recursively
    factorial(n);
    return 0;
}

void factorial(int n)//iterratively means using a for loop
{
    int res=1;

    for(int i=n;i>0;i--)
    {
        res=res*i;
    }
    printf("\n[Iter.]Factorial %d is %d.",n,res);
        

}

int fact(int n)//recursively
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