#include <stdio.h>

// Function to calculate sum of two numbers
int sum(int a, int b)
{
    return a + b;   // Return the addition of a and b
}

int main()
{
    int num1, num2, result;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling function
    result = sum(num1, num2);

    // Displaying result
    printf("Sum = %d\n", result);

    return 0;
}