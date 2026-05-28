#include<stdio.h>
intmain()
{
int n, reverse=0,digit;

printf("Enter the number");
scanf("%d",n);
while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}



