#include <stdio.h>

int main()
{
int num;
    printf("Enter a number: ");
    scanf("%d",&num);
   num%5==0? printf("Number is divisible by 5") : printf("Number is not divisible by 5");
   return 0;
}