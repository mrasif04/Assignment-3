#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the length of sides of triangle: ");
   scanf("%d%d%d",&a,&b,&c);
   ((a+b)>c || (b+c)>a || (a+c)>b)? printf("Triangle is valid") : printf("Triangle is not valid");
   return 0;
}