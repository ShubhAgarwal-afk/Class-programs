#include <stdio.h>

int main() {
    int arr[10], sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = (float)sum / 10;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}