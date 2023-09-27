#include <cstdio>
#define MAX 10000
using namespace std;

int main(void) {
    int n, i, j, C[MAX + 1];
    scanf("%d", &n);
    unsigned short A[n+1], B[n+1];

    for (i = 0; i <= MAX; i++) C[i] = 0;

    for (i = 0; i < n; i++) {
        scanf("%hu", &A[i + 1]);
        C[A[i + 1]]++;
    }

    for (i = 1; i <= MAX; i++) C[i] = C[i] + C[i - 1];

    for (j = 1; j <= n; j++) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    for (i = 1; i <= n; i++) {
        if (i > 1) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");

    return 0;
}