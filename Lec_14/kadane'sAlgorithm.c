//Kadane's Algorithm
#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5]={-8,2,-3,4,9};
    int maxsum=INT_MIN;
    int currsum;
    for(int i=0;i<5;i++)
    {
        // if(currsum<0)
        // {
        //     currsum=0;
        // }
        currsum+=a[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
        }
        if(currsum<0)
        {
            currsum=0;
        }
    }
    printf("Max=%d",maxsum);
} 