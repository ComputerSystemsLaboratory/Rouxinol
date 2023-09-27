#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int n, k, A[2000000], B[2000001], C[10001];

int main(void) {

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
        if (A[i] > k) {
            k = A[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        ++C[A[i]];
    }

    for (int i = 1; i <= k; ++i) {
        C[i] += C[i - 1];
    }

    for (int i = n - 1; i >= 0; --i) {
        B[C[A[i]]] = A[i];
        --C[A[i]];
    }

    printf("%d", B[1]);
    for (int i = 2; i <= n; ++i) {
        printf(" %d", B[i]);
    }
    printf("\n");

    return 0;
}