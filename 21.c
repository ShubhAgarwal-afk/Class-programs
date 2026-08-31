#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter operator (+, -, *, /, %%, ^): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            result = (int)a % (int)b;
            printf("Result: %.0f\n", result);
            break;
        case '^':
            result = pow(a, b);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}