#include<stdio.h>

int main()
{
  int a,b;
  float result;
  char ch;
  scanf("%d %d ",&a,&b);
  scanf("%c",&ch);

  if(ch=='+')
  {
    result = a+b;
    printf("%f",result);
  }

   else if(ch=='-')
  {
    result = a-b;
    printf("%f",result);
  }

  else if(ch=='*')
  {
    result = a*b;
    printf("%f",result);
  }

  else if(ch=='/')
  {
    if(b!=0)
    {
    result = (float)a/b;
    printf("%f",result);
    }
    else
    printf("can't divide by 0");
  }
  return 0;
}