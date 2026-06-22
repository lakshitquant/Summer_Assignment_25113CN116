#include <stdio.h>

int main() {
    char str[200];
    int i, words = 1;

    // Input sentence including spaces
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count spaces to count words
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ') {
            words++;
        }
    }

    // Display total number of words
    printf("Total Words = %d", words);

    return 0;
}