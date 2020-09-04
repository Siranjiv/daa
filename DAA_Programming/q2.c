#include<stdio.h>
int fub(int n);
void fubi(int n);

int main()
{
    int n;
    printf("Enter the value to be entered :");
    scanf("%d",&n);
    printf("The Fub value of %d is :%d",n,fub(n));

     fubi( n);
    return 0;
   
}

int fub(int n)
{
    if ((n==0)||(n==1))
    {
        return n;
    }
    else
    {
        return fub(n-2)+fub(n-1);

    }
    
}

void fubi(int n)
{

    int u=0,v=1,val;

    for(int i=0;i<n;i++)
    {

        val=u+v;
        v=u;
        u=val;


    }
    printf("\n\nThe recursive way fubi:%d",val);

}