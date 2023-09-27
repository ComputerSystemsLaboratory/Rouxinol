#include <iostream>

using namespace std;

const int kMaxN = 2000;
const int kMaxK = 10000;

void countingSort(int *a, int *b, int *c, int n) {
    for (int i = 0; i < kMaxK; i++)
    {
        c[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        c[a[i]]++;
    }
        
    for (int i = 1; i < kMaxK; i++) {
        c[i] = c[i] + c[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        b[c[a[i]]] = a[i];
        c[a[i]]--;
    }
}

int main() {
    int n;

    cin >> n;

    int *A = new int[n];
    int *B = new int[n];
    int C[kMaxK];


    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    countingSort(A, B, C, n);

    for (int i = 1; i <= n; i++) {
        if (i != n) {
            cout << B[i] << " ";
        }
        else {
            cout << B[i];
        }
    }

    cout << endl;
}