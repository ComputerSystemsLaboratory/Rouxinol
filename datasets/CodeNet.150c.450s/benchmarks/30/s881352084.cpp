/* The original problem can be seen in
** http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B
*/
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

void bubbleSort(int A[], int N) {
    int swappedCount = 0;
    for (int i = 0; i < N-1; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        if (minj != i) {
            int tmp = A[i];
            A[i] = A[minj];
            A[minj] = tmp;
            swappedCount++;
        }
    }
    printArray(A, N);
    printf("%d\n", swappedCount);
}

int main() {
    int N;
    int A[100];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int input;
        scanf("%d", &input);
        A[i] = input;
    }
    bubbleSort(A, N);
}