#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBitwise operations on %d and %d:\n", a, b);

    printf("AND (a & b)   = %d\n", a & b);
    printf("OR  (a | b)   = %d\n", a | b);
    printf("XOR (a ^ b)   = %d\n", a ^ b);
    printf("NOT (~a)      = %d\n", ~a);
    printf("NOT (~b)      = %d\n", ~b);
    printf("Left Shift  (a << 2) = %d\n", a << 2);
    printf("Right Shift (a >> 2) = %d\n", a >> 2);

    return 0;
}