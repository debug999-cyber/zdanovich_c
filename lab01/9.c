#include <stdio.h>

int main() {
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int res1 = x * x + 2 * x + 1;
    printf("Result x^2 + 2x + 1: %d\n", res1);

    int res2 = (x + 1) * (x + 1) - (x - 1) * (x - 1);
    printf("Result (x + 1)^2 - (x - 1)^2: %d\n", res2);

}
