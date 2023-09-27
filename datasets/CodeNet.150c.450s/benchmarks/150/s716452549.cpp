#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void printArray(int* A, int n) {
    for (int i = 0; i < n; ++i) {
        if (i != 0) { cout << " "; }
        cout << A[i];
    }
    cout << endl;
}

void countingSort(int* A, int* B, int n, int k) {
    int* C = new int[k+1];
    for (int i = 0; i <= k; ++i) {
        C[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        ++C[A[i]];
    }
    //printArray(C, k+1);
    for (int i = 1; i <= k; ++i) {
        C[i] += C[i-1];
    }
    //printArray(C, k+1);
    for (int i = n-1; i >= 0; --i) {
        B[--C[A[i]]] = A[i];
    }
    delete[] C;
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int* A = new int[n];
    int* B = new int[n];

    int k = 0;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        if (k < A[i]) {
            k = A[i];
        }
    }

    countingSort(A, B, n, k);
    printArray(B, n);

    return 0;
}