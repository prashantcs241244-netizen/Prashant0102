#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int *p1,*p2;
    p1 = &b;
    p2 = &a;
    printf("%d %d",(p1),(p2));
}