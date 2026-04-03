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

    int m;
    printf("Enter new size: ");
    scanf("%d", &m);

    arr = realloc(arr, m * sizeof(int));

    for (int i = n; i < m; i++) {
        printf("Enter %d value: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    int k;
    printf("Enter smaller size: ");
    scanf("%d", &k);

    arr = realloc(arr, k * sizeof(int));

    for (int i = 0; i < k; i++) {
        printf("%d\t", arr[i]);
    }

    free(arr);
    return 0;
}