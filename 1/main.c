#include<stdio.h>

int main()
{
    int num1,num2,choice;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("enter choice (1:add,2:sub,3:mul,4:div):");
    scanf("%d",&choice);

    if (choice == 1){
        printf("adiition is %d\n",num1+num2);
    }
    if (choice == 2){
        printf("sub is %d\n",num1-num2);
    }
    if (choice == 3){
        printf("mul is %d\n",num1*num2);
    }
    if (choice == 4){
        printf("div is %d\n",num1/num2);
    }
    return 0;
}
