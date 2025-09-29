#include<stdio.h>

int main()
{
  int marks,att;
  printf("Enter your marks and attendence : ");
  scanf("%d%d",&marks,&att);

  if(att>=75 && marks>=75)
  printf("A");
  else if(att>=75 && marks<75 && marks>=65)
  printf("B");
  else if(att>= 75 && marks<65 && marks>=55)
  printf("C");
  else
  printf("F");

  return 0;
}