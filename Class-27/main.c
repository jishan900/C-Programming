#include <stdio.h>
#define SIZE 10

int main()
{
    int i,j,t;
    int b[SIZE]= {5,6,11,9,44,1,3,55,89,2};
    for(i=0; i<SIZE-2; i++)
    {
        for(j=i+1; j<SIZE-1; j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printArray(b);
    return 0;
}
void printArray(int a[])
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("%d ",a[i]);
    }
}
