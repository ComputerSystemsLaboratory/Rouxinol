#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
int counter = 0;

void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1], R[n2 + 1];
    REP(i, n1) L[i] = A[left + i];
    REP(i, n2) R[i] = A[mid + i];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i = 0, j = 0;
    FOR(k, left, right) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
            counter++;
        } else {
            A[k] = R[j++];
            counter++;
        }
    }
}

void mergeSort(int A[], int left, int right) {
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
    int S[n];
    REP(i, n) cin >> S[i];

    mergeSort(S, 0, n);

    REP(i, n - 1) cout << S[i] << " ";
    cout << S[n - 1] << endl;
    cout << counter << endl;
    return 0;
}
