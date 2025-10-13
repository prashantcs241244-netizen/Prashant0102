#include<stdio.h>
#include<limits.h>
int main()
{
 int a[5] = {1,4,-3,5,8};
 int k=2;
 int max = INT_MIN;
 for(int i=0;i<5-1;i++)
 {
    int sum = 0;
    for(int j=i;j<k;j++)
    {
     sum = sum + a[j];
    }
    if(sum>max)
    max=sum;
    k++;
 }
 printf("%d",max);
 return 0;
}