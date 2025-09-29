#include<stdio.h>

int main()
{
 int n;
 float balance = 1000,amount;
 printf("1 check balance \n2 deposit \n3 withdraw \n4 exit \n");
 scanf("%d",&n);
 switch(n)
 {
  case 1 :  printf("balance is %f",balance);
            break; 
            
  case 2 :  printf("Enter amount : ");
            scanf("%f",&amount);
            balance+=amount;
            printf("%f added \n",amount);
            printf("New balance is %f \n",balance);
            break;

  case 3 :  printf("Enter amount : ");
            scanf("%f",&amount);
            if(balance>=amount)
            { 
            balance -= amount;
            printf("%f deducted \n",amount);
            printf("New balance is %f \n",balance);break;
            }
            else{ 
            printf("Insufficient balance");
            }
            break;

    case 4 : goto end;       
                     
 }
 end :
 return 0;

}