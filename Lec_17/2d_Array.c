#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
    // calculating max value in 2D array
    int max = INT_MIN;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         if(arr[i][j]>max)
         max = arr[i][j];
        }
    }
    printf("%d",max);

    // calculating min value in 2D array
    int min = INT_MAX;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         if(arr[i][j]<min)
         min = arr[i][j];
        }
    }
    printf("\n%d",min);

    // calculating sum 
    int sum = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        sum = sum + arr[i][j];
    }
    printf("\n%d\n",sum);

    // calculating sum row wise
    for(int i=0;i<3;i++)
    {
        int rowsum= 0;
        for(int j=0;j<3;j++)
        rowsum = rowsum + arr[i][j];
        printf("%d ",rowsum);
    }

    printf("\n");

    // calculating sum column wise 
   for(int i=0;i<3;i++)
    {
        int colsum = 0;
        for(int j=0;j<3;j++)
        colsum = colsum + arr[j][i];
        printf("%d ",colsum);
    } 
    // printing diagonal elements
    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
        {
            if(i==j)
            printf("%d ",arr[i][j]);
        }
    }
    
    return 0;
}