#include <stdio.h>

int main()
{
    int n;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest and second largest
    int largest = arr[0];
    int secondLargest = arr[0];

    // Find largest and second largest
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Display result
    printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}