#include <stdio.h>

enum course
{
    FIRST  = 1,
    SECOND = 2,
    THIRD  = 3,
    FOURTH = 4
};

struct student
{
    char name[100];
    int age;
    enum course course;
    float sred;
};

void addStudent(struct student *students, int *count)
{
    printf("Enter name: ");
    scanf("%s", students[*count].name);

    printf("Enter age: ");
    scanf("%d", &students[*count].age);

    printf("Enter course: ");
    scanf("%d", &students[*count].course);

    printf("Enter sred: ");
    scanf("%f", &students[*count].sred);

    (*count)++;
}

void printStudents(struct student *students, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%d. name: %s, age: %d, course: %d, sred: %.2f\n", i + 1, students[i].name, students[i].age, students[i].course, students[i].sred);
    }
}

void findByName(struct student *students, int count)
{
    char name[100];
    int i;
    int found = 0;

    printf("Enter name: ");
    scanf("%s", name);

    for (i = 0; i < count; i++)
    {
        if (students[i].name[0] == name[0])
        {
            printf("name: %s, age: %d, course: %d, sred: %.2f\n", students[i].name, students[i].age, students[i].course, students[i].sred);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("not found\n");
    }
}

void sortByGrade(struct student *students, int count)
{
    int i;
    int j;
    struct student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            if (students[j].sred < students[j + 1].sred)
            {
                temp            = students[j];
                students[j]     = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main(){

    struct student students[100];
    int count = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        addStudent(students, &count);
    }

    printStudents(students, count);

    findByName(students, count);

    sortByGrade(students, count);
    printStudents(students, count);

    return 0;
}
