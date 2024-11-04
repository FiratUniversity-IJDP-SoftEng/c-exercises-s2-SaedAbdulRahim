#include <stdio.h>

int main() {
    int number;
    int count = 0;
    int sum = 0;
    float average;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &number);
        
        if (number == -1) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        average = sum / (float)count;
        printf("\nCount = %d", count);
        printf("\nSum = %d", sum);
        printf("\nAverage = %.2f\n", average);
    } else {
        printf("\nNo numbers were entered.\n");
    }

    return 0;
}

