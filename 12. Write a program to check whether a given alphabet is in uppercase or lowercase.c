#include <stdio.h>

int main()
{
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
    else
   {
       printf("Input is not alphabet");
    }
    return 0;
}    