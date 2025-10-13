#include<stdio.h>
void magic_num(int num)
{
 int sum = 0;
 while(num!=0)
 {
    int last_digit = num%10;
    sum = sum + last_digit;
    num = num/10;
 }
 int sum_2 = 0;
 if(sum>9)
 {
  
 while(sum!=0)
 {
    int last = sum%10;
    sum_2 = sum_2 + last;
    sum = sum/10;
 }

}
if(sum == 1 || sum_2==1)
printf("Magic number");
else
printf("Not magic num");
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    magic_num(num);
    return 0;
}