//Power using Recursion
#include<stdio.h>
int power (int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    return x*power(x,n-1);
}
int main()
{
    int data = power(5,3);
    printf("Power = %d",data);
}