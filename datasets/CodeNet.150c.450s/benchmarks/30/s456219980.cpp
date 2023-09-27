#include <stdio.h>

int selectionSort(int arr[], int n) {
    int i, j, tmp, count = 0, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
        if (i != min) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100], n, i, count;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count = selectionSort(arr, n);
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("%d\n", count);

    return 0;
}