#include <stdio.h>

int main()
{
  int m;
  printf("Enter the month number ");
  scanf("%d",&m);
  if(m%2==0)
  {
      if(m==2)
      printf("28 days");
      else
      printf("30 days");
  }
  else
  printf("31 days");
   return 0;
}