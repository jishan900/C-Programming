#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Please enter a number: ");
    scanf("%d",&a);
    printf("Please enter a number: ");
    scanf("%d",&b);
    printf("Square result= %d ",absqr(a,b));
    return 0;
}
int absqr(int a,int b)
{
    return a*a+2*a*b+b*b;

}
