/*
Program: Find Sum and Average of Array
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;
    float average;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display result
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}