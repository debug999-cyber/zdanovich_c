#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter %d value: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        sum = sum + arr[i];
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Sum: %d\n", sum);

    free(arr);
    return 0;
}