#include<stdio.h>
#include <algorithm>

int Partition(int A[], int p, int r) {
    int x = A[r];
    int j = p;
    for (int i = p; i < r; ++i) {
        if (A[i] <= x) {
            std::swap(A[j], A[i]);
            ++j;
        }
    }
    std::swap(A[j], A[r]);
    return j;
}

int main() {
    int n, A[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    int pivot = Partition(A, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            printf(" ");
        }
        if (i == pivot) {
            printf("[%d]", A[i]);
        }
        else {
            printf("%d", A[i]);
        }
    }
    printf("\n");
    return 0;
}