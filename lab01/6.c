#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    int result1 = a / b;
    printf("Int: 5 / 2 = %d\n", result1);

    float result2 = (float)a / b;
    printf("Float: 5.0 / 2 = %.1f\n", result2);

}
