#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++) {

        // Inner loop for columns
        for(j = 1; j <= 5; j++) {

            // Print star on border, space inside
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}