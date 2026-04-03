#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fputs("Hello, World!\n", fp);
    fputs("Second line\n", fp);
    fputs("Third line\n", fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    char buf[100];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s", buf);
    }
    fclose(fp);
    return 0;
}