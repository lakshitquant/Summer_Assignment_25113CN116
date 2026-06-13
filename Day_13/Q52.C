/*
Program: Count Even and Odd Elements in Array
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int evenCount = 0, oddCount = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // Display result
    printf("Number of Even elements = %d\n", evenCount);
    printf("Number of Odd elements = %d\n", oddCount);

    return 0;
}