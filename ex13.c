#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a number (n < 50): ");
    scanf("%d", &n);

    if (n < 0 || n >= 50) {
        printf("Please enter a number between 0 and 49.\n");
        return 1;
    }

    unsigned long long result = factorial(n);

    printf("Factorial of %d = %llu\n", n, result);

    return 0;
}

