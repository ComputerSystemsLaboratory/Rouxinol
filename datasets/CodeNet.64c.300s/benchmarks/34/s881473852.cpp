#include <cstdio>

void printArray(int A[], int N) {
    for (int i = 0; i < N; i++) {
        if (i != N-1) {
            printf("%d ", A[i]);
        } else {
            printf("%d", A[i]);
        }
    }
    printf("\n");
}

void insertionSort(int A[], int N) {
    for (int i = 0; i < N; i++) {
        int j = i - 1;
        int insertNum = A[i];
        while (j >= 0 && insertNum < A[j]) {
            A[j+1] = A[j]; // move to right
            j--;
        }
        A[j+1] = insertNum;
        printArray(A, N);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        int in;
        scanf("%d", &in);
        A[i] = in;
    }
    insertionSort(A, N);
}