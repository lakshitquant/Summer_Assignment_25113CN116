/*
Program: Find Largest and Smallest Element in Array
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, smallest;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element as largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Find largest and smallest
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Display result
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}