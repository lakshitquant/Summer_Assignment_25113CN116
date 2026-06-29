#include <stdio.h>

int main() {
    int seats = 50;
    int book;

    while(1) {
        printf("\nAvailable Seats: %d", seats);

        printf("\nEnter number of tickets to book (0 to exit): ");
        scanf("%d", &book);

        if(book == 0)
            break;

        if(book <= seats) {
            seats -= book;
            printf("Booking Successful!\n");
        }
        else {
            printf("Not enough seats available!\n");
        }
    }

    printf("Remaining Seats: %d\n", seats);

    return 0;
}