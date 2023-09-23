#include <cstdio>
#include <algorithm>
using namespace std;

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

int main(void) {
    int n, i, idx, A[150000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &A[i]);

    idx = partition(A, 0, n - 1);

    for (i = 0; i < n; i++) {
        if (i) printf(" ");
        if (i == idx) printf("[");
        printf("%d", A[i]);
        if (i == idx) printf("]");
    }
    printf("\n");

    return 0;
}