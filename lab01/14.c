#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    long long p1 = (long long)&a;
    long long p2 = (long long)&b;
    long long p3 = (long long)&c;

    printf("%lld\n", p1 - p2);
    printf("%lld\n", p2 - p3);

    // ОБЪЯСНЕНИЕ:
    // Переменные лежат в памяти компьютера прямо друг за другом.
    // Разница получается 4 (или -4), потому что размер типа int составляет ровно 4 байта.
}
