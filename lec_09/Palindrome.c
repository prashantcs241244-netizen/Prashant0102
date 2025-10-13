#include<stdio.h>
int main()
{
  int a[] = {1,2,3,1,0,0,1,3,2,1};  
  int i=0,j=9;
  int flag = 1;
  while(i<j)
  {
    if(a[i]!=a[j])
    {
     flag = 0;
     break;
    }
    i++;
    j--;
 }
 if(flag==0)
 printf("Not Palindrome");
 else
 printf("Palindrome");

}