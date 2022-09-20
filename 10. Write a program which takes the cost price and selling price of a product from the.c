#include <stdio.h>

int main()
{
    float CP,SP,profit_percentage,loss_percentage;
    printf("Enter cost price : ");
    scanf("%f",&CP);
    printf("Enter selling price : ");
    scanf("%f",&SP);
    if(SP>CP)
    {
    printf("Profit percentage is %f",((SP-CP)/CP)*100);
    }
    else
    {
    printf("Loss percentage is %f",((CP-SP)/CP)*100);
    }return 0;
}    