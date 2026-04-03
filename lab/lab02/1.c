#include <stdio.h>

struct student
{
    char name[100];
    int age;
    float sred;
};

int main(){

    struct student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter sred: ");
    scanf("%f", &student.sred);

    printf("name: %s\nage: %d\nsred: %.2f\n", student.name, student.age, student.sred);

    return 0;
}