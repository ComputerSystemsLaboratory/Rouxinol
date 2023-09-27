#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long A[100][100],B[100][100], C[100][100];
    unsigned long long n, m, l, i, j, k;

    scanf("%d %d %d", &n, &m, &l);
    for(i=0; i<n; ++i) {
        for(j=0; j<m; ++j) {
            scanf("%llu", &A[i][j]);
        }
    }

    for(i=0; i<m; ++i) {
        for(j=0; j<l; ++j) {
            scanf("%llu", &B[i][j]);
        }
    }


    for(i=0; i<n; ++i) {
        for(j=0; j<l; ++j) {
            C[i][j] = 0;
            for(k=0; k<m; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(i=0; i<n; ++i) {
        for(j=0; j<l; ++j) {
            printf("%s%llu", j?" ":"", C[i][j]);
        }
        printf("\n");
    }

}