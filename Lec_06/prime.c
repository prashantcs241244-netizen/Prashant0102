#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  int count =0;
  int mid = num/2;
  for(int i=2;i<=mid;i++)
  {
    if(num%i==0)
    {
        count++;
        break;
    }
  }
  if(count==0)
  printf("prime");
  else printf("Not prime");

  return 0;
}