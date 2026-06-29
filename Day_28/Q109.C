
#include <stdio.h>

struct Library {
    int id;
    char name[50];
    int issued;
};

int main() {
    struct Library book[5];
    int i;

    // Input book details
    for(i = 0; i < 5; i++) {
        printf("\nEnter Book ID: ");
        scanf("%d", &book[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", book[i].name);

        printf("Issued (1 = Yes, 0 = No): ");
        scanf("%d", &book[i].issued);
    }

    // Display records
    printf("\n--- Library Records ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nBook ID: %d", book[i].id);
        printf("\nBook Name: %s", book[i].name);

        if(book[i].issued)
            printf("\nStatus: Issued\n");
        else
            printf("\nStatus: Available\n");
    }

    return 0;
}