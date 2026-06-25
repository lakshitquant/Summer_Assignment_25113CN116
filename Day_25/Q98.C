#include <stdio.h>
#include <string.h>

int main() {
    // Declare two strings
    char str1[100], str2[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters: ");

    // Compare every character of first string with second string
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {

            // If characters match
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);

                // Stop checking current character further
                break;
            }
        }
    }

    return 0;
}