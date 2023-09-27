//Counting Sort
#include <iostream>

using namespace std;

const int k = 10000;

void countingSort(int A[], int B[], int n, int k) {
    int C[k+1];
    for(int i=0; i<k+1; i++) C[i] = 0;
    for(int i=0; i<n; i++) C[A[i]]++;
    for(int i=1; i<k+1; i++) C[i] += C[i-1];
    for(int i=n-1; i>=0; i--) {
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
}

int main() {
    int n;
    cin >> n;
    int A[n], B[n];
    for(int i=0; i<n; i++) cin >> A[i];

    countingSort(A, B, n, k);

    for(int i=0; i<n-1; i++) cout << B[i] << " ";
    cout << B[n-1] << endl;
}
