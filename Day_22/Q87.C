#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to search
    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    // Count occurrences of character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    // Display frequency
    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}