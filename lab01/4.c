#include <stdio.h>

int main() {
    int a;
    int b;
    int ost;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    ost = a % b;

    printf("Result: %d", ost);

}
