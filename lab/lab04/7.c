#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p;
    p.age = 30;
    for (int i = 0; i < 5; i++) p.name[i] = "Alice"[i];
    p.name[5] = '\0';

    FILE *fp = fopen("person.bin", "wb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fwrite(&p, sizeof(Person), 1, fp);
    fclose(fp);

    Person loaded;
    fp = fopen("person.bin", "rb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fread(&loaded, sizeof(Person), 1, fp);
    fclose(fp);

    printf("Name: %s, Age: %d\n", loaded.name, loaded.age);
    return 0;
}