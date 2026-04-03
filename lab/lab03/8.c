#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int *arr = NULL;
    int choice;

    while (1) {
        printf("\n1. Add\n2. Remove\n3. Print\n4. Change size\n0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int value;
            printf("Enter value: ");
            scanf("%d", &value);
            arr = realloc(arr, (n + 1) * sizeof(int));
            arr[n] = value;
            n = n + 1;

        } else if (choice == 2) {
            int index;
            printf("Enter index: ");
            scanf("%d", &index);
            for (int i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n = n - 1;
            arr = realloc(arr, n * sizeof(int));

        } else if (choice == 3) {
            for (int i = 0; i < n; i++) {
                printf("%d\t", arr[i]);
            }
            printf("\n");

        } else if (choice == 4) {
            int newSize;
            printf("Enter new size: ");
            scanf("%d", &newSize);
            arr = realloc(arr, newSize * sizeof(int));
            if (newSize > n) {
                for (int i = n; i < newSize; i++) {
                    printf("Enter %d value: ", i + 1);
                    scanf("%d", &arr[i]);
                }
            }
            n = newSize;

        } else if (choice == 0) {
            break;
        }
    }

    free(arr);
    return 0;
}