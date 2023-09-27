#include <iostream>

using namespace std;

#define SENTINEL 2000000000
typedef long long llong;

llong merge(int A[], int left, int mid, int right) {
    llong cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; ++i) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        R[i] = A[mid + i];
    }
    L[n1] = SENTINEL;
    R[n2] = SENTINEL;
    int i = 0;
    int j = 0;
    for (int k = left; k < right; ++k) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

llong mergeSort(int A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        llong v1 = mergeSort(A, left, mid);
        llong v2 = mergeSort(A, mid, right);
        llong v3 = merge(A, left, mid, right);
        return v1 + v2 + v3;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    llong ans = mergeSort(A, 0, n);
    printf("%lld\n", ans);

    return 0;
}