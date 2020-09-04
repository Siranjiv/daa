#include<stdio.h>
int fun(int x,int y);

int main()
{
    int x,y;
    printf("Entering 2 numbers:");
    scanf("%d %d",&x,&y);

    printf("The result for the function is :%d",fun(x,y));

    return 0;
}

int fun(int x, int y)
{

    if((y==0)||(y==x))
        return 1;

        return fun(x-1,y)+fun(x-1,y-1);

}