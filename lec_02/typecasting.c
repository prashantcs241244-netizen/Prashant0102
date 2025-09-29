#include<stdio.h>
int main()
{
  int x = 10, y = 3;
    printf("x + y = %d\n", x + y);   
    printf("x - y = %d\n", x - y);   
    printf("x * y = %d\n", x * y);  
    printf("x / y = %d\n", x / y);  
    printf("x %% y = %d\n\n", x % y);
    float result = (float)x / y;  // explicit type casting
    printf("Type casted division: %.2f\n\n", result);
    return 0;

}
