#include <stdio.h>

int main() {
    printf("%-10s %-10s %-10s\n", "i*5", "100-((i-1)*10+1)", "i");

    for (int i = 1; i <= 10; i++) {
        printf("%-10d %-10d %-10d\n", i * 5, 100 - ((i - 1) * 10 + 1), i);
    }

    return 0;
}

