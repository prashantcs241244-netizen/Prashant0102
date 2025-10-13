#include<stdio.h>

void evenodd(int a)
{
    if(a%2==0)
    printf("Even");
    else
    printf("Odd");
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    evenodd(a);
    return 0;
}