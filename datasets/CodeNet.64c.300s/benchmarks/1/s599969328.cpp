#include <iostream>

using namespace std;

const int MAX_N = 100000;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    int temp;

    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }

    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    return i + 1;
}

int main () {
    int n;
    int A[MAX_N];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int q = partition(A, 0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }

        if (i == q) {
            cout << "[";
        }
        cout << A[i];
        if (i == q) {
            cout << "]";
        }
    }

    cout << endl;
}