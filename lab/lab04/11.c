#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    char buf[100];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s", buf);
    }
    if (feof(fp)) {
        printf("End of file reached\n");
    }
    if (ferror(fp)) {
        printf("Error while reading file\n");
    }
    fclose(fp);
    return 0;
}