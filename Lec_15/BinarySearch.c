#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements : \n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int target,found=0;
    printf("Enter target to search : ");
    scanf("%d",&target);
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;

        if(a[mid]==target)
        {
            printf("element found at %d index",mid);
            found=1;
            break;
        }
        else if(a[mid]<target)
        start = mid+1;
        else
        end=mid-1;
    }
    if(found==0)
    printf("Not found");
    return 0;
}