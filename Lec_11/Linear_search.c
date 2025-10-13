#include<stdio.h>
int main()
{
 int n;
 printf("Enter size of array : ");
 scanf("%d",&n);
 int arr[n];

 printf("Enter %d elements : \n",n);
 for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);

 int target;
 printf("Enter the element to search : ");
 scanf("%d",&target);

 int flag = 0;
 int i;
 for( i=0;i<n;i++)
 {
    if(target==arr[i])
    {
        flag=1;
        break;
    }
    
 }
 if(flag==1)
 printf("Element exist in array at %dth index",i);
 else
 printf("Element does not exist in the array");

 return 0;
}