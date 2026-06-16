/*
Program: Find Missing Number
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int totalSum = 0, arraySum = 0;

    printf("Enter number of elements (excluding missing number): ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    totalSum = (n + 1) * (n + 2) / 2;

    printf("Missing Number = %d", totalSum - arraySum);

    return 0;
}