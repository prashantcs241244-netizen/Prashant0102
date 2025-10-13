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

 int oddcount = 0 , evencount = 0;
 for(int i=0;i<n;i++)
 {
    if(arr[i]%2==0)
    evencount++;
    else
    oddcount++;
 }
 printf("number of odd elements : %d & number of even elements : %d",oddcount,evencount);

 return 0;
}