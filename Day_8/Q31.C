#include <stdio.h>

int main() {
    int i, j, n = 5;   // Number of rows

    // Outer loop for rows
    for(i = 1; i <= n; i++) {

        // Inner loop prints characters
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}