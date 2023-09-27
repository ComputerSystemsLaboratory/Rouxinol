#include <cstdio>
using namespace std;

#define INF 1234567890;
int L[300000], R[300000];
int cnt;

void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = INF;
    R[n2] = INF;

    int i = 0;
    int j = 0;

    for (int k = left; k < right; k++) {
        cnt++;
        if (L[i] <= R[j]) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void mergeSort(int A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(void) {
    int n, A[600000];
    cnt = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    mergeSort(A, 0, n);

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n%d\n", cnt);

    return 0;
}