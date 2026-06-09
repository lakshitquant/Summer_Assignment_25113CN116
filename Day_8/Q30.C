#include <stdio.h>

int main() {
    int i, j, n = 5;   // Number of rows

    // Outer loop controls rows
    for(i = 1; i <= n; i++) {

        // Inner loop prints numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}