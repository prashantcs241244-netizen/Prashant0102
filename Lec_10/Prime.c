#include<stdio.h>

void prime_or_not(int num)
{
 int mid = num/2;
 int flag = 1;
 for(int i=2;i<=mid;i++)
 {
    if(num%i==0)
    {
        flag = 0;
        break;
    }
 }

 if(flag==1)
 printf("Prime");
 else
 printf("Not prime");
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    prime_or_not(num);
}