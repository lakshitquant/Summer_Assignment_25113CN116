#include <stdio.h>

int main() {
    long long n, largest = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for(long long i = 2; i <= n; i++) {
    while(n % i == 0) {
      largest = i;
     n /= i;
        }
    }

    printf("Largest Prime Factor = %lld", largest);

    return 0;
}