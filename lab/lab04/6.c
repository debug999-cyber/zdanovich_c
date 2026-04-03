#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    FILE *fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);

    int buf[5];
    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    fread(buf, sizeof(int), n, fp);
    fclose(fp);

    for (int i = 0; i < n; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");
    return 0;
}