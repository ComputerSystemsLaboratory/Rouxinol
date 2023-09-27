#include <cstdio>
#define SENTINEL 2000000000

int *L, *R;
int cnt;

void merge(int A[], int n, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;

    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        cnt++;
        if (L[i] < R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void mergeSort(int A[], int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    L = new int[int(n/2+1)];
    R = new int[int((n+1)/2+1)];
    mergeSort(A, n, 0, n);

    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");

    printf("%d\n", cnt);

    return 0;
}
