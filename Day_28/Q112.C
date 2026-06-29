
#include <stdio.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\n--- Contact List ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nName: %s", c[i].name);
        printf("\nPhone: %s\n", c[i].phone);
    }

    return 0;
}