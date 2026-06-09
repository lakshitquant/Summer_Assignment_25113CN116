#include <stdio.h>

int main() {
    int i, j, n = 5;   // Number of rows

    // Outer loop for rows
    for(i = 1; i <= n; i++) {

        // Inner loop prints the row number i times
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}