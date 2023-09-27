#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)

#define MAXLEN 2000001
#define VMAX 10000

int main() {
    unsigned short *A, *B;

    int n; scanf("%d", &n);
    int C[VMAX + 1];
    A = (unsigned short*)malloc(sizeof(short) * n + 1);
    B = (unsigned short*)malloc(sizeof(short) * n + 1);
    REP(i, VMAX + 1) C[i] = 0;

    REP(i, n) {
        scanf("%d", &A[i + 1]);
        C[A[i + 1]]++;
    }

    FOR(i, 1, VMAX) C[i] += C[i - 1];

    FOR(j, 1, n + 1) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    FOR(i, 1, n + 1) {
        if (i > 1) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");
}