#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5] = {-10,-3,-4,-5,-2};
    int max = INT_MIN;
    for(int i=0;i<5;i++)
    {
    if(a[i]>max)
    max=a[i];
    }
    printf("%d",max);
    return 0;
}