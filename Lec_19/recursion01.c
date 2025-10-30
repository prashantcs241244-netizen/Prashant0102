//sum using recursion
#include<stdio.h>
int sum( int a)
{
    if(a==0)
    {
        return 0;
    }
    return a+sum(a-1);
    
}
int main()
{
    int data = sum(3);
    printf("%d",data);
}