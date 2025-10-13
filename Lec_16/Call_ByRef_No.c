#include<stdio.h>
int sum(int *p1,int *p2)
{
    *p1 = 10;
    *p2 = 20;
     
    return *(p1) + *(p2);
}
int main()
{
    int x = 10;
    int y = 50;
    int ans = sum(&x,&y);
    printf("%d",ans);
    printf("\n%d",x+y);
}