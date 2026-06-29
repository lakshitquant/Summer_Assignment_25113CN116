#include <stdio.h>

struct Product {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    struct Product p[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Product ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Product Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    printf("\n--- Inventory Details ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nProduct ID: %d", p[i].id);
        printf("\nName: %s", p[i].name);
        printf("\nQuantity: %d", p[i].quantity);
        printf("\nPrice: %.2f\n", p[i].price);
    }

    return 0;
}