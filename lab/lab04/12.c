#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);
    getchar();

    FILE *fp = fopen("database.bin", "wb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        Person p;
        printf("Enter name: ");
        fgets(p.name, sizeof(p.name), stdin);
        p.name[strcspn(p.name, "\n")] = '\0';
        printf("Enter age: ");
        scanf("%d", &p.age);
        getchar();
        fwrite(&p, sizeof(Person), 1, fp);
    }
    fclose(fp);

    fp = fopen("database.bin", "rb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }

    printf("\nAll records:\n");
    Person p;
    while (fread(&p, sizeof(Person), 1, fp) == 1) {
        printf("Name: %s, Age: %d\n", p.name, p.age);
    }
    fclose(fp);
    return 0;
}