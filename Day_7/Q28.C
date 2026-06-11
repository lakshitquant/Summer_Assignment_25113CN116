
#include <stdio.h>

int reverse = 0;

void reverseNumber(int num)
{
    if(num == 0)
        return;

    reverse = reverse * 10 + (num % 10);

    reverseNumber(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverseNumber(num);

    printf("Reversed Number = %d", reverse);

    return 0;
}