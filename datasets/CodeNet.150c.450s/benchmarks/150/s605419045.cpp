#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

template<typename T>
void counting_sort(const vector<T> &A, vector<T> &B, int32_t k) {
    vector<T> C(k+1);
    fill(C.begin(), C.end(), 0);

    for (T i : A) {
        C[i]++;
    }

    for (int32_t i = 1; i <= k; i++) {
        C[i] = C[i] + C[i-1];
    }

    for (int32_t i = A.size()-1; i >= 0; i--) {
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }

    return;
}

int main() {
    int32_t n, k = 0;

    cin >> n;
    vector<int32_t> A(n), B(n);
    for (int32_t i = 0; i < n; i++) {
        cin >> A[i];
        k = max(k, A[i]);
    }

    counting_sort(A, B, k);

    for (int32_t i = 0; i < n; i++) {
        cout << B[i];
        if (i == n - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}