#include <stdio.h>

int main() {
    int i, j, n = 5;   // n = number of rows

    // Outer loop for rows
    for(i = 1; i <= n; i++) {

        // Inner loop for printing stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        } 
        printf("\n");
    }

    return 0;
}