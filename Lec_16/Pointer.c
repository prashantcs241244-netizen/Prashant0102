#include<stdio.h>
int main()
{
    int a = 10,*p;
    p=&a;
    printf("%d",p);
    printf("\n%d",*p);
}