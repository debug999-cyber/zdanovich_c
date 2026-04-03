#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    printf("File opened successfully\n");
    fclose(fp);
    return 0;
}