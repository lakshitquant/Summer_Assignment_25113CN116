/*
Program: Move Zeroes to End
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, index = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements forward
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining places with 0
    while(index < n)
    {
        arr[index] = 0;
        index++;
    }

    printf("Array after moving zeroes:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}