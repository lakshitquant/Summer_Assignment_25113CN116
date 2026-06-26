// C program for Quiz Application

#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ GAME =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used for C programming?\n");
    printf("1. Compiler\n2. Interpreter\n3. Programming Language\n4. Operating System\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\nYour score = %d out of 3\n", score);

    return 0;
}