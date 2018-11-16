#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,choice;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("choice (1:add, 2:sub, 3:mul, 4:div):");
    scanf("%d",&choice);

    switch (choice) {
       case 1:
       printf("add=%d",a+b);
       break;

       case 2:
       printf("sub=%d",a-b);
       break;

       case 3:
       printf("mul=%d",a*b);
       break;

       case 4:
       printf("div=%d",a/b);
       break;

       default:
        printf("wrong choice");
        break;
    }
}
