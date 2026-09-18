#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1) atof() - string to float
    char str1[] = "56.75";
    float f = atof(str1);
    printf("atof(\"%s\") = %.2f\n", str1, f);

    // 2) atol() - string to long
    char str2[] = "123456789";
    long l = atol(str2);
    printf("atol(\"%s\") = %ld\n", str2, l);

    // 3) ltoa() - long to string
    long num1 = 987654;
    char buffer1[20];
    ltoa(num1, buffer1, 10);   // 10 = base (decimal)
    printf("ltoa(%ld) = %s\n", num1, buffer1);

    // 4) itoa() - int to string
    int num2 = 456;
    char buffer2[20];
    itoa(num2, buffer2, 10);
    printf("itoa(%d) = %s\n", num2, buffer2);

    // 5) atoi() - string to int
    char str3[] = "789";
    int i = atoi(str3);
    printf("atoi(\"%s\") = %d\n", str3, i);

    return 0;
}