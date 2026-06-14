#include <stdio.h>

int main()
{
    int n, key, count = 0;

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

    // Input element whose frequency is to be found
    printf("Enter element: ");
    scanf("%d", &key);

    // Count frequency
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    // Display frequency
    printf("Frequency of %d = %d\n", key, count);

    return 0;
}