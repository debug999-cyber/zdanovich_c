#include <stdio.h>

union data
{
    int   intValue;
    float floatValue;
    char  charValue;
};

struct typedData
{
    int type;
    union data value;
};

int main(){

    union data data;

    data.intValue = 42;
    printf("%d\n", data.intValue);

    data.floatValue = 3.14;
    printf("%.2f\n", data.floatValue);

    data.charValue = 'A';
    printf("%c\n", data.charValue);

    data.intValue = 100;
    printf("%d\n",   data.intValue);
    printf("%.2f\n", data.floatValue);
    printf("%c\n",   data.charValue);

    struct typedData td;
    td.type = 2;
    td.value.floatValue = 7.77;

    if (td.type == 1)
    {
        printf("%d\n", td.value.intValue);
    }
    else if (td.type == 2)
    {
        printf("%.2f\n", td.value.floatValue);
    }
    else if (td.type == 3)
    {
        printf("%c\n", td.value.charValue);
    }

    return 0;
}