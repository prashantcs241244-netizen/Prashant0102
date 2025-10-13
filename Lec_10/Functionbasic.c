#include<stdio.h>
int sum()
{
 int a,b;
 printf("Enter 1st number : ");
 scanf("%d",&a);
 printf("Enter 2nd number : ");
 scanf("%d",&b);
 int sum =  a+b;
 printf("Sum = %d\n",sum);
}

int main()
{
 sum();
}