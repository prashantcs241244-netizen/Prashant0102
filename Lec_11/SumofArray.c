#include<stdio.h>
int main()
{
 int arr[6] = {1,2,1,3,1,2};
 int sum = 0;
 for(int i=0;i<6;i++)
 sum = sum + arr[i];
 printf("%d",sum);

 return 0;
}