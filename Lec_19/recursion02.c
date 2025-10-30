//factorial using recursion
#include<stdio.h>
int fact( int a)
{
    if(a==0||a==1)
    {
        return 1;
    }
    return a*fact(a-1);
    
}
int main()
{
    int data = fact(5);
    printf("factorial = %d",data);
}