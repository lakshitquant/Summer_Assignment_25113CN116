// C program for Number Guessing Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    // Generate random number
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess a number between 1 and 100:\n");

    do {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too high! Try again.\n");
        else if (guess < number)
            printf("Too low! Try again.\n");
        else
            printf("Congratulations! You guessed correctly.\n");

    } while (guess != number);

    return 0;
}