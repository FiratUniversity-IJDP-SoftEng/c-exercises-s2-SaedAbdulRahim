#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("\nThe numbers you entered are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    average = sum / 10.0;

    printf("\n\nSum = %d", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}

