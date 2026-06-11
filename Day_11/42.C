#include <stdio.h>

// Function to find maximum number
int maximum(int a, int b)
{
    if (a > b)
        return a;   // Return a if it is greater
    else
        return b;   // Otherwise return b
}

int main()
{
    int num1, num2, max;
    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling function
    max = maximum(num1, num2);

    // Displaying result
    printf("Maximum Number = %d\n", max);

    return 0;
}