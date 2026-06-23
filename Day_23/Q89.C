#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find first non-repeating character
    for(i = 0; str[i] != '\0'; i++) {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        // If character appears only once
        if(count == 1 && str[i] != '\n') {
            printf("First non-repeating character: %c\n", str[i]);
            break;
        }
    }

    return 0;
}