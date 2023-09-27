#include <iostream>
#define MAX 100000
using namespace std;

int n;

void countingSort(int *A, int *B, int k) {
    int C[MAX];

    for(int i=0; i<=k; i++) {
        C[i] = 0;
    }

    for(int j=0; j<n; j++) {
        C[A[j]]++;
    }

    for(int i=1; i<=k; i++) {
        C[i] = C[i] + C[i-1];
    }

    for(int j=n-1; j>=0; j--) {
        B[C[A[j]]-1] =  A[j];
        C[A[j]]--;
    }
}

int main() {
    int max = 0;

    cin >> n;
    int A[n], B[n];
    for(int i=0; i<n; i++) {
        cin >> A[i];
        if(max<A[i]) {
            max = A[i];
        }
    }

    countingSort(A, B, max);

    for(int i=0; i<n; i++) {
        cout << B[i];
        if(i!=n-1) {
            cout << " ";
        }
    }
    cout << endl;
}
