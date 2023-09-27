#include <iostream>

using namespace std;

void countingSort(int A[], int B[], int n, int k) {
    int C[k];
    for (int i = 0; i <= k; ++i) {
        C[i] = 0;
    }
    for (int j = 1; j <= n; ++j) {
        ++C[A[j]];
    }
    for (int i = 1; i <= k; ++i) {
        C[i] += C[i - 1];
    }
    for (int j = n; j >= 1; --j) {
        B[C[A[j]]] = A[j];
        --C[A[j]];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int A[n + 1];
    int k = 0;
    for (int i = 1; i <= n; ++i) {
        int e;
        scanf("%d", &e);
        A[i] = e;
        if (e > k) {
            k = e;
        }
    }
    int B[n + 1];

    countingSort(A, B, n, k);

    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            printf(" %d", B[i]);
        } else {
            printf("%d", B[i]);
        }
    }
    printf("\n");

    return 0;
}