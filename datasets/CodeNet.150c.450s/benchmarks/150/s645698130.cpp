#include <iostream>
using namespace std;

#define VMAX 10000

void counting_sort(int A[], int B[], int C[], int k, int n) {
    // init C (counter) array
    for (int i = 0; i <= k; i++) {
        C[i] = 0;
    }

    // count the number of A[j] into C
    for (int j = 1; j <= n; j++) {
        C[A[j]]++;
    }

    // set the number which is equal to or smaller than C[i] into C[i]
    for (int i = 1; i <= k; i++) {
        C[i] = C[i] + C[i-1];
    }

    for (int j = n; j > 0; j--) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
}

int main() {
    int n, C[VMAX+1];
    cin >> n;

    int *A, *B;
    A = (int*)malloc(sizeof(int) * n + 1);
    B = (int*)malloc(sizeof(int) * n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    counting_sort(A, B, C, VMAX, n);

    for (int i = 1; i <= n; i++) {
        if (i-1) cout << " ";
        cout << B[i];
    }
    cout << endl;

    return 0;
}

