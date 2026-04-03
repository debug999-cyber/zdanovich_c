#include <stdio.h>

struct rectangle
{
    float width;
    float height;
};

float area(struct rectangle rect)
{
    return rect.width * rect.height;
}

float perimeter(struct rectangle rect)
{
    return 2 * (rect.width + rect.height);
}

float areaPointer(struct rectangle *rect)
{
    return rect->width * rect->height;
}

float perimeterPointer(struct rectangle *rect)
{
    return 2 * (rect->width + rect->height);
}

int main(){

    struct rectangle rect;

    printf("Enter width: ");
    scanf("%f", &rect.width);

    printf("Enter height: ");
    scanf("%f", &rect.height);

    printf("area: %.2f\n", area(rect));
    printf("perimeter: %.2f\n", perimeter(rect));

    printf("area: %.2f\n", areaPointer(&rect));
    printf("perimeter: %.2f\n", perimeterPointer(&rect));

    return 0;
}