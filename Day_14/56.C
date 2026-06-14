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

    printf("Duplicate elements are: ");

    // Check each element
    for(int i = 0; i < n; i++)
    {
        int count = 1;

        // Count occurrences of current element
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        // Check if element was already printed
        int alreadyPrinted = 0;

        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        // Print duplicate element only once
        if(count > 1 && alreadyPrinted == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}