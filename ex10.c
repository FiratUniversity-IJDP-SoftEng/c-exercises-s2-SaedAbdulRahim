#include <stdio.h>

int main() {
    printf("Multiplication Table (10x10):\n\n");

    printf("     ");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    printf("    ");
    for (int i = 1; i <= 10; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = 1; i <= 10; i++) {
        printf("%4d |", i);
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}

