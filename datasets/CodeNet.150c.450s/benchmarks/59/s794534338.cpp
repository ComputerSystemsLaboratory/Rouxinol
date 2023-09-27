#include<stdio.h>

void printArray(int var[], int num) {
    int i;
    for (i = 0; i < num; i++) {
        if (i > 0) printf(" ");
        printf("%d", var[i]);
    }
    printf("\n");
}

void insertionSort(int var[], int num) {
    int i, j, v;
    for (i = 1; i < num; i++) {
        v = var[i];
        j = i - 1;
        while(j >= 0 && v < var[j]) {
            var[j + 1] = var[j];
            var[j] = v;
            j--;
        }
        printArray(var, num);
    }
}

int main(void) {
    int num, i, j;
    
    scanf("%d", &num);
    int var[num];
    for (i = 0; i < num; i++) scanf("%d", &var[i]);

    printArray(var, num);
    insertionSort(var, num);
}
