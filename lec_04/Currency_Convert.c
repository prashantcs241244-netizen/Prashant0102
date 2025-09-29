#include<stdio.h>

int main()
{
 int n;
 float cr;
 printf("Enter amount : ");
 scanf("%f",&cr);
 
 printf("Enter Currency you want to convert to rupees : \n");
 printf("1 for dollar to rupee\n");
 printf("2 for Yuan to rupee\n");
 printf("3 for rupee to dollar\n");
 printf("4 for rupee to yuan\n");
  
 scanf("%d",&n);

 switch(n)
 {
    case 1 : printf("%f",87.85*cr);break;
    case 2 : printf("%f",12*cr);break;
    case 3 : printf("%f",(float)cr/87.85);break;
    case 4 : printf("%f",(float)cr/12);break;
    default : printf("invalid choice");
 }
 return 0;
}