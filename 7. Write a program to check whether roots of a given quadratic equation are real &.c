#include <stdio.h>

int main()
{
   int a,b,c,D;
   printf("Enter the value of a , b , c ");
   scanf("%d%d%d",&a,&b,&c);
   D=(b*b)-(4*a*c);
   D>0?printf("Real and unequal"):D<0?printf("No real roots"):printf("Real and equal");
    return 0;
}