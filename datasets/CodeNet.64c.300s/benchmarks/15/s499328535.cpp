#include <stdio.h>

int selection_sort(int n, int A[])
{
    int i, j, minj, v;
int count = 0;

    for (i=0; i<n-1; i++){
        minj = i;

        for (j=i; j<n; j++){
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        v = A[i];
        A[i] = A[minj];
        A[minj] = v;
        if (minj != i)
            count++;
    }
    return count;
}

int main(void)
{
    int i;

    int n;
    scanf("%d", &n);

    int A[n];
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

    int count;
    count = selection_sort(n, A);

    for (i=0; i<n-1; i++)
        printf("%d ", A[i]);
    printf("%d\n", A[n-1]);

    printf("%d\n", count);

    return 0;
}

