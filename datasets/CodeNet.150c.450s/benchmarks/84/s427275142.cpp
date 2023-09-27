// SEE: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL 1000000001

long long count = 0;

void trace(int a[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");
}

void Merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1+1], R[n2+1];
    for (int i = 0; i < n1; ++i) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        R[i] = A[mid + i];
    }
    L[n1] = SENTINEL;
    R[n2] = SENTINEL;
    int m = 0;
    int n = 0;
    for (int i = left; i < right; ++i) {
        if (L[m] <= R[n]) {
            A[i] = L[m];
            ++m;
        }
        else {
            A[i] = R[n];
            ++n;
            count += n1 - m;
        }
    }
}

void MergeSort(int A[], int left, int right) {
    if (left >= right - 1) return;
    int mid = (left + right) / 2;
    MergeSort(A, left, mid);
    MergeSort(A, mid, right);
    Merge(A, left, mid, right);
}

int main() {
    int N;
    int A[200000];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    MergeSort(A, 0, N);
    printf("%lld\n", count);
    return 0;
}