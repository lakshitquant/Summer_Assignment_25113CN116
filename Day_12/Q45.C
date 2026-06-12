#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num)
{
    int original = num;
    int reverse = 0, rem;

    while(num > 0)
    {
        rem = num % 10;          // Get last digit
        reverse = reverse * 10 + rem;
        num = num / 10;          // Remove last digit
    }

    if(original == reverse)
        return 1;   // Palindrome
    else
        return 0;   // Not palindrome
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a Palindrome Number.", num);
    else
        printf("%d is Not a Palindrome Number.", num);

    return 0;
}