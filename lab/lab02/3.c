#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct person
{
    char name[100];
    struct date birth;
};

int main(){

    struct person people[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", people[i].name);

        printf("Enter birth day: ");
        scanf("%d", &people[i].birth.day);

        printf("Enter birth month: ");
        scanf("%d", &people[i].birth.month);

        printf("Enter birth year: ");
        scanf("%d", &people[i].birth.year);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d. %s, birth: %d.%d.%d\n", i + 1, people[i].name, people[i].birth.day, people[i].birth.month, people[i].birth.year);
    }

    for (i = 0; i < 5; i++)
    {
        if (people[i].birth.year > 2000)
        {
            printf("%s, birth: %d.%d.%d\n", people[i].name, people[i].birth.day, people[i].birth.month, people[i].birth.year);
        }
    }

    return 0;
}