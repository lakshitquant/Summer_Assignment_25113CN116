#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    len = strlen(str);

    // Compare characters from beginning and end
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;   // String is not palindrome
            break;
        }
    }

    // Display result
    if(flag == 1)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}