#include <stdio.h>
#include <string.h>

int main() {
    // Array of words
    char words[5][20] = {
        "apple",
        "cat",
        "elephant",
        "dog",
        "banana"
    };

    // Temporary string for swapping
    char temp[20];

    // Compare lengths of words
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {

            // If first word is longer, swap them
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Display words sorted by length
    printf("Words sorted by length:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}