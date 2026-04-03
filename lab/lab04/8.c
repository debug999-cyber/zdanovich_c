#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person people[3];
    strcpy(people[0].name, "Alice");
    people[0].age = 30;
    strcpy(people[1].name, "Bob");
    people[1].age = 25;
    strcpy(people[2].name, "Charlie");
    people[2].age = 35;

    FILE *fp = fopen("people.bin", "wb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fwrite(people, sizeof(Person), 3, fp);
    fclose(fp);

    Person loaded[3];
    fp = fopen("people.bin", "rb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fread(loaded, sizeof(Person), 3, fp);
    fclose(fp);

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d\n", loaded[i].name, loaded[i].age);
    }
    return 0;
}