#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

constexpr int MAX_N = 100'000;
constexpr int MAX_VAL = 100'000;

int partition(int* A, const int& p, const int& r) {
    int x = A[r];
    int i = p;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            swap(A[i], A[j]);
            i++;
        }
    }
    swap(A[i], A[r]);
    return i;
}

int main() {
    ios::sync_with_stdio(false);

    int A[MAX_N];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int pivot = partition(A, 0, n-1);
    for (int i = 0; i < n; i++) {
        if (i > 0) { cout << ' '; }
        if (i == pivot) { cout << '['; }
        cout << A[i];
        if (i == pivot) { cout << ']'; }
    }
    cout << endl;

    return 0;
}