#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    printf("a = %d, address = %p\n", a, &a);
    printf("b = %.2f, address = %p\n", b, &b);
    printf("c = %c, address = %p\n", c, &c);

}
