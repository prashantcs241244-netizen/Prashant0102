#include<stdio.h>

int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  if(n>0)
  printf("Positive");
  else if(n<0)
  printf("Negetive");
  else
  printf("0");
  return 0;

}
