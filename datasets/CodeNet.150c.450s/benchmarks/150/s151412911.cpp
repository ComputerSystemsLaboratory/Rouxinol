#include <stdio.h>
#include <stdlib.h>

#define VMAX    10000

int calc_max(const int *A, const int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) max = A[i];
    }
    return max;
}

void counting_sort(int *A, int *B, const int n)
{
    int *C = new int[VMAX];
    for (int i = 1; i <= VMAX; i++) {
        C[i] = 0;
    }

    for (int j = 0; j < n; j++) {
        C[A[j+1]]++;
    }

    for (int i = 1; i <= VMAX; i++) {
        C[i] = C[i] + C[i-1];
    }

    for (int j = 1; j <= n; j++) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    return;
}


int main (void) {

    int n;

    scanf("%d", &n);
    int* A = new int[n+1];
    int* B = new int[n+1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i+1]);
    }

    counting_sort(A, B, n);

    for (int i = 1; i <= n; i++) {
        printf("%d", B[i]);
        if (i == n) printf("\n");
        else printf(" ");
    }
}

