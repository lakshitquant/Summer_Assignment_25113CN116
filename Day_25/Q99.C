#include <stdio.h>
#include <string.h>

int main() {
    // Array of names
    char names[5][20] = {
        "Ravi",
        "Ankit",
        "Priya",
        "Deepa",
        "Karan"
    };

    // Temporary string for swapping
    char temp[20];

    // Bubble sort for alphabetical order
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {

            // Compare two names
            if (strcmp(names[i], names[j]) > 0) {

                // Swap names
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display sorted names
    printf("Names in alphabetical order:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}