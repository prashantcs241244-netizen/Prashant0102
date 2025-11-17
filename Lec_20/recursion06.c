// Program to check if an array is a palindrome using recursion
#include <stdio.h>
int isPalindrome(int arr[], int start, int end) {
    
    if (start >= end)
        return 1;
    if (arr[start] != arr[end])
        return 0;
    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int n;

    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    if (isPalindrome(arr, 0, n - 1))
        printf("Array is a Palindrome.\n");
    else
        printf("Array is NOT a Palindrome.\n");

    return 0;
}