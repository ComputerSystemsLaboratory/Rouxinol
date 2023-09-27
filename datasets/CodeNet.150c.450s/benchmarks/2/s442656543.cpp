#include <stdio.h>
#include <stdlib.h>


int partition(int *A, const int p, const int r)
{
    int x = A[r];
    int i = p - 1;

    for (int j = 0; j < r; j++) {
        if (A[j] <= x) {
            i = i + 1;
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    i++;
    int tmp = A[i];
    A[i] = A[r];
    A[r] = tmp;

    return i;
}

int main (void) {

    int n;

    scanf("%d", &n);
    int* A = new int[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int pos = partition(A, 0, n-1);

    for (int i = 0; i < n; i++) {
        if (i == pos) {
            printf("[%d]", A[i]);
        }
        else {
            printf("%d", A[i]);
        }
        if (i == n-1) printf("\n");
        else printf(" ");
    }
}

