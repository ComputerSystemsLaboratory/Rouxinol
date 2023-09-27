#include <cstdio>

const int MAX = 2000000;
const int VMAX = 10000;

int A[MAX+2], C[VMAX+2];

int
main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);

    int *B = new int[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i+1]);
        C[A[i+1]]++;
    }

    for (int i = 1; i <= VMAX; ++i) C[i] = C[i] + C[i-1];

    for (int j = n; j >= 1; --j) {
        B[C[A[j]]] = A[j];        
        C[A[j]]--;
    }

    for (int i = 1; i <= n; ++i) {
        if (i > 1) putchar(' ');
        printf("%d", B[i]);
    }
    putchar('\n');

    return 0;
}