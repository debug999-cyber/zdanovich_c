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

    int index;
    int value;
    printf("Enter position: ");
    scanf("%d", &index);
    printf("Enter value: ");
    scanf("%d", &value);

    arr = realloc(arr, (n + 1) * sizeof(int));

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    n = n + 1;

    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    free(arr);
    return 0;
}