#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    // Input string with spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Copy only non-space characters
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    // Add null character at the end
    str[j] = '\0';

    // Display result
    printf("String after removing spaces: %s", str);

    return 0;
}