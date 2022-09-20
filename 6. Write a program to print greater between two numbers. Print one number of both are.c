#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the number : ");
    scanf("%d",&n1);
    printf("Enter the number : ");
    scanf("%d",&n2);
if(n1==n2)
{
    printf("%d",n1);
}
else
{
    if(n1>n2)
    printf("Number1 is greater");
    else
    printf("Number2 is greater");
}
   return 0;
}