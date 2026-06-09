#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++) {

        // Print character i times
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}