#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a number (n < 50): ");
    scanf("%d", &n);

    if (n < 0 || n >= 50) {
        printf("Please enter a number between 0 and 49.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}

