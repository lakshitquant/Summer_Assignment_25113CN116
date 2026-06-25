#include <stdio.h>

int main() {
    // First sorted array
    int a[] = {1, 3, 5, 7};

    // Second sorted array
    int b[] = {2, 4, 6, 8};

    // Sizes of both arrays
    int n1 = 4, n2 = 4;

    // Array to store merged elements
    int c[20];

    // i for first array, j for second array, k for merged array
    int i = 0, j = 0, k = 0;

    // Compare elements and store smaller element
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1) {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2) {
        c[k] = b[j];
        j++;
        k++;
    }

    // Display merged array
    printf("Merged Array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}