#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fprintf(fp, "%d %s\n", 42, "Alice");
    fprintf(fp, "%d %s\n", 25, "Bob");
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    int age;
    char name[50];
    while (fscanf(fp, "%d %s", &age, name) == 2) {
        printf("Age: %d, Name: %s\n", age, name);
    }
    fclose(fp);
    return 0;
}