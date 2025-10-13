#include<stdio.h>
int main()
{
 int arr[10] = {1,2,3,4,1,1,8,6,4,5};
 int k = 1 , freq = 0;
 for(int i=0;i<10;i++)
 {
  if(arr[i]==k) freq++;
 }
 printf("%d",freq);
 return 0;
}