#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 5; i >= 1; i--) {

        // Print numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}