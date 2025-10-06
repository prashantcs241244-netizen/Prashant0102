#include<stdio.h>
int factorial(int x)
{
     unsigned long long  int fact=1;
     int i=1;
    for(i=1;i<=x;i++)
    fact = fact*i;
    printf("Factorial of %d = %llu",x,fact);
    return 0;
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    factorial(a);
    return 0;
}