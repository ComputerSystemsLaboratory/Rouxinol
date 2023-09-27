#include <iostream>
using namespace std;

#define N 100001

void swap(int A[], int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(int A[], int p, int r) {
    int x = A[r - 1];
    int i = p - 1;
    for (int j = p; j < r - 1; j++) {
        if (A[j] <= x) {
            i++;
            swap(A, i, j);
        }
    }

    swap(A, r - 1, i+1);

    return i+1;
}

int main() {
    int n;
    cin >> n;

    int A[N];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int index = partition(A, 0, n);

    for (int i = 0; i < n; i++) {
        if (i != 0) cout << " ";
        if (i == index) {
            cout << "[" << A[i] << "]";
        } else {
            cout << A[i];
        }
    }
    cout << endl;
}
