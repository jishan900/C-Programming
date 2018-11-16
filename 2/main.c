#include<stdio.h>

int main()
{
    float num1,num2;
    int choice;
    printf("enter two numbers:");
    scanf("%f %f",&num1,&num2);
    printf("enter choice (1:add,2:sub,3:mul,4:div):");
    scanf("%d",&choice);

    if (choice == 1){
        printf("adiition is %f\n",num1+num2);
    }
    if (choice == 2){
        printf("sub is %f\n",num1-num2);
    }
    if (choice == 3){
        printf("mul is %f\n",num1*num2);
    }
    if (choice == 4){
        printf("div is %f\n",num1/num2);
    }
    return 0;
}
