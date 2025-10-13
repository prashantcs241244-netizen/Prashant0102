#include<stdio.h>
int swap_b(int a,int b)
{
    a = b;
   return a;
}
int swap_a(int a,int b)
{
    b=a;
    return b;
}
int main()
{
    int a = 5;
    int b = 10;
    int x = swap_b(a,b);
    int y = swap_a(a,b);
    printf("a = %d b = %d",x,y);
}