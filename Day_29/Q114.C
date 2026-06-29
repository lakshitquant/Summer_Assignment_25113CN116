#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n1. Display Array");
        printf("\n2. Sum of Elements");
        printf("\n3. Find Largest");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];

                printf("Sum = %d", sum);
                break;

            case 3:
            {
                int max = arr[0];

                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }

                printf("Largest = %d", max);
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