#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    putc('H', fp);
    putc('e', fp);
    putc('l', fp);
    putc('l', fp);
    putc('o', fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    int c;
    while ((c = getc(fp)) != EOF) {
        printf("%c", c);
    }
    printf("\n");
    fclose(fp);
    return 0;
}