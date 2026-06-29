#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n1. Find Length");
        printf("\n2. Reverse String");
        printf("\n3. Convert to Uppercase");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu", strlen(str));
                break;

            case 2:
            {
                int i;
                for(i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);
                break;
            }

            case 3:
            {
                int i;
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                printf("Uppercase String: %s", str);
                break;
            }

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(choice != 4);

    return 0;
}