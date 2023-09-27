#include <iostream>
#include <vector>
#include <utility>

using namespace std;

template<typename T>
int32_t partition(vector<T> &A, int32_t p, int32_t r) {
    T x = A[r];
    int32_t i = p - 1;

    for (int32_t j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i+1], A[r]);

    return i+1;
}

int main() {
    int32_t n;

    cin >> n;
    vector<int32_t> A(n);
    for (int32_t i = 0; i < n; i++) {
        cin >> A[i];
    }

    int32_t q = partition(A, 0, n-1);

    for (int32_t i = 0; i < n; i++) {
        if (i == q) {
            cout << "[" << A[i] << "]";
        } else {
            cout << A[i];
        }

        if (i == n - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}