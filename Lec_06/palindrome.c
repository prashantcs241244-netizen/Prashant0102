#include<stdio.h>

int main()
{
  int a = 1644;
  int b =a;
  
  int rev = 0;
  while(a!=0) 
  {
    int last_digit = a%10;
    rev = rev*10 + last_digit;
    a = a/10;
  } 

 
  if(b==rev)
  printf("%d is palindrome",b);
  else
  printf("%d is not a palindrome",b);

  return 0;
}