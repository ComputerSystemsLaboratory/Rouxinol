#include <cstdio>
#define LIMIT 2000000

void CountingSort(int A[], int B[], int n) {
    int C[LIMIT];
    for (int i = 0; i < LIMIT; i++) {
        C[i] = 0;
    }
    for (int j = 0; j < n; j++) {
        C[A[j]]++;
    }
    for (int i = 1; i < LIMIT; i++) {
        C[i] = C[i] + C[i-1];
    }
    for (int j = n - 1; j >= 0; j--) {
        B[C[A[j]]-1] = A[j];
        C[A[j]]--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    CountingSort(A, B, n);
    
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");

    return 0;
}
