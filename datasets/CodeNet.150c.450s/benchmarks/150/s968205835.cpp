#include <stdio.h>

#define debug
#define NMAX 2000000
#define VMAX 10000

int main() {
    int n, C[VMAX + 10];
    int *A = new int[NMAX+10];
    int *B = new int[NMAX+10];
    debug("=== LINE %d ===\n", __LINE__);
    scanf("%d", &n);
    // x in [0,VMAX]
    for (int i = 0; i <= VMAX; i++) {
        C[i] = 0;
    }
    // A doesn't need to be 1-origin
    // here use 1-origin to match B
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
        C[A[i]]++;
    }
    debug("=== LINE %d ===\n", __LINE__);
#if 0
    //{x<=k}={x=k}+{x<=k-1}
    //{x<=0}={x=0}
    for (int i = 1; i <= VMAX; i++) {
        C[i] += C[i - 1];
    }
    // B has to be 1-origin
    for (int i = n; i >= 1; i--) {
        B[C[A[i]]--] = A[i];
    }
    for (int i = 1; i <= n; i++) {
        printf("%d", B[i]);
        if (i == n) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
#else
    bool first = true;
    for (int i = 0; i <= VMAX; i++) {
        while (C[i] > 0) {
            if (first) {
                first = false;
                printf("%d", i);
            } else {
                printf(" %d", i);
            }

            C[i]--;
        }
    }
    printf("\n");
#endif

    return 0;
}

