#include<stdio.h>

int main()
{
  int a,b;
  float result;
  char ch;
  printf("Enter 2 numbers and a operation : + , - , / , * : \n");
  scanf("%d %d  %c",&a,&b,&ch);
  switch(ch)
  {
    case '+' : result = a+b;printf("%f",result);
               break;
          
    case '-' : result = a-b;printf("%f",result);
               break;  
               
    case '*' : result = a*b;printf("%f",result);
               break;   
               
    case '/' : if(b==0) printf("Can't divide by 0");
               else
               {
               result = (float)a/b;printf("%f",result);
               }
               break;
               
    default : printf("Enter valid operation");           
                     
  }

  return 0;

}