#include <iostream>
using namespace std;

#define MAX 2000001
#define VMAX 10000

int main() {

    int C[VMAX + 1];
    for (int i = 0; i <= VMAX; ++i) C[i] = 0;

    int n;
    cin >> n;
    unsigned short *A, *B;
    A = new unsigned short[n + 1];
    B = new unsigned short[n + 1];
    for (int i = 0; i < n; ++i) {
        cin >> A[i + 1];
        C[A[i + 1]]++;
    }

    for (int i = 1; i <= VMAX; ++i) {
        C[i] = C[i] + C[i - 1];
    }

    for (int i = 1; i <= n; ++i) {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }

    for (int i = 1; i <= n; ++i) {
        if (1 < i) cout << " ";
        cout << B[i];
    }
    cout << endl;

    delete[] A;
    delete[] B;
    return 0;
}