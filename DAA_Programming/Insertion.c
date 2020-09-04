#include<stdio.h>
# define size 10
void printArray(int A[]);
void insertionSort(int A[]);
int main()
{
    int A[size];

    for(int i=0;i<size;i++)
    {
        printf("A[%d] is",i);
        scanf("%d",&A[i]);

    }
    printf("\nArray values before sort\n");
    printArray(A);
    printf("\nArray values after sort\n");
    insertionSort(A);
    printArray(A);

return 0;   
}

void printArray(int A[])
{

for(int i=0;i<size;i++)
    {
        printf("A[%d] is %d\n",i, A[i]);

    }

}

void insertionSort(int A[])
{
    int key,i, count=0;
    for(int j=1;j<size;j++)
    {
        key=A[j];
        i=j-1;

        while((i>=0)&&(A[i]>key))
        {
            A[i+1]=A[i];
            i=i-1; 
            count++;
        }
        A[i+1]=key;
    }

    printf("\nWhile loop execution count %d\n",count);
}