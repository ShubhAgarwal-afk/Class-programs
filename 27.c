#include <stdio.h>

int main() {
    int arr[10], key, found = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d (position %d)\n", i, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}