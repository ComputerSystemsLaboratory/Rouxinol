#include <stdio.h>
#include <algorithm>

void trace(int a[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");
}

void BubbleSort(int A[], int N) {
    int count  = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = N - 1; j > i; --j) {
            if ( A[j] < A[j-1] ){
                std::swap(A[j], A[j-1]);
                ++count;
            }
        }
    }

    trace(A, N);
    printf("%d\n", count);
}

int main() {
    int N;
    int A[100];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    BubbleSort(A, N);
    return 0;
}