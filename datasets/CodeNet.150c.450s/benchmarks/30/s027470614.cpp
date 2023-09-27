#include<stdio.h>

int selectionSort(int A[], int N) {
    int minj, i, j, v;
    int count = 0;

    for (i=0; i<N; i++) {
        minj = i;
        for (j=i+1; j<N; j++) {
            if (A[minj]>A[j]) minj = j;
        }
        if (minj != i) {
            v = A[i];
            A[i] = A[minj];
            A[minj] = v;
            count++;
        }        
    }

    return count;
}

int main() {
    int i, A[100], N;

    scanf("%d", &N);
    for (i=0; i<N; i++) scanf("%d", &A[i]);

    int count = selectionSort(A, N);

    for (i=0; i<N; i++) {
        if (i>0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    printf("%d", count);
    printf("\n");
}
