#include<stdio.h>
void main()
{
  int n;
  printf("\n Enter any number : ");
  scanf("%d", &n);
  if(n>0)
  {
    printf("\n Positive");
  }
  else if(n<0)
  {
    printf("\n Negative");
  }
  else 
  printf("\n Zero");
}  
