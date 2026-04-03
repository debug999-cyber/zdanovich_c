#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int age;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *students = malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
    }

    for (int i = 0; i < n; i++) {
        printf("%d. name: %s, age: %d\n", i + 1, students[i].name, students[i].age);
    }

    int oldest = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[oldest].age) {
            oldest = i;
        }
    }

    printf("---OLDEST---\n");
    printf("name: %s\n", students[oldest].name);
    printf("age: %d\n", students[oldest].age);

    free(students);
    return 0;
}