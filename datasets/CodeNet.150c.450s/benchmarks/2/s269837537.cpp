#include <cstdio>
#define N 100000

void exchange(int A[], int index, int r) {
    int tmp = A[index];
    A[index] = A[r];
    A[r] = tmp;
}

int Partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j<r; j++) {
        if (A[j] <= x) {
            i++;
            exchange(A, i, j);
        }
    }
    exchange(A, i+1, r);
    return i + 1;
}


int
main () {
    int n;
    int A[N];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    int r = Partition(A, 0, n-1);
    for(int i=0; i<n; i++) {
        if (i == r) printf("[%d]", A[i]);
        else printf("%d", A[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }

    return 0;
}