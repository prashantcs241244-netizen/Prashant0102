#include<stdio.h>
int main()
{
 int n,m;
 printf("Enter size of array a then of b : ");
 scanf("%d %d",&n,&m);
 int a[n],b[m],c[m+n];

 printf("Enter %d elements : \n",n);
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);

 printf("Enter %d elements : \n",m);
 for(int i=0;i<m;i++)
 scanf("%d",&b[i]);

 for(int i=0;i<n;i++)
 c[i] = a[i];

 for(int i=0;i<m;i++)
 {
  c[i+n] = b[i];
 }

 for(int i=0;i<m+n;i++)
 printf("%d ",c[i]);
}