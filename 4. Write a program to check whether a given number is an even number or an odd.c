#include<stdio.h>
int main()
{
    int num,even,odd;
    printf("Enter the number: ");
    scanf("%d",&num);
        if(num&1==1)
        {
            printf("odd");
            return 0;
        }
        else
        {
            printf("even");
            return 0;
        }
}