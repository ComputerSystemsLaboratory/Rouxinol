#include <bits/stdc++.h>
using namespace std;

const int M = 1000000007;
int cnt = 0;

void merge(vector<int>& A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1 + 1), R(n2 + 1);
    for (int i = 0; i < n1; ++i) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        R[i] = A[mid + i];
    }
    L[n1] = M;
    R[n2] = M;
    int l = 0, r = 0;
    for (int k = left; k < right; ++k) {
        ++cnt;
        if (L[l] <= R[r]) {
            A[k] = L[l];
            ++l;
        }
        else {
            A[k] = R[r];
            ++r;
        }
    }
}

void mergeSort(vector<int>& A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    mergeSort(v, 0, n);
    for (int i = 0; i < n; ++i) {
        cout << v[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << "\n";
    cout << cnt << "\n";

    return 0;
}