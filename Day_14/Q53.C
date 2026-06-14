#include <stdio.h>

int main()
{
    int n, key, found = 0;

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

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;  // Stop searching once found
        }
    }

    // If element is not found
    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}