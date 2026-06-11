#include <stdio.h>

// Function to calculate factorial
long long factorial(int n)
{
    long long fact = 1;
    int i;

    // Multiply numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function and displaying result
    printf("Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}