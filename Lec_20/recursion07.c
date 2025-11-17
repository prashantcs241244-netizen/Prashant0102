// sorted array using recursion
#include<stdio.h>

int sorted (int arr[], int i, int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]>arr[i+1]){
        return 0;
    }
    return sorted(arr,i+1,j);
} 
int main (){
    int arr[3]={1,2,3};
    int i = 0  ;
    int j = 2;
       int data = sorted(arr,i,j);
       printf("%d",data);
    }