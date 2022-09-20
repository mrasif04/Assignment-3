#include <stdio.h>

int main()
{

   int a, b,c;
   printf("Enter the three numbers\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && a>c)
   {
       printf("%d is greatest number",a);
   }
   else if(b>c)
   {
       if(a==b)
       printf("%d is greatest number and it appears two times",a);
       else
       printf("%d is greatest number ",b);
   }
   else if(c>b)
   {
       if(a==c)
       printf("%d is greatest number and it appears two times",a);
       else
       printf("%d is greatest number",c);
   }
   else if(b==c && a!=b)
   {
       printf("%d is greatest number and it appears two times",b);
   }
   else
   printf("%d is greatest number and it appears three times",a);

    return 0;
}