#include <stdio.h>

int main() {
    int total_seconds;

    printf("Enter: ");
    scanf("%d", &total_seconds);

    int h = (total_seconds / 3600) % 24;
    
    int m = (total_seconds / 60) % 60;
    
    int s = total_seconds % 60;

    printf("Time: %02d:%02d:%02d\n", h, m, s);

}
