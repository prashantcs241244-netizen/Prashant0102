#include<stdio.h>
int main()
{ 
    int num = 5;
    printf("num = %d\n", num);
    printf("num++ = %d (post-increment)\n", num++); 
    printf("Now num = %d\n", num);
    printf("++num = %d (pre-increment)\n", ++num); 
    printf("Now num = %d\n\n", num);
    return 0;

}