#include <iostream>
using namespace std;

int n;
int *A;
int *C, *B;

void bucketSort(int *A) {
    for (int i = 0; i < n; ++i) {
        C[A[i]]++;
    }
    for (int j = 1; j < 10000; ++j) {
        C[j] = C[j] + C[j-1];
    }


    for (int k = 0; k < n ; k++) {
        B[C[A[k]] - 1] = A[k];
        C[A[k]]--;
    }
}

int main() {
    cin >> n;
    A = new int[n];
    C = new int [10000];
    B = new int [n];

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    bucketSort(A);

    for (int j = 0; j < n; ++j) {
        if (j) cout << " ";
        cout << B[j] ;
    }
    cout << endl;

    return 0;
}


