#include <stdio.h>

void printFibonacciSeries(int n) {
    unsigned long long a = 0, b = 1, next;

    printf("Fibonacci Series up to position %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%llu", a);
        } else if (i == 2) {
            printf(", %llu", b);
        } else {
            next = a + b;
            printf(", %llu", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
}

unsigned long long findNthFibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    unsigned long long a = 0, b = 1, next;
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;

    printf("Enter the position (n) to find the nth Fibonacci number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printFibonacciSeries(n);

    unsigned long long nthFibonacci = findNthFibonacci(n);
    printf("The %dth Fibonacci number is: %llu\n", n, nthFibonacci);

    return 0;
}

