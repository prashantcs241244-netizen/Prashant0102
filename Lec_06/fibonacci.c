#include<stdio.h>
void fibonacci(int a,int b,int n) 
{
 printf("%d %d ",a,b);
 for(int i=1;i<=n-2;i++)
 {
 int c = a + b;
 printf("%d ",c);
 a = b;b = c;
 }
 
}
int main()
{
    int a,b,n;
    printf("Enter 1st number of fibonacci series : ");
    scanf("%d",&a);
    printf("Enter 2nd number of fibonacci series : ");
    scanf("%d",&b);
    printf("Enter number of terms : ");
    scanf("%d",&n);
    fibonacci(a,b,n);

}    