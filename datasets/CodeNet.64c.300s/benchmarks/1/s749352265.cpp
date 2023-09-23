#include <iostream>
using namespace std;

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; ++j) {
        if (A[j] <= x) {
            i = i + 1;
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    int tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;
    return i + 1;
}

int main() {
    int n;
    cin >> n;

    int *A = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int q = partition(A, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        if (i) cout << " ";
        if (i == q) cout << "[";
        cout << A[i];
        if (i == q) cout << "]";
    }
    cout << endl;

    return 0;
}