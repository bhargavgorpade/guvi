#include<stdio.h>
void main()
{
  int n;
  printf("\n Enter a number : ");
  scanf("%d", &n);
  if(n<=0)
  {
    printf("\n Invalid");
  }
  else if(n%2==0)
  {
    printf("\n Even");
  }
  else
  {
    printf("\n Odd");
  }
}  
