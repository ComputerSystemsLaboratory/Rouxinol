#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int n, k, A[2000000], C[10001];

int main(void) {

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
        if (A[i] > k) {
            k = A[i];
        }
        ++C[A[i]];
    }

    for (int i = 0, f = 0; i <= k; ++i) {
        for (int j = 0; j < C[i]; ++j) {
            if (f) {
                printf(" %d", i);
            }
            else {
                f = 1;
                printf("%d", i);
            }
        }
    }
    printf("\n");

    return 0;
}