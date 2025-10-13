#include<stdio.h>
int main()
{
 int arr[6] = {1,2,0,0,2,1};
 int i=0,j=5,flag=1;
 while(i<j)
 {
    if(arr[i] != arr[j])
    {
        flag=0;
        break;
    }
    i++;
    j--;
 }
 if(flag==1)
 printf("Palindrome");
 else
 printf("Not palindrome");
 return 0;
}