#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(num = start; num <= end; num++) {
        int temp = num, digits = 0, sum = 0, rem;

        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}