
#include<stdio.h>
#include<stdlib.h>

#define MAX 10000

void trace(unsigned short a[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");
}

void CountingSort(unsigned short A[], unsigned short B[], int n) {
    int C[MAX + 1];
    for (int i = 0; i < MAX + 1; ++i) C[i] = 0;
    for (int i = 0; i < n; ++i) C[A[i]] += 1;
    for (int i = 1; i < MAX + 1; ++i) C[i] += C[i-1];

    for (int i = n - 1; i >= 0; --i) {
        B[C[A[i]] - 1] = A[i];
        --C[A[i]];
    }
}

int main() {
    int n;
    unsigned short *A, *B;
    scanf("%d", &n);
    A = (unsigned short *) malloc(sizeof(short) * n + 1);
    B = (unsigned short *) malloc(sizeof(short) * n + 1);
    for (int i = 0; i < n; ++i) {
        scanf("%hu", &A[i]);
    }
    CountingSort(A, B, n);
    trace(B, n);

    return 0;
}