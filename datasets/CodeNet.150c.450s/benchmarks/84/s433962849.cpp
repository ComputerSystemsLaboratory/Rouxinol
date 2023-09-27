#include <stdio.h>

#define INF (1 << 30)
#define NMAX 200000

long merge(int A[], int left, int mid, int right) {
    int L[NMAX], R[NMAX], i, j, k;
    long cnt;
    for (i = 0; i < mid - left; i++) {
        L[i] = A[left + i];
    }
    L[i] = INF;
    for (i = 0; i < right - mid; i++) {
        R[i] = A[mid + i];
    }
    R[i] = INF;
    i = 0, j = 0, cnt = 0;
    for (k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += mid - left - i; 
        }
    }
    return cnt;
}

long mergeSort(int A[], int left, int right) {
    if (right - left <= 1) {
        return 0;
    }
    int mid = (left + right) / 2;
    long cnt = 0;
    cnt += mergeSort(A, left, mid);
    cnt += mergeSort(A, mid, right);
    cnt += merge(A, left, mid, right);
    return cnt;
}

int main() {
    int A[NMAX], N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    long cnt = mergeSort(A, 0, N);
    printf("%ld\n", cnt);
    return 0;
}

