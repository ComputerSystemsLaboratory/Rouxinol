#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(void) {

    int n;
    scanf("%d", &n);

    int *A = new int[n], *B = new int[n], max = -1;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
        if (A[i] > max) {
            max = A[i];
        }
    }

    int *C = new int[max + 1];
    memset(C, 0, sizeof(int) * (max + 1));

    for (int i = 0; i < n; ++i) {
        ++C[A[i]];
    }

    for (int i = 1; i < max + 1; ++i) {
        C[i] += C[i - 1];
    }

    for (int i = n - 1; i >= 0; --i) {
        B[C[A[i]] - 1] = A[i];
        --C[A[i]];
    }

    printf("%d", B[0]);
    for (int i = 1; i < n; ++i) {
        printf(" %d", B[i]);
    }
    printf("\n");

    delete[] C;
    delete[] B;
    delete[] A;

    return 0;
}