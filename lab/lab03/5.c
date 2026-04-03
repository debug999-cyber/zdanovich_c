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

    int el;
    printf("Enter index to delete: ");
    scanf("%d", &el);

    for (int i = el; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n = n - 1;
    arr = realloc(arr, n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    free(arr);
    return 0;
}