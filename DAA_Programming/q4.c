#include<stdio.h>
int fun(int x,int y);

int main()
{

    int x,y;
printf("Enter the values :");
scanf("%d %d",&x,&y);
printf("The answer is :%d",fun(x,y));

 return 0;   
}

int fun(int x,int y)
{
    if ((y==0)||(x==y))
        return 1;
    return fun(x-1,y)+ fun(x-1,y-1);

}