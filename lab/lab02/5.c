#include <stdio.h>

enum day
{
    MONDAY    = 1,
    TUESDAY   = 2,
    WEDNESDAY = 3,
    THURSDAY  = 4,
    FRIDAY    = 5,
    SATURDAY  = 6,
    SUNDAY    = 7
};

struct schedule
{
    char subject[100];
    enum day day;
};

int main(){

    enum day today = WEDNESDAY;

    switch (today)
    {
        case MONDAY:    printf("Monday\n");    break;
        case TUESDAY:   printf("Tuesday\n");   break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY:  printf("Thursday\n");  break;
        case FRIDAY:    printf("Friday\n");    break;
        case SATURDAY:  printf("Saturday\n");  break;
        case SUNDAY:    printf("Sunday\n");    break;
    }

    struct schedule lesson;
    lesson.day = FRIDAY;
    lesson.subject[0] = '\0';

    printf("%d\n", lesson.day);

    return 0;
}