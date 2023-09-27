#include <cstdio>

int A[101];

void swap(int *A, int i, int j) {
    int t = A[i];
    A[i] = A[j];
    A[j] = t;
}

int selection_sort(int *A, int N) {
    int swap_count = 0;
    for (int i = 0; i < N; ++i)
    {
        int mini = i;
        for (int j = i; j < N; ++j)
            if (A[j] < A[mini])
                mini = j;
        if (i != mini) {
            swap(A, i, mini);
            swap_count++;
        }
    }
    return swap_count;
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
        scanf("%d", &A[i]);

    int swap_count = selection_sort(A, N);
    for (int i = 0; i < N; ++i)
    {
        if (i > 0) putchar(' ');
        printf("%d", A[i]);
    }
    printf("\n%d\n", swap_count);
    return 0;
}