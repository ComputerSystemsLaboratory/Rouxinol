
#include<iostream>

using namespace std;

void print(long A[], long n) {
    for (long i = 0; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << A[i];
    }
    cout << endl;
}

void insertionSort(long A[], long n) {
    for (long i = 1; i < n; i++) {
        long v = A[i];
        long j = i - 1;
        for (; j >= 0 && A[j] > v; j--) {
            A[j + 1] = A[j];
        }
        A[j + 1] = v;
        print(A, n);
    }
}

int main() {
    long n;
    cin >> n;
    long A[n];
    for (long i = 0; i < n; i++) {
        cin >> A[i];
    }

    print(A, n);
    insertionSort(A, n);

    return 0;
}