#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int num)
{
    int i;

    // Numbers less than or equal to 1 are not prime
    if (num <= 1)
        return 0;

    // Check divisibility from 2 to num-1
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;   // Not prime
    }

    return 1;   // Prime
}

int main()
{
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function and displaying result
    if (isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not a Prime Number.\n", num);

    return 0;
}