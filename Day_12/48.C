#include <stdio.h>

// Function to check perfect number
int isPerfect(int num)
{
    int sum = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;   // Add factors
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPerfect(num))
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is Not a Perfect Number.", num);

    return 0;
}