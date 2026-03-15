#include <stdio.h>

int main() {
    int x;
    printf("Enter:");
    scanf("%d", &x);

    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
