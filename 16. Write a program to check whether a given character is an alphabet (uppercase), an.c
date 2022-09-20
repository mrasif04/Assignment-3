#include <stdio.h>

int main()
{
    int b;
    char a;
    printf("Enter the alphabet\n");
    scanf("%c",&a);
    if(a>=65 && a<=90)
   {
       printf("Upper case");
   }
    else if(a>=97 && a<=122)
    {
        printf("Lower case");
    }
    else if(a>=48 && a<=57)
   {
       printf("Input is digit");
    }
    else
    {
        printf("Input is special charecter");
    }
    return 0;
}    