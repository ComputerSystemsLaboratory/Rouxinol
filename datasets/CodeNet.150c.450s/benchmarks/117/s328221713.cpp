#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

constexpr int MAX_N = 500'000;
constexpr int MAX_VAL = 1e9+1;

int merge(int* A, const int& left, const int& mid, const int& right) {
    const int n1 = mid - left;
    const int n2 = right - mid;

    auto L = new int[n1+1];
    auto R = new int[n2+1];
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1] = MAX_VAL;
    R[n2] = MAX_VAL;

    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
    delete[] L;
    delete[] R;
    return right - left;
}

int mergeSort(int* A, const int& left, const int& right) {
    int count = 0;
    if (left + 1 < right) {
        const int mid = (left + right) / 2;
        count += mergeSort(A, left, mid);
        count += mergeSort(A, mid, right);
        return count + merge(A, left, mid, right);
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);

    int A[MAX_N];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int count = mergeSort(A, 0, n);
    for (int i = 0; i < n; i++) {
        if (i > 0) { cout << " "; }
        cout << A[i];
    }
    cout << endl;
    cout << count << endl;

    return 0;
}