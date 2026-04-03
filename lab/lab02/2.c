#include <stdio.h>

struct student
{
    char name[100];
    int age;
    float sred;
};

int main(){

    struct student students[5];
    int i;
    int best;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter sred: ");
        scanf("%f", &students[i].sred);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d. name: %s, age: %d, sred: %.2f\n", i + 1, students[i].name, students[i].age, students[i].sred);
    }

    best = 0;

    for (i = 1; i < 5; i++)
    {
        if (students[i].sred > students[best].sred)
        {
            best = i;
        }
    }

    printf("name: %s\n", students[best].name);
    printf("age: %d\n", students[best].age);
    printf("sred: %.2f\n", students[best].sred);

    return 0;
}
