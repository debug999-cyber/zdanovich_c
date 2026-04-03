#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fputs("Hello, World!\n", fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fseek(fp, 7, SEEK_SET);
    char buf[100];
    fgets(buf, sizeof(buf), fp);
    printf("%s", buf);
    fclose(fp);
    return 0;
}