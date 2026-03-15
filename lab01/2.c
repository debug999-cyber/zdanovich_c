#include <stdio.h>

int main() {
    int size_a = sizeof(char);
    int size_b = sizeof(int);
    int size_c = sizeof(float);
    int size_d = sizeof(double);

    printf("char: %d int: %d float: %d double: %d", size_a, size_b, size_c, size_d);
}
