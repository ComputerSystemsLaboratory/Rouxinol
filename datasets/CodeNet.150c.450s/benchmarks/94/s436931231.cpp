#include<stdio.h>

void trace(int A[], int count, int N) {
    for (int i=0; i<N; i++) {
        if (i>0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    printf("%d", count);
    printf("\n");
}

void bubbleSort(int A[], int N) {
    int i, j, v;
    int count = 0;
    bool flag = true;

    while (flag) {
        flag = false;
        for (j=0; j<N; j++){
            for (i=N-2; i>=j; i--) {
                if (A[i]>A[i+1]) {
                    v = A[i];
                    A[i] = A[i+1];
                    A[i+1] = v;
                    flag = true;
                    count++;
                }
            }
        }
    }
    trace(A, count, N);
}

int main() {
    int A[100], N;

    scanf("%d", &N);
    for (int i=0; i<N; i++) scanf("%d", &A[i]);
    
    bubbleSort(A, N);

    return 0;
}
